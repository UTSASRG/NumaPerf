#ifndef NUMAPERF_BITMASKS_H
#define NUMAPERF_BITMASKS_H

#include <assert.h>

class BitMasks {
public:
    static inline void setBit(void *bitMaskPtr, unsigned long bitMaskLentgh, unsigned long bitIndex) {
        assert(bitIndex < bitMaskLentgh);
        if (bitIndex == 0) {
            return;
        }
        unsigned long *currentBitPtr = (unsigned long *) bitMaskPtr;
        while (bitIndex > (8 * sizeof(unsigned long) + 1)) {
            bitIndex -= 8 * sizeof(unsigned long);
            currentBitPtr++;
        }
        *currentBitPtr = (*currentBitPtr) | (1ul << (bitIndex - 1));
    }

//    static inline void unsetBit(void *bitMaskPtr, unsigned long bitMaskLentgh, unsigned long bitIndex) {
//    }


};

#endif //NUMAPERF_BITMASKS_H
