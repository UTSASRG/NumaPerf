all: libnumaperf.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = libnumaperf.cpp
CXXFLAGS = -DNUMA_NODES=8 -DCORE_NUMBER=128 -DCPU_CLOSE
#CXXFLAGS = -DNUMA_NODES=1 -DCORE_NUMBER=16 -DCPU_INTERLEAVED

libnumaperf.so: $(SRCS)
	clang -DWARN_LOG $(CXXFLAGS) -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so $(SRCS) -ldl -lpthread
	#clang -DDEBUG_LOG -g -O0 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so $(SRCS) -ldl -lpthread
	#clang -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so $(SRCS) -ldl -lpthread
#         clang -g -O0 -shared -fPIC -fno-omit-frame-pointer $(SRCS) -o libnumaperf.so -ldl -I$(INCLUDEPATH) -lpthread

clean:
	rm libnumaperf.so
