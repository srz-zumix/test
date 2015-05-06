
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

twilio:
ifdef USE_TWILIO
	@if [ ./test ]; then cd ../iutest/tools/twilio; ./iutwilio.py --account_sid=$(SID) --autho_token=$(AUTH) --number=$(NUMBER) --call $(TO); fi
endif

all: clean default run twilio

# coverage
send-coverage:
ifdef USE_COVERAGE
	coveralls -e test
endif
