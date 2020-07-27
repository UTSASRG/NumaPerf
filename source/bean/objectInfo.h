#ifndef NUMAPERF_OBJECTINFO_H
#define NUMAPERF_OBJECTINFO_H

#include "../utils/log/Logger.h"

class ObjectInfo {
private:
    unsigned long startAddress;
    unsigned long size;
    unsigned long mallocCallSite;

private:
    static MemoryPool localMemoryPool;

private:
    ObjectInfo(unsigned long objectStartAddress, unsigned long size, unsigned long mallocCallSite) {
        this->startAddress = objectStartAddress;
        this->size = size;
        this->mallocCallSite = mallocCallSite;
    }

public:
    static ObjectInfo *
    createNewObjectInfoo(unsigned long objectStartAddress, unsigned long size, unsigned long mallocCallSite) {
        void *buff = localMemoryPool.get();
        Logger::debug("new ObjectInfo start address: %lu, buff address:%lu \n", objectStartAddress, buff);
        ObjectInfo *objectInfo = new(buff) ObjectInfo(objectStartAddress, size, mallocCallSite);
        return objectInfo;
    }

    static void release(ObjectInfo *buff) {
        localMemoryPool.release((void *) buff);
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
        char prefix[blackSpaceNum];
        for (int i = 0; i < blackSpaceNum; i++) {
            prefix[i] = ' ';
        }
        fprintf(file, "%sobject start address:   %lu\n", prefix, this->startAddress);
        fprintf(file, "%sobject size:            %lu\n", prefix, this->size);
    }
};

#endif //NUMAPERF_OBJECTINFO_H
