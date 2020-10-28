#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"
#include "scores.h"

class PageDetailedAccessInfo {
//    unsigned long seriousScore;
    unsigned long firstTouchThreadId;
    unsigned long startAddress;
    unsigned long allAccessNumByOtherThread;
    unsigned long accessNumberByFirstTouchThread[CACHE_NUM_IN_ONE_PAGE];
    unsigned long accessNumberByOtherThread[CACHE_NUM_IN_ONE_PAGE];
    unsigned long accessNumberByThreads[CACHE_NUM_IN_ONE_PAGE][MAX_THREAD_NUM];

private:
    static MemoryPool localMemoryPool;

    PageDetailedAccessInfo(unsigned long pageStartAddress, unsigned long firstTouchThreadId) {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
        this->firstTouchThreadId = firstTouchThreadId;
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

    static PageDetailedAccessInfo *
    createNewPageDetailedAccessInfo(unsigned long pageStartAddress, unsigned long firstTouchThreadId) {
        void *buff = localMemoryPool.get();
//        Logger::debug("new PageDetailedAccessInfo buff address:%lu \n", buff);
        PageDetailedAccessInfo *ret = new(buff) PageDetailedAccessInfo(pageStartAddress, firstTouchThreadId);
        return ret;
    }

    static void release(PageDetailedAccessInfo *buff) {
        localMemoryPool.release((void *) buff);
    }

    PageDetailedAccessInfo() {}

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
        accessNumberByThreads[index][accessThreadId]++;
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

    inline void clearAll() {
        memset(&(this->allAccessNumByOtherThread), 0, sizeof(PageDetailedAccessInfo) - 2 * sizeof(unsigned long));
    }

    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
        int startIndex = getStartIndex(objAddress, size);
        int endIndex = getEndIndex(objAddress, size);
        for (int i = startIndex; i <= endIndex; i++) {
            this->accessNumberByFirstTouchThread[i] = 0;
            this->accessNumberByOtherThread[i] = 0;
            memset(accessNumberByThreads[i], 0, MAX_THREAD_NUM * sizeof(unsigned long));
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

    inline unsigned long getAccessNumberByOtherTouchThread(unsigned long objStartAddress, unsigned long size) {
        if (0 == objStartAddress && 0 == size && 0 != allAccessNumByOtherThread) {
            return allAccessNumByOtherThread;
        }
        unsigned long accessNumInOtherThread = 0;
        int startIndex = getStartIndex(objStartAddress, size);
        int endIndex = getEndIndex(objStartAddress, size);
        for (unsigned int i = startIndex; i <= endIndex; i++) {
            accessNumInOtherThread += this->accessNumberByOtherThread[i];
        }
        if (0 == objStartAddress && 0 == size) {
            allAccessNumByOtherThread = accessNumInOtherThread;
        }
        return accessNumInOtherThread;
    }

    inline unsigned long getTotalRemoteAccess() {
//        return Scores::getScoreForAccess(this->getAccessNumberByFirstTouchThread(objStartAddress, size),
//                                         this->getAccessNumberByOtherTouchThread(objStartAddress, size));
        return this->getAccessNumberByOtherTouchThread(0, 0);
    }

    inline void clearSumValue() {
        this->allAccessNumByOtherThread = 0;
    }

    inline bool operator<(PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getTotalRemoteAccess() < pageDetailedAccessInfo.getTotalRemoteAccess();
    }

    inline bool operator>(PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getTotalRemoteAccess() > pageDetailedAccessInfo.getTotalRemoteAccess();
    }

    inline bool operator<=(PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getTotalRemoteAccess() <= pageDetailedAccessInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getTotalRemoteAccess() >= pageDetailedAccessInfo.getTotalRemoteAccess();
    }

    inline bool operator==(PageDetailedAccessInfo &pageDetailedAccessInfo) {
        return this->getTotalRemoteAccess() == pageDetailedAccessInfo.getTotalRemoteAccess();
    }

    inline bool operator>=(unsigned long seriousScore) {
        return this->getTotalRemoteAccess() >= seriousScore;
    }

    inline void dump(FILE *file, int blackSpaceNum, unsigned long totalRunningCycles) {
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sPageStartAddress:         %p\n", prefix, (void *) (this->startAddress));
        fprintf(file, "%sFirstTouchThreadId:         %lu\n", prefix, this->firstTouchThreadId);
//        fprintf(file, "%sSeriousScore:             %lu\n", prefix, this->getTotalRemoteAccess(0, 0));
        fprintf(file, "%sAccessNumInMainThread:    %lu\n", prefix,
                this->getAccessNumberByFirstTouchThread(0, this->startAddress + PAGE_SIZE));
        fprintf(file, "%sAccessNumInOtherThreads:  %lu\n", prefix,
                this->getAccessNumberByOtherTouchThread(0, this->startAddress + PAGE_SIZE));
        for (int i = 0; i < CACHE_NUM_IN_ONE_PAGE; i++) {
            if (accessNumberByFirstTouchThread[i] == 0 && accessNumberByOtherThread[i] == 0) {
                continue;
            }
            fprintf(file, "%s    %dth cache block:\n", prefix, i);
            for (int j = 0; j < MAX_THREAD_NUM; j++) {
                if (accessNumberByThreads[i][j] != 0) {
                    fprintf(file, "%s        thread:%d, access number:%lu\n", prefix, j, accessNumberByThreads[i][j]);
                }
            }
        }
        // print access num in cacheline level
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
