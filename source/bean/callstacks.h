#ifndef NUMAPERF_CALLSTACKS_H
#define NUMAPERF_CALLSTACKS_H

#include <cstring>
#include <new>
#include <execinfo.h>
#include "../utils/real.h"


class CallStack {
    int size = 0;
    void *callStack[MAX_BACK_TRACE_NUM];

public:

    CallStack() {
        memset(this, 0, sizeof(CallStack));
    }

    inline static CallStack *createEmptyCallStack() {
        void *mem = Real::malloc(sizeof(CallStack));
        CallStack *ret = new(mem)CallStack();
        return ret;
    }

    inline static CallStack *createCallStack() {
        CallStack *ret = CallStack::createEmptyCallStack();
        int size = backtrace(ret->callStack, MAX_BACK_TRACE_NUM);
        ret->size = size;
        return ret;
    }

    inline void fillCallStack() {
        int size = backtrace(this->callStack, MAX_BACK_TRACE_NUM);
        this->size = size;
    }

    inline void **getCallStack() {
        return callStack;
    }

    inline unsigned long getKey() {
        unsigned long key = 0;
        for (int i = 0; i < size; i++) {
            key += (unsigned long) callStack[i];
        }
        return key;
    }

    inline void printFrom(int fromIndex, FILE *outFile = stderr) {
        for (int i = fromIndex; i < size; i++) {
            // this is strange, if not minus one, sometime addr2line can not print the right line number
            Programs::printAddress2Line((unsigned long) callStack[i] - 1, outFile);
        }
    }
};

#endif //NUMAPERF_CALLSTACKS_H
