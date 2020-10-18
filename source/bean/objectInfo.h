#ifndef NUMAPERF_OBJECTINFO_H
#define NUMAPERF_OBJECTINFO_H

#include "../utils/log/Logger.h"

class ObjectInfo {
private:
    unsigned long startAddress;
    unsigned long size;
    unsigned long mallocCallSite;

//private:
//    static MemoryPool localMemoryPool;

private:
    ObjectInfo(unsigned long objectStartAddress, unsigned long size, unsigned long mallocCallSite) {
        this->startAddress = objectStartAddress;
        this->size = size;
        this->mallocCallSite = mallocCallSite;
    }

public:
    static ObjectInfo *
    createNewObjectInfoo(unsigned long objectStartAddress, unsigned long size, unsigned long mallocCallSite) {
//        void *buff = localMemoryPool.get();
        void *buff = Real::malloc(sizeof(ObjectInfo));
//        Logger::debug("new ObjectInfo start address: %lu, buff address:%lu \n", objectStartAddress, buff);
        ObjectInfo *objectInfo = new(buff) ObjectInfo(objectStartAddress, size, mallocCallSite);
        return objectInfo;
    }

    static void release(ObjectInfo *buff) {
//        localMemoryPool.release((void *) buff);
        Real::free(buff);
    }

    ObjectInfo *copy() {
        return ObjectInfo::createNewObjectInfoo(this->startAddress, this->size, this->mallocCallSite);
    }

    inline unsigned long getSize() {
        return this->size;
    }

    inline unsigned long getStartAddress() {
        return startAddress;
    }

    inline unsigned long getMallocCallSite() {
        return mallocCallSite;
    }

    inline void dump(FILE *file, int blackSpaceNum) {
        char prefix[blackSpaceNum + 2];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
            prefix[i + 1] = '\0';
        }
        fprintf(file, "%sObject Start Address:   %p\n", prefix, (void *) (this->startAddress));
        fprintf(file, "%sObject Size:            %lu\n", prefix, this->size);
    }
};

#endif //NUMAPERF_OBJECTINFO_H
