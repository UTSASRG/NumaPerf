#!/bin/sh

./configure --prefix=/home/corey/NumaSim/llvm/llvmbuild \
            --sysconfdir=/etc          \
            --libdir=/home/corey/NumaSim/llvm/llvmbuild/lib/llvm     \
            --enable-optimized         \
            --enable-shared            \
            --enable-targets=all       \
            --disable-assertions       \
            --disable-debug-runtime    \
            --disable-expensive-checks 
make -j16 & make install
