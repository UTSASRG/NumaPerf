#ifndef NUMAPERF_RANDOM_H
#define NUMAPERF_RANDOM_H
namespace Random {
    inline int rdrand64_step(int rand) {
        unsigned char ok;

        asm volatile ("rdrand %0; setc %1"
        : "=r" (rand), "=qm" (ok));

        return (int) ok;
    }
}
#endif //NUMAPERF_RANDOM_H
