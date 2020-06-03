all: test

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = test.cpp

test: $(SRCS)
        /media/umass/datasystem/xin/llvm-project/build3/bin/clang++ -Xclang -load -Xclang /media/umass/datasystem/xin/llvm-project/build3/lib/LLVMInstrumenter.so -Wl,../source/libnumaperf.so -g -O0 $(SRCS) -o test -I/usr/include/x86_64-linux-gnu/c++/7/
        #/media/umass/datasystem/xin/Numachy/evaluation/llvm/install/bin/clang++ -Wl,/media/umass/datasystem/xin/Numachy/accesspatern/libtrap.so -finstrumenter -g -O0 test.cpp -o test -I/usr/include/x86_64-linux-gnu/c++/7/

clean:
        rm test