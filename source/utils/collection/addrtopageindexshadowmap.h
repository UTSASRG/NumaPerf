#ifndef NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H
#define NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H

#include "../mm.hh"
#include <assert.h>
#include "../addresses.h"
#include "../log/Logger.h"
#include "../concurrency/automics.h"

/**
 * memory layout: bool-value-bool-value-bool-value
 * @tparam KeyType
 * @tparam ValueType
 */
template<class ValueType>
class AddressToPageIndexShadowMap {

    void *startAddress;
    unsigned long size;
    unsigned long blockSize;
    const static int META_DATA_SIZE = sizeof(short);
    const static short NOT_INSERT = 0;
    const static short INSERTING = 1;
    const static short INSERTED = 2;

private:
    inline unsigned long hashKey(unsigned long key) {
        return ADDRESSES::getPageIndex(key);
    }

    inline void *getDataBlock(unsigned long index) {
        unsigned long offset = index * blockSize;
        assert(offset < size);
        return ((char *) startAddress) + offset;
    }

public:
    void initialize(unsigned long size, bool needAlignToCacheLine = false) {
        startAddress = MM::mmapAllocatePrivate(size);
        this->size = size;
        if (needAlignToCacheLine) {
            Logger::debug("AlignToCacheLine, original Size:%lu, result Size:%lu \n", sizeof(ValueType) + META_DATA_SIZE,
                          ADDRESSES::alignUpToCacheLine(sizeof(ValueType) + META_DATA_SIZE));
            blockSize = ADDRESSES::alignUpToCacheLine(sizeof(ValueType) + META_DATA_SIZE);
        } else {
            Logger::debug("AlignToWord, original Size:%lu, result Size:%lu \n", sizeof(ValueType) + META_DATA_SIZE,
                          ADDRESSES::alignUpToWord(sizeof(ValueType) + META_DATA_SIZE));
            blockSize = ADDRESSES::alignUpToWord(sizeof(ValueType) + META_DATA_SIZE);
        }
    }

    inline bool insertIfAbsent(const unsigned long &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        void *dataBlock = this->getDataBlock(index);
        short *metaData = (short *) dataBlock;
        if (!Automics::compare_set(metaData, NOT_INSERT, INSERTING)) {
            // busy waiting, since this could be very quick
            while (*metaData != INSERTED) {
                Logger::warn("shadow map insertIfAbsent busy waiting\n");
            }
            return false;
        }
        ValueType *valuePtr = (ValueType *) (((char *) dataBlock) + META_DATA_SIZE);
        *valuePtr = value;
        *metaData = INSERTED;
        return true;
    }

    inline void insert(const unsigned long &key, const ValueType &value) {
        unsigned long index = hashKey(key);
        void *dataBlock = this->getDataBlock(index);
        ValueType *valuePtr = (ValueType *) (((char *) dataBlock) + META_DATA_SIZE);
        *valuePtr = value;
        short *metaData = (short *) dataBlock;
        *metaData = INSERTED;
    }

    inline ValueType *find(const unsigned long &key) {
        unsigned long index = hashKey(key);
        void *dataBlock = this->getDataBlock(index);
        if (*((short *) dataBlock) != INSERTED) {
            return NULL;
        }
        return (ValueType *) (((char *) dataBlock) + META_DATA_SIZE);
    }

    inline void remove(const unsigned long &key) {
        unsigned long index = hashKey(key);
        void *dataBlock = this->getDataBlock(index);
        *((short *) dataBlock) = NOT_INSERT;
    }
};

#endif //NUMAPERF_ADDRTOPAGEINDEXSHADOWMAP_H
