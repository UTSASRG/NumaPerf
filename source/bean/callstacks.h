#ifndef NUMAPERF_CALLSTACKS_H
#define NUMAPERF_CALLSTACKS_H

#include <cstring>
#include <new>
#include <execinfo.h>
#include "../utils/real.h"

#define MAX_CALL_STACK_NUM 5

class CallStack {
    int size = 0;
    void *callStack[MAX_CALL_STACK_NUM];

private:

    CallStack() {
        memset(this, 0, sizeof(CallStack));
    }

public:

    inline static CallStack *createEmptyCallStack() {
        void *mem = Real::malloc(sizeof(CallStack));
        CallStack *ret = new(mem)CallStack();
        return ret;
    }

    inline static CallStack *createCallStack() {
        CallStack *ret = CallStack::createEmptyCallStack();
        int size = backtrace(ret->callStack, MAX_CALL_STACK_NUM);
        ret->size = size;
        return ret;
    }

    inline unsigned long getKey() {
        unsigned long key = 0;
        for (int i = 0; i < size; i++) {
            key += (unsigned long) callStack[i];
        }
        return key;
    }

    inline void print(FILE *outFile = stderr) {
        for (int i = 1; i < size; i++) {
            Programs::printAddress2Line((unsigned long) callStack[i] - 1, outFile);
        }
    }
};

#endif //NUMAPERF_CALLSTACKS_H
