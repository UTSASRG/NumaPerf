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

    static inline unsigned long alignUpToPage(unsigned long size) {
        if ((size & PAGE_MASK) == 0) {
            return size;
        }
        size = size & (~(unsigned long) PAGE_MASK);
        size += PAGE_SIZE;
        return size;
    }

    static inline unsigned long alignUpToCacheLine(unsigned long size) {
        if ((size & CACHE_MASK) == 0) {
            return size;
        }
        size = size & (~(unsigned long) CACHE_MASK);
        size += CACHE_LINE_SIZE;
        return size;
    }

    static inline unsigned long alignUpToWord(unsigned long size) {
        if ((size & WORD_MASK) == 0) {
            return size;
        }
        size = size & (~(unsigned long) WORD_MASK);
        size += WORD_SIZE;
        return size;
    }
};

#endif //NUMAPERF_ADDRESSES_H
