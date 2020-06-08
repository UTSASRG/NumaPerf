#ifndef ACCESSPATERN_OBJECTACESSINFO_H
#define ACCESSPATERN_OBJECTACESSINFO_H

#include <cstdlib>
#include "../xdefines.h"
#include <new>
#include <cstring>
#include "../utils/memorypool.h"

class ObjectAccessInfo {
//private:
//    static MemoryPool localMemoryPool;

private:
//    void *startAddress;
//    void *mallocCallSite;
//    size_t size;
    unsigned long threadRead[MAX_THREAD_NUM];
    unsigned long threadWrite[MAX_THREAD_NUM];

public:

    ObjectAccessInfo() {}

//    void clear() {
//        this->startAddress = NULL;
//        this->mallocCallSite = NULL;
//        this->size = 0;
//        memset(this->threadRead, 0, MAX_THREAD_NUM * sizeof(unsigned long));
//        memset(this->threadWrite, 0, MAX_THREAD_NUM * sizeof(unsigned long));
//    }

//    static ObjectAccessInfo *createNewObjectAccessInfo(void *startAddress, void *mallocCallSite, size_t size) {
//        void *buff = localMemoryPool.get();
//        ObjectAccessInfo *objectAccessInfo = new(buff) ObjectAccessInfo(startAddress, mallocCallSite, size);
//        return objectAccessInfo;
//    }

    inline unsigned long *getThreadRead() {
        return threadRead;
    }

    inline unsigned long *getThreadWrite() {
        return threadWrite;
    }

//    inline void *getMallocCallSite() const {
//        return mallocCallSite;
//    }
//
//    inline size_t getSize() const {
//        return size;
//    }
};

#endif //ACCESSPATERN_OBJECTACESSINFO_H
