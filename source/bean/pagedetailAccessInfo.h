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

#define FIRST_LAYER_SHIFT_BITS 3
#define SLOTS_IN_FIRST_LAYER (1 << FIRST_LAYER_SHIFT_BITS)
#define SLOTS_IN_SECOND_LAYER (MAX_THREAD_NUM/SLOTS_IN_FIRST_LAYER)

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
    unsigned long blockThreadIdAndAccessFirstLayerPtrUnion[BLOCK_NUM];

private:
    static MemoryPool localMemoryPool;
    static MemoryPool localThreadAccessNumberFirstLayerMemoryPool;
    static MemoryPool localThreadAccessNumberSecondLayerMemoryPool;

    PageDetailedAccessInfo(unsigned long pageStartAddress, unsigned long firstTouchThreadId) {
        memset(this, 0, sizeof(PageDetailedAccessInfo));
        this->firstTouchThreadId = firstTouchThreadId;
        this->startAddress = pageStartAddress;
    }

    inline unsigned int getBlockIndex(unsigned long address) const {
        return (address & BLOCK_MASK) >> BLOCK_SHIFT_BITS;
    }

    inline int getStartIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= startAddress) {
            return 0;
        }
        return getBlockIndex(objStartAddress);
    }

    inline int getEndIndex(unsigned long objStartAddress, unsigned long size) const {
        if (objStartAddress <= 0) {
            return BLOCK_NUM - 1;
        }
        unsigned long objEndAddress = objStartAddress + size;
        if (objEndAddress >= (startAddress + PAGE_SIZE)) {
            return BLOCK_NUM - 1;
        }
        return getBlockIndex(objEndAddress);
    }

    int getFirstLayerIndex(unsigned long threadIndex) {
        return threadIndex >> (MAX_THREAD_NUM_SHIFT_BITS - FIRST_LAYER_SHIFT_BITS);
    }

    int getSecondLayerIndex(unsigned long threadIndex) {
        return ((1 << (MAX_THREAD_NUM_SHIFT_BITS - FIRST_LAYER_SHIFT_BITS)) - 1) & threadIndex;
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
            if (blockThreadIdAndAccessFirstLayerPtrUnion[i] > MAX_THREAD_NUM) {
                newObj->blockThreadIdAndAccessFirstLayerPtrUnion[i] = (unsigned long) localThreadAccessNumberFirstLayerMemoryPool.get();
                unsigned short **oldFirstLayerPtr = (unsigned short **) blockThreadIdAndAccessFirstLayerPtrUnion[i];
                unsigned short **newFirstLayerPtr = (unsigned short **) newObj->blockThreadIdAndAccessFirstLayerPtrUnion[i];
                for (int j = 0; j < SLOTS_IN_FIRST_LAYER; j++) {
                    if (oldFirstLayerPtr[j] != NULL) {
                        newFirstLayerPtr[j] = (unsigned short *) localThreadAccessNumberSecondLayerMemoryPool.get();
                        memcpy(newFirstLayerPtr[j], oldFirstLayerPtr[j],
                               localThreadAccessNumberSecondLayerMemoryPool.getMemBlockSize());
                    }
                }
            }
        }
        return newObj;
    }

    inline void recordAccess(unsigned long addr, unsigned long accessThreadId, unsigned long firstTouchThreadId) {
        unsigned int index = getBlockIndex(addr);
        if (accessThreadId == firstTouchThreadId) {
            accessNumberByFirstTouchThread[index]++;
            return;
        } // well, this is not a bug. Since no needs to trace firstTouchThreadId in details.
        accessNumberByOtherThread[index]++;
        if (blockThreadIdAndAccessFirstLayerPtrUnion[index] == accessThreadId) {
            return;
        }
        if (blockThreadIdAndAccessFirstLayerPtrUnion[index] == 0) {
            blockThreadIdAndAccessFirstLayerPtrUnion[index] = accessThreadId;
            return;
        }
        if (blockThreadIdAndAccessFirstLayerPtrUnion[index] <= MAX_THREAD_NUM) {
            blockThreadIdAndAccessFirstLayerPtrUnion[index] = (unsigned long) localThreadAccessNumberFirstLayerMemoryPool.get();
        }
        short **firstLayerPtr = (short **) blockThreadIdAndAccessFirstLayerPtrUnion[index];
        int firstLayerIndex = getFirstLayerIndex(accessThreadId);
        if (firstLayerPtr[firstLayerIndex] == NULL) {
            firstLayerPtr[firstLayerIndex] = (short *) localThreadAccessNumberFirstLayerMemoryPool.get();
        }
        int secondLayerIndex = getSecondLayerIndex(accessThreadId);
        firstLayerPtr[firstLayerIndex][secondLayerIndex]++;
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
            if (blockThreadIdAndAccessFirstLayerPtrUnion[i] > MAX_THREAD_NUM) {
                unsigned short **firstLayerPtr = (unsigned short **) blockThreadIdAndAccessFirstLayerPtrUnion[i];
                for (int j = 0; j < SLOTS_IN_FIRST_LAYER; j++) {
                    if (firstLayerPtr[j] != NULL) {
                        localThreadAccessNumberSecondLayerMemoryPool.release(firstLayerPtr[j]);
                    }
                }
                localThreadAccessNumberFirstLayerMemoryPool.release(
                        (void *) blockThreadIdAndAccessFirstLayerPtrUnion[i]);
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
            if (blockThreadIdAndAccessFirstLayerPtrUnion[i] > MAX_THREAD_NUM) {
                unsigned short **firstLayerPtr = (unsigned short **) blockThreadIdAndAccessFirstLayerPtrUnion[i];
                for (int j = 0; j < SLOTS_IN_FIRST_LAYER; j++) {
                    if (firstLayerPtr[j] != NULL) {
                        localThreadAccessNumberSecondLayerMemoryPool.release(firstLayerPtr[j]);
                    }
                }
                localThreadAccessNumberFirstLayerMemoryPool.release(
                        (void *) blockThreadIdAndAccessFirstLayerPtrUnion[i]);
            }
            blockThreadIdAndAccessFirstLayerPtrUnion[i] = 0;
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
            if (blockThreadIdAndAccessFirstLayerPtrUnion[i] <= MAX_THREAD_NUM) {
                fprintf(file, "%s        thread:%lu, only access by one thread\n", prefix,
                        blockThreadIdAndAccessFirstLayerPtrUnion[i]);
                continue;
            }
            unsigned short **firstLayerPtr = (unsigned short **) blockThreadIdAndAccessFirstLayerPtrUnion[i];
            for (int j = 0; j < SLOTS_IN_FIRST_LAYER; j++) {
                if (firstLayerPtr[j] == NULL) {
                    continue;
                }
                for (int z = 0; z < SLOTS_IN_SECOND_LAYER; z++) {
                    if (firstLayerPtr[j][z] != 0) {
                        fprintf(file, "%s        thread:%d, access number:%d\n", prefix, j * 8 + z,
                                firstLayerPtr[j][z]);
                    }
                }
            }
        }
        // print access num in cacheline level
    }
};

#endif //NUMAPERF_PAGEDETAILACCESSINFO_H
