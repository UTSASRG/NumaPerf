all: libinterleaved.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = libinterleaved.cpp

libinterleaved.so: $(SRCS)
	clang -DNUMA_NODES=8 -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libinterleaved.so $(SRCS) -ldl -lpthread -lnuma

clean:
	rm libinterleaved.so
