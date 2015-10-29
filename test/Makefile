
default:
	$(CXX) -std=c++0x -dM -E -x c++ - < /dev/null
ifdef USE_COVERAGE
	$(CXX) -coverage test.cpp -o test
else
	$(CXX) test.cpp -o test -I../iutest/include
endif
	$(CXX) dump.cpp -o dump -std=c++0x
	
clean:
	$(RM) -rf test
	
run: test
	./test
	./dump


all: clean default run

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
