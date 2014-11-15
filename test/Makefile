
default:
ifdef USE_COVERAGE
	$(CXX) -coverage test.cpp -o test
else
	$(CXX) test.cpp -o test -I../iutest/include
endif

clean:
	$(RM) -rf test

all: clean default

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
