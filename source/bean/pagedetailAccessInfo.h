#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"

typedef struct {
    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThread;
} CacheLineStatics;

class PageDetailedAccessInfo {
    CacheLineStatics cacheLineStatics[CACHE_NUM_IN_ONE_PAGE];

private:
    static MemoryPool localMemoryPool;

    PageDetailedAccessInfo() {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
    }

public:

    static PageDetailedAccessInfo *createNewPageDetailedAccessInfo() {
        void *buff = localMemoryPool.get();
        Logger::debug("new PageDetailedAccessInfo buff address:%lu \n", buff);
        PageDetailedAccessInfo *ret = new(buff) PageDetailedAccessInfo();
        return ret;
    }

    static void release(PageDetailedAccessInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        unsigned long index = ADDRESSES::getCacheIndexInsidePage(addr);
        if (accessThreadId == firstTouchThreadId) {
            cacheLineStatics[index].accessNumberByFirstTouchThread++;
            return;
        }
        cacheLineStatics[index].accessNumberByOtherThread++;
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
