
default:
ifdef USE_COVERAGE
	$(CXX) -coverage test.cpp -o test
else
	$(CXX) test.cpp -o test
endif

clean:
	$(RM) -rf test

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
