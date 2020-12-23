#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"
#include "scores.h"

#define BLOCK_SIZE CACHE_LINE_SIZE
#define BLOCK_NUM (PAGE_SIZE/CACHE_LINE_SIZE)

class PageDetailedAccessInfo {
//    unsigned long seriousScore;
    unsigned long firstTouchThreadId;
    unsigned long startAddress;
    unsigned long allAccessNumByOtherThread;
    unsigned long accessNumberByFirstTouchThread[BLOCK_SIZE];
    unsigned long accessNumberByOtherThread[BLOCK_SIZE];
    unsigned long blockThreadIdAndAccessNumPtrUnion[BLOCK_NUM];

private:
    static MemoryPool localMemoryPool;
    static MemoryPool localThreadAccessNumberMemoryPool;

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
        PageDetailedAccessInfo *newObj = (PageDetailedAccessInfo *) buff;
        for (int i = 0; i < BLOCK_NUM; i++) {
            if (newObj->blockThreadIdAndAccessNumPtrUnion[i] > MAX_THREAD_NUM) {
                void *oldOne = (void *) (newObj->blockThreadIdAndAccessNumPtrUnion[i]);
                newObj->blockThreadIdAndAccessNumPtrUnion[i] = (unsigned long) localThreadAccessNumberMemoryPool.get();
                memcpy((void *) (newObj->blockThreadIdAndAccessNumPtrUnion[i]), oldOne,
                       localThreadAccessNumberMemoryPool.getMemBlockSize());
            }
        }
        return newObj;
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        unsigned int index = ADDRESSES::getCacheIndexInsidePage(addr);
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread[index]++;
            return;
        } // well, this is not a bug. Since no needs to trace firstTouchThreadId in details.
        accessNumberByOtherThread[index]++;
        if (blockThreadIdAndAccessNumPtrUnion[index] == accessThreadId) {
            return;
        }
        if (blockThreadIdAndAccessNumPtrUnion[index] == 0) {
            blockThreadIdAndAccessNumPtrUnion[index] = accessThreadId;
            return;
        }
        if (blockThreadIdAndAccessNumPtrUnion[index] <= MAX_THREAD_NUM) {
            blockThreadIdAndAccessNumPtrUnion[index] = (unsigned long) localThreadAccessNumberMemoryPool.get();
        }
        ((unsigned long *) blockThreadIdAndAccessNumPtrUnion[index])[accessThreadId]++;
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
        for (int i = 0; i < BLOCK_NUM; i++) {
            if (blockThreadIdAndAccessNumPtrUnion[i] > MAX_THREAD_NUM) {
                localThreadAccessNumberMemoryPool.release((void *) blockThreadIdAndAccessNumPtrUnion[i]);
            }
        }
        memset(&(this->allAccessNumByOtherThread), 0, sizeof(PageDetailedAccessInfo) - 2 * sizeof(unsigned long));
    }

    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
        int startIndex = getStartIndex(objAddress, size);
        int endIndex = getEndIndex(objAddress, size);
        for (int i = startIndex; i <= endIndex; i++) {
            this->accessNumberByFirstTouchThread[i] = 0;
            this->accessNumberByOtherThread[i] = 0;
            localThreadAccessNumberMemoryPool.release((void *) blockThreadIdAndAccessNumPtrUnion[i]);
            blockThreadIdAndAccessNumPtrUnion[i] = 0;
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
        for (int i = 0; i < BLOCK_NUM; i++) {
            if (accessNumberByFirstTouchThread[i] == 0 && accessNumberByOtherThread[i] == 0) {
                continue;
            }
            fprintf(file, "%s    %dth block:\n", prefix, i);
            if (blockThreadIdAndAccessNumPtrUnion[i] <= MAX_THREAD_NUM) {
                fprintf(file, "%s        thread:%lu, only access by one thread\n", prefix,
                        blockThreadIdAndAccessNumPtrUnion[i]);
                continue;
            }
            for (int j = 0; j < MAX_THREAD_NUM; j++) {
                if (((unsigned long *) blockThreadIdAndAccessNumPtrUnion[i])[j] != 0) {
                    fprintf(file, "%s        thread:%d, access number:%lu\n", prefix, j,
                            ((unsigned long *) blockThreadIdAndAccessNumPtrUnion[i])[j]);
                }
            }
        }
        // print access num in cacheline level
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
