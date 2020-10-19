all: libthreadbinding.so

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = libthreadbinding.cpp

libthreadbinding.so: $(SRCS)
	clang -DNUMA_NODES=2 -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libthreadbinding.so $(SRCS) -ldl -lpthread

clean:
	rm libthreadbinding.so
