
#ifndef NUMAPERF_PAGEBASICACCESSINFO_H
#define NUMAPERF_PAGEBASICACCESSINFO_H

#include "../xdefines.h"
#include "../utils/addresses.h"
#include "pagedetailAccessInfo.h"
#include "../utils/concurrency/automics.h"

#define BASIC_BLOCK_SHIFT_BITS ((unsigned int)(CACHE_LINE_SHIFT_BITS+1))
#define BASIC_BLOCK_SIZE (1 << BASIC_BLOCK_SHIFT_BITS)
#define BASIC_BLOCK_NUM (PAGE_SIZE/BASIC_BLOCK_SIZE)
#define BASIC_BLOCK_MASK ((unsigned long)0b111110000000)

class PageBasicAccessInfo {
//    unsigned long pageStartAddress;
    short firstTouchThreadId;
//    bool isPageContainMultipleObjects;
//    unsigned long accessNumberByFirstTouchThread;
    PageDetailedAccessInfo *pageDetailedAccessInfo;
    unsigned int accessNumberByOtherThreads;
    unsigned long blockWritingNumberCacheDetailPtrUnion[BASIC_BLOCK_NUM];

private:

    inline int getBlockIndex(unsigned long address) const {
        return (address & BASIC_BLOCK_MASK) >> BASIC_BLOCK_SHIFT_BITS;
    }
//    inline int getStartIndex(unsigned long objStartAddress, unsigned long size) const {
//        if (objStartAddress <= pageStartAddress) {
//            return 0;
//        }
//        return ADDRESSES::getCacheIndexInsidePage(objStartAddress);
//    }
//
//    inline int getEndIndex(unsigned long objStartAddress, unsigned long size) const {
//        if (objStartAddress <= 0) {
//            return CACHE_NUM_IN_ONE_PAGE - 1;
//        }
//        unsigned long objEndAddress = objStartAddress + size;
//        if (objEndAddress >= (pageStartAddress + PAGE_SIZE)) {
//            return CACHE_NUM_IN_ONE_PAGE - 1;
//        }
//        return ADDRESSES::getCacheIndexInsidePage(objEndAddress);
//    }

public:
    PageBasicAccessInfo(long firstTouchThreadId, unsigned long pageStartAddress) {
//        this->pageStartAddress = pageStartAddress;
        this->firstTouchThreadId = firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = 0;
//        this->accessNumberByOtherThreads = 0;
//        pageDetailedAccessInfo = NULL;
//        memset(this->cacheLineWritingNumber, 0, CACHE_NUM_IN_ONE_PAGE * sizeof(unsigned long));
    }

    PageBasicAccessInfo(const PageBasicAccessInfo &basicPageAccessInfo) {
//        this->pageStartAddress = basicPageAccessInfo.pageStartAddress;
        this->firstTouchThreadId = basicPageAccessInfo.firstTouchThreadId;
//        this->accessNumberByFirstTouchThread = basicPageAccessInfo.accessNumberByFirstTouchThread;
//        this->accessNumberByOtherThreads = basicPageAccessInfo.accessNumberByOtherThreads;
//        this->pageDetailedAccessInfo = basicPageAccessInfo.pageDetailedAccessInfo;
//        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
//            this->cacheLineWritingNumber[i] = basicPageAccessInfo.cacheLineWritingNumber[i];
//        }
    }

    inline void recordAccessForPageSharing(long accessThreadId) {
        if (firstTouchThreadId != accessThreadId) {
            accessNumberByOtherThreads++;
        }
    }

    inline void recordAccessForCacheSharing(unsigned long addr, eAccessType type) {
//        if (type == E_ACCESS_WRITE && accessNumberByOtherThreads > PAGE_CACHE_BASIC_THRESHOLD) {
        if (type == E_ACCESS_WRITE) {
            unsigned int index = getBlockIndex(addr);
            if (blockWritingNumberCacheDetailPtrUnion[index] > CACHE_SHARING_DETAIL_THRESHOLD) {
                return;
            }
            blockWritingNumberCacheDetailPtrUnion[index]++;
        }
    }

    inline bool needPageSharingDetailInfo() {
        return accessNumberByOtherThreads > PAGE_SHARING_DETAIL_THRESHOLD;
    }

    inline bool needCacheLineSharingDetailInfo(unsigned long addr) {
        return blockWritingNumberCacheDetailPtrUnion[getBlockIndex(addr)] > CACHE_SHARING_DETAIL_THRESHOLD &&
               accessNumberByOtherThreads > PAGE_CACHE_BASIC_THRESHOLD;
    }

    inline long getFirstTouchThreadId() {
        return firstTouchThreadId;
    }

    inline void setFirstTouchThreadIdIfAbsent(long firstTouchThreadId) {
        Automics::compare_set<short>(&(this->firstTouchThreadId), -1, (short) firstTouchThreadId);
    }

//    inline bool isCoveredByObj(unsigned long objStartAddress, unsigned long objSize) {
//        if (objStartAddress > this->pageStartAddress) {
//            return false;
//        }
//        if ((objStartAddress + objSize) < (this->pageStartAddress + PAGE_SIZE)) {
//            return false;
//        }
//        return true;
//    }

//    inline void clearAll() {
//        memset(&(this->accessNumberByOtherThreads), 0,
//               sizeof(PageBasicAccessInfo) - sizeof(unsigned long) - sizeof(void *) - sizeof(unsigned short));
//    }

//    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
//        int startIndex = getStartIndex(objAddress, size);
//        int endIndex = getEndIndex(objAddress, size);
//        int num = endIndex - startIndex + 1;
//        if (num > (CACHE_NUM_IN_ONE_PAGE / 2)) {
//            accessNumberByOtherThreads = accessNumberByOtherThreads / 2;
//        }
//        for (int i = startIndex; i <= endIndex; i++) {
//            this->cacheLineWritingNumber[i] = 0;
//        }
//    }

    inline PageDetailedAccessInfo *getPageDetailedAccessInfo() {
        return pageDetailedAccessInfo;
    }

    inline PageDetailedAccessInfo *setPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        return this->pageDetailedAccessInfo = pageDetailedAccessInfo;
    }

    inline unsigned long getAccessNumberByOtherThreads() const {
        return accessNumberByOtherThreads;
    }

    inline bool setIfBasentPageDetailedAccessInfo(PageDetailedAccessInfo *pageDetailedAccessInfo) {
        return Automics::compare_set<PageDetailedAccessInfo *>(&(this->pageDetailedAccessInfo), NULL,
                                                               pageDetailedAccessInfo);
    }
};

#endif //NUMAPERF_PAGEBASICACCESSINFO_H
