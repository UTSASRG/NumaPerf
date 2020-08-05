#ifndef NUMAPERF_MATHS_H
#define NUMAPERF_MATHS_H

class Maths {
public:

    static inline unsigned long getUpBoundPowerOf2(unsigned long num) {
        unsigned long powerOf2 = 0;
        while ((1lu << powerOf2) < num) {
            powerOf2++;
        }
        return powerOf2;
    }

    static inline unsigned long getLowBoundBitMask(unsigned long num) {
        unsigned long upBoundPowerOf2 = getUpBoundPowerOf2(num);
        unsigned long mask = 0;
        for (unsigned long i = 0; i < upBoundPowerOf2; i++) {
            mask = mask | (1lu << i);
        }
        return mask;
    }
};

#endif //NUMAPERF_MATHS_H
