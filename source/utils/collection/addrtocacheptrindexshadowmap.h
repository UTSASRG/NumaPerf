#ifndef NUMAPERF_ADDRTOCACHEPTRINDEXSHADOWMAP_H
#define NUMAPERF_ADDRTOCACHEPTRINDEXSHADOWMAP_H

#include "../mm.hh"
#include "../maths.h"
#include "../addresses.h"
#include "../log/Logger.h"
#include "../concurrency/automics.h"
#include "../concurrency/spinlock.h"
#include "../../xdefines.h"
#include "../asserts.h"

#define PTR_SIZE 8
#define CACHE_PTR_MAX_FRAGMENTS 8

class AddressToCachePtrIndexShadowMap {

    unsigned long fragmentSize;
//    unsigned long fragmentMappingBitMask;
//    unsigned long fragmentMappingBitNum;
//    spinlock lock;
    void *startAddress;


private:
    inline unsigned long hashKey(unsigned long key) {
//        unsigned long offsetInSegment = key & fragmentMappingBitMask;
        return ADDRESSES::getCacheIndex(key);
    }

    inline void *getDataBlock(unsigned long key) {
//        unsigned int fragmentIndex = key >> fragmentMappingBitNum;
//        Asserts::assertt(fragmentIndex < CACHE_PTR_MAX_FRAGMENTS, 1,
//                         (char *) "add to cache ptr shadowmemory out of fragment");
//        if (startAddress[fragmentIndex] == NULL) {
//            return NULL;
//        }

        unsigned long index = hashKey(key);
        unsigned long offset = index * PTR_SIZE;
//        Asserts::assertt(offset < fragmentSize, 1, "add to page single AddressToCachePtrIndexShadowMap out of range");

//        assert(offset < fragmentSize);
        return ((char *) startAddress) + offset;
    }

//    inline void createFragment(unsigned long key) {
//        lock.lock();
//        unsigned int fragmentIndex = key >> fragmentMappingBitNum;
//        Asserts::assertt(fragmentIndex < CACHE_PTR_MAX_FRAGMENTS, 1,
//                         (char *) "add to cache shadowmemory out of fragment");
//        if (startAddress[fragmentIndex] != NULL) {
//            lock.unlock();
//            return;
//        }
//        startAddress[fragmentIndex] = MM::mmapAllocatePrivate(this->fragmentSize, NULL, false, -1, true);
//        Logger::info("AddressToCachePtrIndexShadowMap create Fragment index:%d, startAddress:%p\n", fragmentIndex,
//                     startAddress[fragmentIndex]);
//        lock.unlock();
//    }

public:
    void initialize(unsigned long fragmentSize) {
//        for (int i = 0; i < CACHE_PTR_MAX_FRAGMENTS; i++) {
//            startAddress[i] = NULL;
//        }
        this->fragmentSize = fragmentSize;
        this->startAddress = MM::mmapAllocatePrivate(this->fragmentSize, NULL, false, -1, true);;
//        unsigned long fragmentMappingSize = (fragmentSize / PTR_SIZE) * CACHE_LINE_SIZE;
//        this->fragmentMappingBitNum = Maths::getCeilingPowerOf2(fragmentMappingSize);
//        this->fragmentMappingBitMask = Maths::getCeilingBitMask(fragmentMappingSize);
//        this->fragmentSize = (1ul << this->fragmentMappingBitNum) / CACHE_LINE_SIZE * PTR_SIZE;
//        lock.init();
    }

    inline bool insertIfAbsent(unsigned long key, void *value) {
        void *dataBlock = this->getDataBlock(key);
//        if (NULL == dataBlock) {
//            this->createFragment(key);
//            dataBlock = this->getDataBlock(key);
//        }
        return Automics::compare_set((void **) dataBlock, (void *) NULL, value);
    }

    inline void insert(unsigned long key, void *value) {
        void *dataBlock = this->getDataBlock(key);
//        if (NULL == dataBlock) {
//            this->createFragment(key);
//            dataBlock = this->getDataBlock(key);
//        }
        *(void **) dataBlock = value;
    }

    inline void *find(const unsigned long key) {
        void *dataBlock = this->getDataBlock(key);
        if (dataBlock == NULL) {
            return NULL;
        }
        return *(void **) dataBlock;
    }

    inline void remove(const unsigned long &key) {
        void *dataBlock = this->getDataBlock(key);
        if (NULL == dataBlock) {
            return;
        }
        *(void **) dataBlock = NULL;
    }
};

#endif //NUMAPERF_ADDRTOCACHEPTRINDEXSHADOWMAP_H
