#ifndef ACCESSPATERN_OBJECTACESSINFO_H
#define ACCESSPATERN_OBJECTACESSINFO_H

#include <cstdlib>
#include "../xdefines.h"
#include <new>

class ObjectAccessInfo {
private:
    void *startAddress;
    void *mallocCallSite;
    size_t size;
    unsigned long threadRead[MAX_THREAD_NUM];
    unsigned long threadWrite[MAX_THREAD_NUM];

    ObjectAccessInfo() {}

    ObjectAccessInfo(void *startAddress, void *mallocCallSite, size_t size) {
        this->startAddress = startAddress;
        this->mallocCallSite = mallocCallSite;
        this->size = size;
    }

public:

    static ObjectAccessInfo *createNewObjectAccessInfo(void *startAddress, void *mallocCallSite, size_t size) {
        void *buff = Real::malloc(sizeof(ObjectAccessInfo));
        ObjectAccessInfo *objectAccessInfo = new(buff) ObjectAccessInfo(startAddress, mallocCallSite, size);
        return objectAccessInfo;
    }

    inline void *getStartAddress() const {
        return startAddress;
    }

    inline unsigned long *getThreadRead() {
        return threadRead;
    }

    inline unsigned long *getThreadWrite() {
        return threadWrite;
    }

    inline void *getMallocCallSite() const {
        return mallocCallSite;
    }

    inline size_t getSize() const {
        return size;
    }
};

#endif //ACCESSPATERN_OBJECTACESSINFO_H
