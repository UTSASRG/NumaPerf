all: libnumaperf.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = libnumaperf.cpp

libnumaperf.so: $(SRCS)
	#clang -DDEBUG_LOG -g -O0 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so $(SRCS) -ldl -lpthread
	clang -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so $(SRCS) -ldl -lpthread
#         clang -g -O0 -shared -fPIC -fno-omit-frame-pointer $(SRCS) -o libnumaperf.so -ldl -I$(INCLUDEPATH) -lpthread

clean:
	rm libnumaperf.so
