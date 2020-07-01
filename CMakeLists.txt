cmake_minimum_required(VERSION 3.15)
project(NumaPerf)

set(CMAKE_CXX_STANDARD 14)

include_directories(source)
include_directories(source/utils)
include_directories(source/utils/concurrency)

add_executable(NumaPerf
        source/utils/concurrency/automics.h
        source/utils/collection/hashfuncs.h
        source/utils/collection/shadowhashmap.h
        source/utils/collection/list.h
        source/utils/collection/hashmap.h
        source/libnumaperf.cpp
        source/libnumaperf.h
        source/bean/objectInfo.h
        source/bean/pagebasicaccessinfo.h
        source/bean/pagedetailAccessInfo.h
        source/bean/cachelinedetailedinfo.h
        source/utils/real.h
        source/utils/addresses.h
        source/utils/concurrency/spinlock.h
        source/xdefines.h
        source/utils/log/Logger.h
        source/utils/timer.h
        source/utils/memorypool.h
        source/utils/mm.hh
        test/test.cpp)
