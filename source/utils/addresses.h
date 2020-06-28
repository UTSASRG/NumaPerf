#ifndef NUMAPERF_ADDRESSES_H
#define NUMAPERF_ADDRESSES_H

#include "../xdefines.h"

class ADDRESSES {
public:
    static inline unsigned long getPageIndex(unsigned long address) {
        return address >> PAGE_SHIFT_BITS;
    }

    static inline unsigned long getCacheIndex(unsigned long address) {
        return address >> CACHE_LINE_SHIFT_BITS;
    }

    static inline unsigned long getCacheIndexInsidePage(unsigned long address) {
        return (address & CACHE_INDEX_MASK) >> CACHE_LINE_SHIFT_BITS;
    }

    static inline unsigned long getWordIndexInsideCache(unsigned long address) {
        return (address & WORD_INDEX_MASK) >> WORD_SHIFT_BITS;
    }
};

#endif //NUMAPERF_ADDRESSES_H
