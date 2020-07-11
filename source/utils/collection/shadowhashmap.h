#ifndef NUMAPERF_SHADOWHASHMAP_H
#define NUMAPERF_SHADOWHASHMAP_H

#include "../mm.hh"
#include <assert.h>
#include "../log/Logger.h"
#include "../concurrency/automics.h"

/**
 * memory layout: bool-value-bool-value-bool-value
 * @tparam KeyType
 * @tparam ValueType
 */
template<class KeyType, class ValueType>
class ShadowHashMap {

    typedef unsigned long (*hashFuncPtrType)(KeyType);

    void *startAddress;
    unsigned long size;
    unsigned long blockSize;
    hashFuncPtrType hashFuncPtr;
    const static int META_DATA_SIZE = sizeof(short);
    const static short NOT_INSERT = 0;
    const static short INSERTING = 1;
    const static short INSERTED = 2;

private:
    inline unsigned long hashKey(KeyType key) {
        return hashFuncPtr(key);
    }

    inline short *getMetaData(unsigned long index) {
        unsigned long offset = index * blockSize;
        assert(offset < size);
        void *address = ((char *) startAddress) + offset;
//        Logger::info("shadow map startAddress:%lu, index:%lu, objectSize:%d, offset:%lu \n",
//                     (unsigned long) startAddress,
//                     index, sizeof(ValueType), index * (sizeof(ValueType) + META_DATA_SIZE));
        return (short *) (address);
    }

    inline ValueType *getValue(unsigned long index) {
        unsigned long offset = index * blockSize + META_DATA_SIZE;
        assert(offset < size);
        void *address = ((char *) startAddress) + offset;
        return (ValueType *) (address);
    }

public:
    void initialize(unsigned long size, hashFuncPtrType hashFunc, bool needAlignToCacheLine = false) {
        startAddress = MM::mmapAllocatePrivate(size);
        hashFuncPtr = hashFunc;
        this->size = size;
        if (needAlignToCacheLine) {
            blockSize = ADDRESSES::alignUpToCacheLine(sizeof(ValueType) + META_DATA_SIZE);
        } else {
            blockSize = ADDRESSES::alignUpToWord(sizeof(ValueType) + META_DATA_SIZE);
        }
    }

    inline bool insertIfAbsent(const KeyType &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        short *metaData = this->getMetaData(index);
        if (!Automics::compare_set(metaData, NOT_INSERT, INSERTING)) {
            // busy waiting, since this could be very quick
            while (*metaData != INSERTED) {
                Logger::warn("shadow map insertIfAbsent busy waiting\n");
            }
            return false;
        }
        ValueType *valuePtr = this->getValue(index);
        *valuePtr = value;
        *metaData = INSERTED;
        return true;
    }

    inline void insert(const KeyType &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        ValueType *valuePtr = this->getValue(index);
        *valuePtr = value;
        short *metaData = this->getMetaData(index);
        *metaData = INSERTED;
    }

    inline ValueType *find(const KeyType &key) {
        unsigned long index = hashKey(key);
        if (*(this->getMetaData(index)) != INSERTED) {
            return NULL;
        }
        return this->getValue(index);
    }
};

#endif //NUMAPERF_SHADOWHASHMAP_H
