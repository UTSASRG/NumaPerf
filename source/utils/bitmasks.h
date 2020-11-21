#ifndef NUMAPERF_BITMASKS_H
#define NUMAPERF_BITMASKS_H

#include "concurrency/automics.h"
#include "asserts.h"

class BitMasks {
public:
    // return true if the bit is new set.
    static inline bool setBit(void *bitMaskPtr, unsigned long bitMaskLentgh, unsigned long bitIndex, int tryNum = 10) {
        Asserts::assertt(bitIndex < bitMaskLentgh, 1, (char *) "bitmask out of range");
        if (bitIndex == 0) {
            return false;
        }
        unsigned long *currentBitPtr = (unsigned long *) bitMaskPtr;
        while (bitIndex > (8 * sizeof(unsigned long) + 1)) {
            bitIndex -= 8 * sizeof(unsigned long);
            currentBitPtr++;
        }
        unsigned long bitValue = 1ul << (bitIndex - 1);
        if ((bitValue & *currentBitPtr) != 0) {
            return false;
        }
        *currentBitPtr = bitValue | *currentBitPtr;
//        for (int i = 0; i < tryNum; i++) {
//            unsigned long originalValue = *currentBitPtr;
//            unsigned long newValue = originalValue | (1ul << (bitIndex - 1));
//            if (originalValue == newValue) {
//                return false;
//            }
//            if (Automics::compare_set(currentBitPtr, originalValue, newValue)) {
//                return true;
//            }
//        }
        return true;
    }

//    static inline void unsetBit(void *bitMaskPtr, unsigned long bitMaskLentgh, unsigned long bitIndex) {
//    }


};

#endif //NUMAPERF_BITMASKS_H
