

#ifndef ACCESSPATERN_AUTOMICS_H
#define ACCESSPATERN_AUTOMICS_H

class Automics {
public:


    static unsigned long automicIncrease(unsigned long *targetValue, unsigned long increaseNumber, int retry_num = 5) {
        if (retry_num < 0) {
            while (1) {
                unsigned long expect_value = *targetValue;
                if (__atomic_compare_exchange_n(targetValue, &expect_value, expect_value + increaseNumber, false,
                                                __ATOMIC_SEQ_CST,
                                                __ATOMIC_SEQ_CST)) {
                    return expect_value + increaseNumber;
                }
            }
        }

        for (int i = 0; i < retry_num; i++) {
            unsigned long expect_value = *targetValue;
            if (__atomic_compare_exchange_n(targetValue, &expect_value, expect_value + increaseNumber, false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
                return expect_value + increaseNumber;
            }
        }

        return -1;
    }
};

#endif //ACCESSPATERN_AUTOMICS_H
