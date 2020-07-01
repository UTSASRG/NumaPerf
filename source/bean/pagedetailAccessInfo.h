#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include <cstring>
#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"

class PageDetailedAccessInfo {
    unsigned long accessNumberByFirstTouchThread[CACHE_NUM_IN_ONE_PAGE];
    unsigned long accessNumberByOtherThread[CACHE_NUM_IN_ONE_PAGE];

private:
    static MemoryPool localMemoryPool;

    PageDetailedAccessInfo() {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
    }

public:

    static PageDetailedAccessInfo *createNewPageDetailedAccessInfo() {
        void *buff = localMemoryPool.get();
        Logger::debug("new PageDetailedAccessInfo buff address:%lu \n", buff);
        PageDetailedAccessInfo *ret = new (buff) PageDetailedAccessInfo();
        return ret;
    }

    static void release(PageDetailedAccessInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        unsigned long index = ADDRESSES::getCacheIndexInsidePage(addr);
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread[index]++;
            return;
        }
        accessNumberByOtherThread[index]++;
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
