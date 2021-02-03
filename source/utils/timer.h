#ifndef NUMAPERF_TIMER_H
#define NUMAPERF_TIMER_H

#include <sys/timeb.h>

namespace Timer {
    inline unsigned long long getCurrentCycle() {
        unsigned int lo, hi;
        asm volatile (
        "rdtscp"
        : "=a"(lo), "=d"(hi) /* outputs */
        : "a"(0)             /* inputs */
        : "%ebx", "%ecx");     /* clobbers*/
        unsigned long long retval = ((unsigned long long) lo) | (((unsigned long long) hi) << 32);
        return retval;
    }

    inline unsigned long long getCurrentMs() {
        struct timeb t;
        ftime(&t);
        return (t.time * 1000 + t.millitm);
    }
}
#endif //NUMAPERF_TIMER_H
