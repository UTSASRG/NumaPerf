
#ifndef NUMAPERF_BASICPAGEACCESSINFO_H
#define NUMAPERF_BASICPAGEACCESSINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"

class BasicPageAccessInfo {
    unsigned short firstTouchThreadId;
//    bool isPageContainMultipleObjects;
    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThreads;
    unsigned long cacheLineWritingNumber[CACHE_NUM_IN_ONE_PAGE];

public:
    BasicPageAccessInfo(unsigned short firstTouchThreadId) {
        this->firstTouchThreadId = firstTouchThreadId;
        this->accessNumberByFirstTouchThread = 0;
        this->accessNumberByOtherThreads = 0;
        memset(this->cacheLineWritingNumber, 0, CACHE_NUM_IN_ONE_PAGE * sizeof(unsigned long));
    }

    BasicPageAccessInfo(const BasicPageAccessInfo &basicPageAccessInfo) {
        this->firstTouchThreadId = basicPageAccessInfo.firstTouchThreadId;
        this->accessNumberByFirstTouchThread = basicPageAccessInfo.accessNumberByFirstTouchThread;
        this->accessNumberByOtherThreads = basicPageAccessInfo.accessNumberByOtherThreads;
        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
            this->cacheLineWritingNumber[i] = basicPageAccessInfo.cacheLineWritingNumber[i];
        }
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, eAccessType type) {
        if (firstTouchThreadId == accessThreadId) {
            accessNumberByFirstTouchThread++;
        } else {
            accessNumberByOtherThreads++;
        }
        if (type == E_ACCESS_WRITE) {
            cacheLineWritingNumber[ADDRESSES::getCacheIndexInsidePage(addr)]++;
        }
    }

    inline bool needPageSharingDetailInfo() {
        return accessNumberByOtherThreads > PAGE_SHARING_DETAIL_THRESHOLD;
    }

    inline bool needCacheLineSharingDetailInfo(unsigned long addr) {
        return cacheLineWritingNumber[ADDRESSES::getCacheIndexInsidePage(addr)] > CACHE_SHARING_DETAIL_THRESHOLD;
    }

    inline unsigned short getFirstTouchThreadId() {
        return firstTouchThreadId;
    }
};

#endif //NUMAPERF_BASICPAGEACCESSINFO_H
