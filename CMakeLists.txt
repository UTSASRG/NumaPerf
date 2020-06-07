cmake_minimum_required(VERSION 3.15)
project(NumaPerf)

set(CMAKE_CXX_STANDARD 14)

include_directories(source)
include_directories(source/utils)
include_directories(source/utils/concurrency)

add_executable(NumaPerf
        source/utils/concurrency/automics.h
        source/bean/cachelineaccessinfo.h
        source/utils/collection/hashfuncs.h
        source/utils/collection/list.h
        source/utils/collection/hashmap.h
        source/libnumaperf.cpp
        source/libnumaperf.h
        source/bean/objectacessinfo.h
        source/bean/pageaccessinfo.h
        source/utils/real.h
        source/utils/concurrency/spinlock.h
        source/xdefines.h
        source/utils/log/Logger.h
        source/utils/timer.h
        test/test.cpp)
