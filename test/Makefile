all: test

# INCLUDEPATH = /usr/include/x86_64-linux-gnu/c++/4.8/

SRCS = test.cpp

test: $(SRCS)
	../llvm/build/bin/clang++ -Xclang -load -Xclang ../llvm/build/lib/LLVMInstrumenter.so -Wl,../source/libnumaperf.so -g -O3 $(SRCS) -o test.exe
	clang -DWARN_LOG -g -O3 -shared -fPIC -fno-omit-frame-pointer -o libnumaperf.so libnumaperfempty.cpp -ldl -lpthread
	../llvm/build/bin/clang++ -Xclang -load -Xclang ../llvm/build/lib/LLVMInstrumenter.so -Wl,./libnumaperf.so -g -O3 $(SRCS) -o emptytest.exe
	#../llvm/build/bin/clang++ -Xclang -load -Xclang ../llvm/build/lib/LLVMInstrumenter.so -Wl,../source/libnumaperf.so -g -O0 $(SRCS) -o test.exe
	#../llvm/build/bin/clang++ -Xclang -load -Xclang ../llvm/build/lib/LLVMInstrumenter.so -Wl,../source/libnumaperf.so -g -O0 $(SRCS) -o test -I/usr/include/x86_64-linux-gnu/c++/7/
        #/media/umass/datasystem/xin/Numachy/evaluation/llvm/install/bin/clang++ -Wl,/media/umass/datasystem/xin/Numachy/accesspatern/libtrap.so -finstrumenter -g -O0 test.cpp -o test -I/usr/include/x86_64-linux-gnu/c++/7/

clean:
	rm test.exe
