
#ifndef ACCESSPATERN_PAGEACCESSINFO_H
#define ACCESSPATERN_PAGEACCESSINFO_H

#include "../xdefines.h"
#include "cachelineaccessinfo.h"
#include "../utils/concurrency/spinlock.h"
#include "objectacessinfo.h"
#include "../utils/real.h"
#include <new>
#include <cstring>


class PageAccessInfo {
private:
    const unsigned long pageStartAddress;
    unsigned long *threadRead;
    unsigned long *threadWrite;
    CacheLineAccessInfo *residentMemoryBlockAccessInfoPtr[CACHE_NUM_IN_ONE_PAGE];
    spinlock lock;

    PageAccessInfo() : pageStartAddress(0) {}

    PageAccessInfo(unsigned long pageStartAddress) : pageStartAddress(pageStartAddress) {
        lock.init();
        threadRead = NULL;
        threadWrite = NULL;
        memset(residentMemoryBlockAccessInfoPtr, NULL, CACHE_NUM_IN_ONE_PAGE * sizeof(void *));
    }

public:

    static PageAccessInfo *createNewPageAccessInfo(unsigned long pageStartAddress) {
        void *buff = Real::malloc(sizeof(PageAccessInfo));
        PageAccessInfo *pageAccessInfo = new(buff) PageAccessInfo(pageStartAddress);
        return pageAccessInfo;
    }


    void insertObjectAccessInfo(void *objectStartAddress, size_t size, void *mallocCallSite) {
        unsigned long _objectStartAddress = (unsigned long) objectStartAddress;
        unsigned long _objectEndAddress = (unsigned long) objectStartAddress + size;
        unsigned long startCacheIndex =
                _objectStartAddress < pageStartAddress ? 0 : (_objectStartAddress - pageStartAddress)
                        >> CACHE_LINE_SHIFT_BITS;

        lock.lock();
        int i = startCacheIndex;
        for (unsigned long cacheLineStartAddress = pageStartAddress + startCacheIndex * CACHE_LINE_SIZE;
             cacheLineStartAddress <= _objectEndAddress &&
             i < CACHE_NUM_IN_ONE_PAGE; cacheLineStartAddress += CACHE_LINE_SIZE, i++) {
            fprintf(stderr,
                    "page start address:%lu, insert object(size:%lu,start address:%lu) into cache start adrress:%lu, index:%d\n",
                    pageStartAddress, size,
                    _objectStartAddress, cacheLineStartAddress, i);
            if (NULL == this->residentMemoryBlockAccessInfoPtr[i]) {
                this->residentMemoryBlockAccessInfoPtr[i] = CacheLineAccessInfo::createNewCacheLineAccessInfo(
                        cacheLineStartAddress);
            }
            this->residentMemoryBlockAccessInfoPtr[i]->insertResidentObject(
                    ObjectAccessInfo::createNewObjectAccessInfo(objectStartAddress, mallocCallSite, size));
        }
        lock.unlock();
    }

    ObjectAccessInfo *findObjectInCacheLine(unsigned long address) {
        assert(address >= pageStartAddress);
        assert(address <= pageStartAddress + PAGE_SIZE);
        unsigned long cacheIndex = (address - pageStartAddress) >> CACHE_LINE_SHIFT_BITS;
        if (NULL == residentMemoryBlockAccessInfoPtr[cacheIndex]) {
            return NULL;
        }
        return residentMemoryBlockAccessInfoPtr[cacheIndex]->findObjectInCacheLine(address);
    }
};

#endif //ACCESSPATERN_PAGEACCESSINFO_H
