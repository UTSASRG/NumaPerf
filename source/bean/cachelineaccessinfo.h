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
    unsigned long cacheLineStartAddress;
    unsigned long *threadRead;
    unsigned long *threadWrite;
    ObjectAccessInfo residentObjectsInfoPtr[CACHE_LINE_SIZE];

public:

    CacheLineAccessInfo() {}

    void init(unsigned long cacheLineStartAddress) {
        this->cacheLineStartAddress = cacheLineStartAddress;
        this->threadRead = NULL;
        this->threadWrite = NULL;
    }

    void clear() {
        this->cacheLineStartAddress = NULL;
        this->threadRead = NULL;
        this->threadWrite = NULL;
        memset(this->residentObjectsInfoPtr, 0, CACHE_LINE_SIZE * sizeof(void *));
    }

//    static CacheLineAccessInfo *createNewCacheLineAccessInfo(unsigned long cacheLineStartAddress) {
//        void *buff = localMemoryPool.get();;
//        CacheLineAccessInfo *cacheLineAccessInfo = new(buff) CacheLineAccessInfo(cacheLineStartAddress);
//        return cacheLineAccessInfo;
//    }

    void insertResidentObject(void *startAddress, void *mallocCallSite, size_t size) {
        unsigned long objectStartAddress = (unsigned long) startAddress;
        unsigned long objectIndex =
                objectStartAddress < cacheLineStartAddress ? 0 : objectStartAddress - cacheLineStartAddress;
        Logger::debug("cache start address:%lu, index is: %d\n", cacheLineStartAddress, objectIndex);
        assert(objectIndex < CACHE_LINE_SIZE);
        residentObjectsInfoPtr[objectIndex].init(startAddress, mallocCallSite, size);
    }

    ObjectAccessInfo *findObjectInCacheLine(unsigned long address) {
        assert(address >= cacheLineStartAddress);
        assert(address <= cacheLineStartAddress + CACHE_LINE_SIZE);
        unsigned long index = address - cacheLineStartAddress;
        if (residentObjectsInfoPtr[index].getStartAddress() == 0) {
            return NULL;
        }
        return &residentObjectsInfoPtr[index];
    }
};

#endif //ACCESSPATERN_CACHELINEACCESSINFO_H
