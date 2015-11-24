LOG=0
n = 1

default: version predefine loop

version: Makefile
	-$(CXX) --version
	-g++ --version
	-clang++ --version

predefine: Makefile
	$(CXX) -std=c++0x -dM -E -x c++ - < /dev/null

loop: Makefile
	n=${n};	\
	while [ $${n} -gt 0 ] ; do \
		if [ ${LOG} -gt 0 ] ; then \
			echo $${n};	\
		fi; \
		n=`expr $$n + 1`;	\
		sleep 60; \
	done
