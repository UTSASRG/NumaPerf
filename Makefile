# -DBINGDING				enable binding

INCLUDE_DIRS = -I./source
all:
	g++ $(INCLUDE_DIRS) -shared -fPIC -fno-omit-frame-pointer -o libinstrument.so source/libinstrument.cpp -ldl -lpthread -lnuma
	llvm/llvmbuild/bin/clang -Wl,./libinstrument.so -finstrumenter -g -O0 source/test.c -o test -lpthread

clean:
	rm libinstrument.so test
