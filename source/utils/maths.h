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

    static inline unsigned long getCeilingPowerOf2(unsigned long num) {
        if (num == 0) {
            return 0;
        }
        return getUpBoundPowerOf2(num) - 1;
    }

    static inline unsigned long getCeilingBitMask(unsigned long num) {
        unsigned long upBoundPowerOf2 = getCeilingPowerOf2(num);
        unsigned long mask = 0;
        for (unsigned long i = 0; i < upBoundPowerOf2; i++) {
            mask = mask | (1lu << i);
        }
        return mask;
    }
};

#endif //NUMAPERF_MATHS_H
