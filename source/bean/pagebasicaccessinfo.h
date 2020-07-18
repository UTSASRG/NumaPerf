
#ifndef NUMAPERF_PAGEBASICACCESSINFO_H
#define NUMAPERF_PAGEBASICACCESSINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "pagedetailAccessInfo.h"
#include "../utils/concurrency/automics.h"

class PageBasicAccessInfo {
    unsigned short firstTouchThreadId;
//    bool isPageContainMultipleObjects;
//    unsigned long accessNumberByFirstTouchThread;
//    unsigned long accessNumberByOtherThreads;
//    PageDetailedAccessInfo *pageDetailedAccessInfo;
    unsigned long cacheLineWritingNumber[CACHE_NUM_IN_ONE_PAGE];

public:
    PageBasicAccessInfo(unsigned short firstTouchThreadId) {
        this->firstTouchThreadId = firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = 0;
//        this->accessNumberByOtherThreads = 0;
//        pageDetailedAccessInfo = NULL;
        memset(this->cacheLineWritingNumber, 0, CACHE_NUM_IN_ONE_PAGE * sizeof(unsigned long));
    }

    PageBasicAccessInfo(const PageBasicAccessInfo &basicPageAccessInfo) {
        this->firstTouchThreadId = basicPageAccessInfo.firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = basicPageAccessInfo.accessNumberByFirstTouchThread;
//        this->accessNumberByOtherThreads = basicPageAccessInfo.accessNumberByOtherThreads;
//        this->pageDetailedAccessInfo = basicPageAccessInfo.pageDetailedAccessInfo;
        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
            this->cacheLineWritingNumber[i] = basicPageAccessInfo.cacheLineWritingNumber[i];
        }
    }

//    inline void recordAccessForPageSharing(unsigned long accessThreadId) {
//        if (firstTouchThreadId != accessThreadId) {
//            accessNumberByOtherThreads++;
//        }
//    }

    inline void recordAccessForCacheSharing(unsigned long addr, eAccessType type) {
        if (type == E_ACCESS_WRITE) {
            cacheLineWritingNumber[ADDRESSES::getCacheIndexInsidePage(addr)]++;
        }
    }

//    inline bool needPageSharingDetailInfo() {
//        return accessNumberByOtherThreads > PAGE_SHARING_DETAIL_THRESHOLD;
//    }

    inline bool needCacheLineSharingDetailInfo(unsigned long addr) {
        return cacheLineWritingNumber[ADDRESSES::getCacheIndexInsidePage(addr)] > CACHE_SHARING_DETAIL_THRESHOLD;
    }

    inline unsigned short getFirstTouchThreadId() {
        return firstTouchThreadId;
    }

//    inline PageDetailedAccessInfo *getPageDetailedAccessInfo() {
//        return pageDetailedAccessInfo;
//    }
//
//    inline bool setIfBasentPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
//        return Automics::compare_set<PageDetailedAccessInfo *>(&(this->pageDetailedAccessInfo), NULL,
//                                                               pageDetailedAccessInfo);
//    }
};

#endif //NUMAPERF_PAGEBASICACCESSINFO_H
