#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"
#include "scores.h"

class PageDetailedAccessInfo {
//    unsigned long seriousScore;
    unsigned long startAddress;
    unsigned long accessNumberByFirstTouchThread[CACHE_NUM_IN_ONE_PAGE];
    unsigned long accessNumberByOtherThread[CACHE_NUM_IN_ONE_PAGE];

private:
    static MemoryPool localMemoryPool;

    PageDetailedAccessInfo(unsigned long pageStartAddress) {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
        this->startAddress = pageStartAddress;
    }

    inline int getStartIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= startAddress) {
            return 0;
        }
        return ADDRESSES::getCacheIndexInsidePage(objStartAddress);
    }

    inline int getEndIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= 0) {
            return CACHE_NUM_IN_ONE_PAGE - 1;
        }
        unsigned long objEndAddress = objStartAddress + size;
        if (objEndAddress >= (startAddress + PAGE_SIZE)) {
            return CACHE_NUM_IN_ONE_PAGE - 1;
        }
        return ADDRESSES::getCacheIndexInsidePage(objEndAddress);
    }

public:

    static PageDetailedAccessInfo *createNewPageDetailedAccessInfo(unsigned long pageStartAddress) {
        void *buff = localMemoryPool.get();
        Logger::debug("new PageDetailedAccessInfo buff address:%lu \n", buff);
        PageDetailedAccessInfo *ret = new(buff) PageDetailedAccessInfo(pageStartAddress);
        return ret;
    }

    static void release(PageDetailedAccessInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    PageDetailedAccessInfo *copy() {
        void *buff = localMemoryPool.get();
        memcpy(buff, this, sizeof(PageDetailedAccessInfo));
        return (PageDetailedAccessInfo *) buff;
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        unsigned int index = ADDRESSES::getCacheIndexInsidePage(addr);
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread[index]++;
            return;
        }
        accessNumberByOtherThread[index]++;
    }

    inline bool isCoveredByObj(unsigned long objStartAddress, unsigned long objSize) {
        if (objStartAddress > this->startAddress) {
            return false;
        }
        if ((objStartAddress + objSize) < (this->startAddress + PAGE_SIZE)) {
            return false;
        }
        return true;
    }

    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
        int startIndex = getStartIndex(objAddress, size);
        int endIndex = getEndIndex(objAddress, size);
        for (int i = startIndex; i <= endIndex; i++) {
            this->accessNumberByFirstTouchThread[i] = 0;
            this->accessNumberByOtherThread[i] = 0;
        }
    }

    inline unsigned long getAccessNumberByFirstTouchThread(unsigned long objStartAddress, unsigned long size) const {
        unsigned long accessNumInMainThread = 0;
        int startIndex = getStartIndex(objStartAddress, size);
        int endIndex = getEndIndex(objStartAddress, size);
        for (unsigned int i = startIndex; i <= endIndex; i++) {
            accessNumInMainThread += this->accessNumberByFirstTouchThread[i];
        }
        return accessNumInMainThread;
    }

    inline unsigned long getAccessNumberByOtherTouchThread(unsigned long objStartAddress, unsigned long size) const {
        unsigned long accessNumInOtherThread = 0;
        int startIndex = getStartIndex(objStartAddress, size);
        int endIndex = getEndIndex(objStartAddress, size);
        for (unsigned int i = startIndex; i <= endIndex; i++) {
            accessNumInOtherThread += this->accessNumberByOtherThread[i];
        }
        return accessNumInOtherThread;
    }

    inline unsigned long getSeriousScore(unsigned long objStartAddress, unsigned long size) const {
        return Scores::getScoreForAccess(this->getAccessNumberByFirstTouchThread(objStartAddress, size),
                                         this->getAccessNumberByOtherTouchThread(objStartAddress, size));
    }

    inline bool operator<(const PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getSeriousScore(0, 0) < pageDetailedAccessInfo.getSeriousScore(0, 0);
    }

    inline bool operator>(const PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getSeriousScore(0, 0) > pageDetailedAccessInfo.getSeriousScore(0, 0);
    }

    inline bool operator>=(const PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getSeriousScore(0, 0) >= pageDetailedAccessInfo.getSeriousScore(0, 0);
    }

    inline bool operator==(const PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getSeriousScore(0, 0) == pageDetailedAccessInfo.getSeriousScore(0, 0);
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
