#ifndef NUMAPERF_PAGEDETAILACCESSINFO_H
#define NUMAPERF_PAGEDETAILACCESSINFO_H

#include "../utils/memorypool.h"
#include "../xdefines.h"
#include "../utils/addresses.h"
#include "scores.h"

#define BLOCK_SHIFT_BITS ((unsigned int)(1+CACHE_LINE_SHIFT_BITS))
#define BLOCK_SIZE (1 << BLOCK_SHIFT_BITS)
#define BLOCK_NUM (PAGE_SIZE/BLOCK_SIZE)
#define BLOCK_MASK ((unsigned long)0b111110000000)
#define BLOCK_LOW_BITS_MASK ((unsigned long)0b1111111)

//#define FIRST_LAYER_SHIFT_BITS 3
//#define SLOTS_IN_FIRST_LAYER (1 << FIRST_LAYER_SHIFT_BITS)
//#define SLOTS_IN_SECOND_LAYER (MAX_THREAD_NUM/SLOTS_IN_FIRST_LAYER)

/**
 *  strategies used to reduce mem overheads
 *      1.start record multiple threads access number after the block is shared by multiple threads
 *      2.shut down THP in mmap(benefit for shadow mem)
 *      3.two layers structure like page table. since only few threads access a block in most cases, after it is shared by multiple threads
 */
class PageDetailedAccessInfo {
//    unsigned long seriousScore;
    unsigned long firstTouchThreadId;
    unsigned long startAddress;
    unsigned long allAccessNumByOtherThread;
    unsigned int accessNumberByFirstTouchThread[BLOCK_NUM];
    unsigned int accessNumberByOtherThread[BLOCK_NUM];
    unsigned int threadIdAndIsSharedUnion;

private:
    static MemoryPool localMemoryPool;
//    static MemoryPool localThreadAccessNumberFirstLayerMemoryPool;
//    static MemoryPool localThreadAccessNumberSecondLayerMemoryPool;

    PageDetailedAccessInfo(unsigned long pageStartAddress, unsigned long firstTouchThreadId) {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
        this->firstTouchThreadId = firstTouchThreadId;
        this->startAddress = pageStartAddress;
    }

    inline int getBlockIndex(unsigned long address) const {
        return (address & BLOCK_MASK) >> BLOCK_SHIFT_BITS;
    }

    inline int getResidentStartIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= startAddress) {
            return 0;
        }
        return getBlockIndex(objStartAddress);
    }

//    // may go over BLOCK_NUM
//    inline int getCoveredStartIndex(unsigned long objStartAddress, unsigned long size) const {
//        if (objStartAddress <= startAddress) {
//            return 0;
//        }
//        int blockIndex = getBlockIndex(objStartAddress);
//        if ((objStartAddress & BLOCK_LOW_BITS_MASK) != 0) {
//            return blockIndex + 1;
//        }
//        return blockIndex;
//    }
//
//    inline void releaseTwoLayersBlockAccessNum() {
//        if (threadIdAndIsSharedUnion > MAX_THREAD_NUM) {
//            unsigned short **firstLayerPtr = (unsigned short **) threadIdAndIsSharedUnion;
//            for (int j = 0; j < SLOTS_IN_FIRST_LAYER; j++) {
//                if (firstLayerPtr[j] != NULL) {
//                    unsigned short *secondLayerPtr = firstLayerPtr[j];
//                    firstLayerPtr[j] = 0;
//                    localThreadAccessNumberSecondLayerMemoryPool.release(secondLayerPtr);
//                }
//            }
//            threadIdAndIsSharedUnion = 0;
//            localThreadAccessNumberFirstLayerMemoryPool.release(firstLayerPtr);
//        }
//    }

    inline int getResidentEndIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= 0) {
            return BLOCK_NUM - 1;
        }
        unsigned long objEndAddress = objStartAddress + size;
        if (objEndAddress >= (startAddress + PAGE_SIZE)) {
            return BLOCK_NUM - 1;
        }
        return getBlockIndex(objEndAddress);
    }

//    // may go down 0
//    inline int getCoveredEndIndex(unsigned long objStartAddress, unsigned long size) const {
//        if (objStartAddress <= 0) {
//            return BLOCK_NUM - 1;
//        }
//        unsigned long objEndAddress = objStartAddress + size;
//        if (objEndAddress >= (startAddress + PAGE_SIZE)) {
//            return BLOCK_NUM - 1;
//        }
//        int blockIndex = getBlockIndex(objEndAddress);
//        if ((objStartAddress & BLOCK_LOW_BITS_MASK) != 0) {
//            return blockIndex - 1;
//        }
//        return blockIndex;
//    }

//    int getFirstLayerIndex(unsigned long threadIndex) {
//        return threadIndex >> (MAX_THREAD_NUM_SHIFT_BITS - FIRST_LAYER_SHIFT_BITS);
//    }
//
//    int getSecondLayerIndex(unsigned long threadIndex) {
//        return ((1 << (MAX_THREAD_NUM_SHIFT_BITS - FIRST_LAYER_SHIFT_BITS)) - 1) & threadIndex;
//    }

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
        unsigned int index = getBlockIndex(addr);
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread[index]++;
        } else {
            accessNumberByOtherThread[index]++;
        }

        if (threadIdAndIsSharedUnion == accessThreadId) {
            return;
        }
        if (threadIdAndIsSharedUnion == 0) {
            Automics::compare_set(&threadIdAndIsSharedUnion, (unsigned int) 0, (unsigned int) accessThreadId);
            return;
        }
        if (threadIdAndIsSharedUnion > MAX_THREAD_NUM) {
            return;
        }
        threadIdAndIsSharedUnion = MAX_THREAD_NUM + 1;
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
//        releaseTwoLayersBlockAccessNum();
        memset(&(this->allAccessNumByOtherThread), 0, sizeof(PageDetailedAccessInfo) - 2 * sizeof(unsigned long));
    }

    inline void clearResidObjInfo(unsigned long objAddress, unsigned long size) {
        int startIndex = getResidentStartIndex(objAddress, size);
        int endIndex = getResidentEndIndex(objAddress, size);
        for (int i = startIndex; i <= endIndex; i++) {
            this->accessNumberByFirstTouchThread[i] = 0;
            this->accessNumberByOtherThread[i] = 0;
        }
//        releaseTwoLayersBlockAccessNum();
    }

    inline unsigned long getAccessNumberByFirstTouchThread(unsigned long objStartAddress, unsigned long size) const {
        unsigned long accessNumInMainThread = 0;
        int startIndex = getResidentStartIndex(objStartAddress, size);
        int endIndex = getResidentEndIndex(objStartAddress, size);
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
        int startIndex = getResidentStartIndex(objStartAddress, size);
        int endIndex = getResidentEndIndex(objStartAddress, size);
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
        if (threadIdAndIsSharedUnion <= MAX_THREAD_NUM) {
            fprintf(file, "%s        only access by one thread:%lu\n", prefix,
                    threadIdAndIsSharedUnion);
        } else {
            fprintf(file, "%s        this page is shared by multiple threads\n", prefix,
                    threadIdAndIsSharedUnion);
        }
        // print access num in cacheline level
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
