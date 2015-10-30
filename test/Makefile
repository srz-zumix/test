
default:
	$(CXX) -std=c++0x -dM -E -x c++ - < /dev/null
ifdef USE_COVERAGE
	$(CXX) -coverage test.cpp -o test
else
	$(CXX) test.cpp -o test -I../iutest/include
endif
	$(CXX) dump.cpp -o dump -std=c++0x
	
clean:
	$(RM) -rf test dump
	
run: test
	./test
	./dump
	
dump: dump.cpp
	$(CXX) -std=c++0x -dM -E -x c++ - < /dev/null
	$(CXX) dump.cpp -o dump -std=c++0x
	./dump


all: clean default run

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
