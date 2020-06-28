#ifndef NUMAPERF_SHADOWHASHMAP_H
#define NUMAPERF_SHADOWHASHMAP_H

#include "../mm.hh"
#include <assert.h>
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
    hashFuncPtrType hashFuncPtr;

private:
    inline unsigned long hashKey(KeyType key) {
        return hashFuncPtr(key);
    }

    inline bool *isInserted(unsigned long index) {
        return (bool *) (((char *) startAddress) + index * (sizeof(ValueType) + sizeof(bool)));
    }

    inline ValueType *getValue(unsigned long index) {
        return (ValueType *) (((char *) startAddress) + index * (sizeof(ValueType) + sizeof(bool)) + sizeof(bool));
    }

public:
    void initialize(unsigned long size, hashFuncPtrType hashFunc) {
        startAddress = MM::mmapAllocatePrivate(size);
        hashFuncPtr = hashFunc;
        this->size = size;
    }

    inline bool insertIfAbsent(const KeyType &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        bool *isInserted = this->isInserted(index);
        if (!Automics::compare_set(isInserted, false, true)) {
            return false;
        }
        ValueType *valuePtr = this->getValue(index);
        *valuePtr = value;
        return true;
    }

    inline void insert(const KeyType &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        ValueType *valuePtr = this->getValue(index);
        *valuePtr = value;
        bool *isInserted = this->isInserted(index);
        *isInserted = true;
    }

    inline ValueType *find(const KeyType &key) {
        unsigned long index = hashKey(key);
        if (!*(this->isInserted(index))) {
            return NULL;
        }
        return this->getValue(index);
    }
};

#endif //NUMAPERF_SHADOWHASHMAP_H
