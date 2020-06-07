//
// Created by XIN ZHAO on 6/7/20.
//

#ifndef NUMAPERF_TIMER_H
#define NUMAPERF_TIMER_H
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
}
#endif //NUMAPERF_TIMER_H
