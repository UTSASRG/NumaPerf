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
#define CACHE_MASK 0b111111
#define CACHE_INDEX_MASK ((unsigned int)0b111111000000)
#define CACHE_NUM_IN_PAGE (PAGE_SIZE / CACHE_LINE_SIZE)

// treate int as an normal word, 4bytes
#define WORD_SHIFT_BITS 2
#define WORD_SIZE (1 << WORD_SHIFT_BITS)
#define WORD_MASK 0b11
#define WORD_INDEX_MASK ((unsigned int)0b111100)


#define CACHE_NUM_IN_ONE_PAGE (PAGE_SIZE / CACHE_LINE_SIZE)
#define WORD_NUMBER_IN_CACHELINE (CACHE_LINE_SIZE/WORD_SIZE)

#define MAX_THREAD_NUM_SHIFT_BITS 10ul  // 10 == 1024
#define MAX_THREAD_NUM ((unsigned long)(1 << MAX_THREAD_NUM_SHIFT_BITS))

#define MALLOC_CALL_SITE_OFFSET 16

#define BUFSZ 1024
#define THREAD_FULL_USAGE 0.95

#define TWO_BLACK_SPACE "  "

#define PAGE_SHARING_DETAIL_THRESHOLD 2000   // * 100 , since it is sampling
#define PAGE_CACHE_BASIC_THRESHOLD 100   // * 100 , since it is sampling
#define CACHE_SHARING_DETAIL_THRESHOLD 400
#define SAMPLING
#define SAMPLING_FREQUENCY 100
#define MAX_TOP_CACHELINE_DETAIL_INFO 5
#define MAX_TOP_PAGE_DETAIL_INFO (2*NUMA_NODES)
#define MAX_TOP_OBJ_INFO 3
#define MAX_TOP_CALL_SITE_INFO 20
#define MAX_CALL_STACK_NUM 5
#define MAX_BACK_TRACE_NUM (MAX_CALL_STACK_NUM+2)
#define MAX_TOP_GLOBAL_CACHELINE_DETAIL_INFO MAX_TOP_CACHELINE_DETAIL_INFO
#define MAX_TOP_GLOBAL_PAGE_DETAIL_INFO MAX_TOP_PAGE_DETAIL_INFO
#define MAX_FRAGMENTS 20000
#define CYCLES_PER_MS 2000000
#define SERIOUS_SCORE_THRESHOLD (0.0005 * CYCLES_PER_MS / 2)  //1000 / 2
// 512K will be the threshold for small objects
// If an object is larger than this, it will be treated as large objects.  from Numalloc
#define HUGE_OBJ_SIZE 0x80000

#endif //ACCESSPATERN_XDEFINES_H
