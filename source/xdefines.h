//
// Created by XIN ZHAO on 5/30/20.
//

#ifndef ACCESSPATERN_XDEFINES_H
#define ACCESSPATERN_XDEFINES_H

#define INIT_BUFF_SIZE 1024*1024*1024

#define KB 1024ul
#define MB (1024ul * KB)
#define GB (1024ul * MB)
#define TB (1024ul * GB)


// Normal page size is 4K
#define PAGE_SHIFT_BITS 12
#define PAGE_SIZE (1 << PAGE_SHIFT_BITS)

// Normal cacheline size is still 64 bytes
#define CACHE_LINE_SHIFT_BITS 6
#define CACHE_LINE_SIZE (1 << CACHE_LINE_SHIFT_BITS)
#define CACHE_INDEX_MASK ((unsigned int)0b111111000000)

// treate int as an normal word, 4bytes
#define WORD_SHIFT_BITS 2
#define WORD_SIZE (1 << WORD_SHIFT_BITS)
#define WORD_INDEX_MASK ((unsigned int)0b111100)


#define CACHE_NUM_IN_ONE_PAGE (PAGE_SIZE / CACHE_LINE_SIZE)
#define WORD_NUMBER_IN_CACHELINE (CACHE_LINE_SIZE/WORD_SIZE)

#define MAX_THREAD_NUM 128

#define PAGE_SHARING_DETAIL_THRESHOLD 100000
#define CACHE_SHARING_DETAIL_THRESHOLD 100


#endif //ACCESSPATERN_XDEFINES_H
