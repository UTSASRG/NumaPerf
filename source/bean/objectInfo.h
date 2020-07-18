#ifndef NUMAPERF_OBJECTINFO_H
#define NUMAPERF_OBJECTINFO_H

#include "../utils/log/Logger.h"

class ObjectInfo {
private:
    unsigned long startAddress;
    unsigned long size;
    void *mallocCallSite;

private:
    static MemoryPool localMemoryPool;

private:
    ObjectInfo(unsigned long objectStartAddress, unsigned long size, void *mallocCallSite) {
        this->startAddress = objectStartAddress;
        this->size = size;
        this->mallocCallSite = mallocCallSite;
    }

public:
    static ObjectInfo *
    createNewObjectInfoo(unsigned long objectStartAddress, unsigned long size, void *mallocCallSite) {
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
};

#endif //NUMAPERF_OBJECTINFO_H
