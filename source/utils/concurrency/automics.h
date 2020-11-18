

#ifndef ACCESSPATERN_AUTOMICS_H
#define ACCESSPATERN_AUTOMICS_H

#include <vector>

class Automics {
public:

    template<class ValueType>
    static inline bool compare_set(ValueType *valuePointer, volatile ValueType expectValue, ValueType newValue) {
        if (__atomic_compare_exchange_n(valuePointer, (ValueType *) &expectValue, newValue, false,
                                        __ATOMIC_SEQ_CST,
                                        __ATOMIC_SEQ_CST)) {
            return true;
        }
        return false;
    }

    static inline unsigned long
    automicIncrease(unsigned long *targetValue, long increaseNumber, int retry_num = 5) {
        if (retry_num < 0) {
            while (1) {
                volatile unsigned long expect_value = *targetValue;
                if (__atomic_compare_exchange_n(targetValue, (unsigned long *) &expect_value,
                                                expect_value + increaseNumber, false,
                                                __ATOMIC_SEQ_CST,
                                                __ATOMIC_SEQ_CST)) {
                    return expect_value + increaseNumber;
                }
            }
        }

        for (int i = 0; i < retry_num; i++) {
            volatile unsigned long expect_value = *targetValue;
            if (__atomic_compare_exchange_n(targetValue, (unsigned long *) &expect_value, expect_value + increaseNumber,
                                            false,
                                            __ATOMIC_SEQ_CST,
                                            __ATOMIC_SEQ_CST)) {
                return expect_value + increaseNumber;
            }
        }

        return -1;
    }
};

#endif //ACCESSPATERN_AUTOMICS_H
