
#ifndef ACCESSPATERN_PAGEACCESSINFO_H
#define ACCESSPATERN_PAGEACCESSINFO_H

#include "../xdefines.h"
#include "cachelineaccessinfo.h"
#include "../utils/concurrency/spinlock.h"
#include "objectacessinfo.h"
#include "../utils/real.h"
#include "../utils/memorypool.h"
#include <new>
#include <cstring>


class PageAccessInfo {
private:
    static MemoryPool localMemoryPool;

private:
    const unsigned long pageStartAddress;
    unsigned long *threadRead;
    unsigned long *threadWrite;
    CacheLineAccessInfo residentMemoryBlockAccessInfoPtr[CACHE_NUM_IN_ONE_PAGE];

    PageAccessInfo() : pageStartAddress(0) {}

    PageAccessInfo(unsigned long pageStartAddress) : pageStartAddress(pageStartAddress) {
        threadRead = NULL;
        threadWrite = NULL;
        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
            residentMemoryBlockAccessInfoPtr[i].init(pageStartAddress + i * CACHE_LINE_SIZE);
        }
    }

public:

    static PageAccessInfo *createNewPageAccessInfo(unsigned long pageStartAddress) {
        void *buff = localMemoryPool.get();
        memset(buff, 0, sizeof(PageAccessInfo));
        PageAccessInfo *pageAccessInfo = new(buff) PageAccessInfo(pageStartAddress);
        return pageAccessInfo;
    }


    void insertObjectAccessInfo(void *objectStartAddress, size_t size, void *mallocCallSite) {
        unsigned long _objectStartAddress = (unsigned long) objectStartAddress;
        unsigned long _objectEndAddress = (unsigned long) objectStartAddress + size;
        unsigned long startCacheIndex =
                _objectStartAddress < pageStartAddress ? 0 : (_objectStartAddress - pageStartAddress)
                        >> CACHE_LINE_SHIFT_BITS;

        int i = startCacheIndex;
        for (unsigned long cacheLineStartAddress = pageStartAddress + startCacheIndex * CACHE_LINE_SIZE;
             cacheLineStartAddress <= _objectEndAddress &&
             i < CACHE_NUM_IN_ONE_PAGE; cacheLineStartAddress += CACHE_LINE_SIZE, i++) {
            Logger::debug(
                    "page start address:%lu, insert object(size:%lu,start address:%lu) into cache start adrress:%lu, index:%d\n",
                    pageStartAddress, size,
                    _objectStartAddress, cacheLineStartAddress, i);
            this->residentMemoryBlockAccessInfoPtr[i].insertResidentObject(objectStartAddress, mallocCallSite, size);
        }
    }

    ObjectAccessInfo *findObjectInCacheLine(unsigned long address) {
        assert(address >= pageStartAddress);
        assert(address <= pageStartAddress + PAGE_SIZE);
        unsigned long cacheIndex = (address - pageStartAddress) >> CACHE_LINE_SHIFT_BITS;
        return residentMemoryBlockAccessInfoPtr[cacheIndex].findObjectInCacheLine(address);
    }
};

#endif //ACCESSPATERN_PAGEACCESSINFO_H
