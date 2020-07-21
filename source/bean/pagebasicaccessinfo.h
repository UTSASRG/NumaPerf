
#ifndef NUMAPERF_PAGEBASICACCESSINFO_H
#define NUMAPERF_PAGEBASICACCESSINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "pagedetailAccessInfo.h"
#include "../utils/concurrency/automics.h"

class PageBasicAccessInfo {
    unsigned long pageStartAddress;
    unsigned short firstTouchThreadId;
//    bool isPageContainMultipleObjects;
//    unsigned long accessNumberByFirstTouchThread;
    unsigned long accessNumberByOtherThreads;
    PageDetailedAccessInfo *pageDetailedAccessInfo;
    unsigned long cacheLineWritingNumber[CACHE_NUM_IN_ONE_PAGE];

private:
    inline int getStartIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= pageStartAddress) {
            return 0;
        }
        return ADDRESSES::getCacheIndexInsidePage(objStartAddress);
    }

    inline int getEndIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= 0) {
            return CACHE_NUM_IN_ONE_PAGE - 1;
        }
        unsigned long objEndAddress = objStartAddress + size;
        if (objEndAddress >= (pageStartAddress + PAGE_SIZE)) {
            return CACHE_NUM_IN_ONE_PAGE - 1;
        }
        return ADDRESSES::getCacheIndexInsidePage(objEndAddress);
    }

public:
    PageBasicAccessInfo(unsigned short firstTouchThreadId, unsigned long pageStartAddress) {
        this->pageStartAddress = pageStartAddress;
        this->firstTouchThreadId = firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = 0;
        this->accessNumberByOtherThreads = 0;
        pageDetailedAccessInfo = NULL;
        memset(this->cacheLineWritingNumber, 0, CACHE_NUM_IN_ONE_PAGE * sizeof(unsigned long));
    }

    PageBasicAccessInfo(const PageBasicAccessInfo &basicPageAccessInfo) {
        this->pageStartAddress = basicPageAccessInfo.pageStartAddress;
        this->firstTouchThreadId = basicPageAccessInfo.firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = basicPageAccessInfo.accessNumberByFirstTouchThread;
        this->accessNumberByOtherThreads = basicPageAccessInfo.accessNumberByOtherThreads;
        this->pageDetailedAccessInfo = basicPageAccessInfo.pageDetailedAccessInfo;
        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
            this->cacheLineWritingNumber[i] = basicPageAccessInfo.cacheLineWritingNumber[i];
        }
    }

    inline void recordAccessForPageSharing(unsigned long accessThreadId) {
        if (firstTouchThreadId != accessThreadId) {
            accessNumberByOtherThreads++;
        }
    }

    inline void recordAccessForCacheSharing(unsigned long addr, eAccessType type) {
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

    inline bool isCoveredByObj(unsigned long objStartAddress, unsigned long objSize) {
        if (objStartAddress > this->pageStartAddress) {
            return false;
        }
        if ((objStartAddress + objSize) < (this->pageStartAddress + PAGE_SIZE)) {
            return false;
        }
        return true;
    }

    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
        int startIndex = getStartIndex(objAddress, size);
        int endIndex = getEndIndex(objAddress, size);
        for (int i = startIndex; i <= endIndex; i++) {
            this->cacheLineWritingNumber[i] = 0;
        }
    }

    inline PageDetailedAccessInfo *getPageDetailedAccessInfo() {
        return pageDetailedAccessInfo;
    }

    inline PageDetailedAccessInfo *setPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        return this->pageDetailedAccessInfo = pageDetailedAccessInfo;
    }

    inline bool setIfBasentPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        return Automics::compare_set<PageDetailedAccessInfo *>(&(this->pageDetailedAccessInfo), NULL,
                                                               pageDetailedAccessInfo);
    }
};

#endif //NUMAPERF_PAGEBASICACCESSINFO_H
