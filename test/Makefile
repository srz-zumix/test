
default:
ifdef USE_COVERAGE
	$(CXX) -coverage test.cpp -o test
else
	$(CXX) test.cpp -o test -I../iutest/include
endif

clean:
	$(RM) -rf test
	
run: test
	./test


all: clean default run

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
