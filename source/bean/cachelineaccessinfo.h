#ifndef ACCESSPATERN_CACHELINEACCESSINFO_H
#define ACCESSPATERN_CACHELINEACCESSINFO_H

#include "objectacessinfo.h"
#include "../xdefines.h"
#include "../utils/real.h"
#include <new>
#include <cstring>
#include "../utils/log/Logger.h"
#include "../utils/memorypool.h"

class CacheLineAccessInfo {
//private:
//    static MemoryPool localMemoryPool;

private:
    unsigned long *threadRead;
    unsigned long *threadWrite;
    ObjectAccessInfo residentObjectsInfoPtr[CACHE_LINE_SIZE];

public:

    CacheLineAccessInfo() {}

//    static CacheLineAccessInfo *createNewCacheLineAccessInfo(unsigned long cacheLineStartAddress) {
//        void *buff = localMemoryPool.get();;
//        CacheLineAccessInfo *cacheLineAccessInfo = new(buff) CacheLineAccessInfo(cacheLineStartAddress);
//        return cacheLineAccessInfo;
//    }

//    void insertResidentObject(void *startAddress, void *mallocCallSite, size_t size) {
//        unsigned long objectStartAddress = (unsigned long) startAddress;
//        unsigned long objectIndex =
//                objectStartAddress < cacheLineStartAddress ? 0 : objectStartAddress - cacheLineStartAddress;
//        Logger::debug("cache start address:%lu, index is: %d\n", cacheLineStartAddress, objectIndex);
//        assert(objectIndex < CACHE_LINE_SIZE);
//        residentObjectsInfoPtr[objectIndex].init(startAddress, mallocCallSite, size);
//    }

    ObjectAccessInfo *findObjectInCacheLine(int index) {
        return &residentObjectsInfoPtr[index];
    }

//    ObjectAccessInfo *findObjectInCacheLine(int index) {
//        assert(address >= cacheLineStartAddress);
//        assert(address <= cacheLineStartAddress + CACHE_LINE_SIZE);
//        unsigned long index = address - cacheLineStartAddress;
//        if (residentObjectsInfoPtr[index].getStartAddress() == 0) {
//            return NULL;
//        }
//        return &residentObjectsInfoPtr[index];
//    }
};

#endif //ACCESSPATERN_CACHELINEACCESSINFO_H
