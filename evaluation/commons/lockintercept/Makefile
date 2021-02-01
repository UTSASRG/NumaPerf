all: liblockintercept.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = liblockintercept.cpp

liblockintercept.so: $(SRCS)
	clang -DNUMA_NODES=8 -DMAX_THREAD_NUM=1024 -g -O3 -shared -fPIC -fno-omit-frame-pointer -o liblockintercept.so $(SRCS) -ldl -lpthread -lnuma

clean:
	rm libthreadbinding.so
