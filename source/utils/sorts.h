#ifndef NUMAPERF_SORTS_H
#define NUMAPERF_SORTS_H

#include <cstring>

class Sorts {
public:

    // get the order of each elements in head, the order starts from 1, ends at length and it is in a down order
    static inline void getOrder(const unsigned long *head, int *order, int length) {
        memset(order, 0, sizeof(int) * length);
        unsigned long upValue = 0;
        int index = 0;
        for (int i = 0; i < length; i++) {
            upValue = 0;
            index = 0;
            for (int j = 0; j < length; j++) {
                if (order[j] > 0) {
                    continue;
                }
                if (upValue <= head[j]) {
                    upValue = head[j];
                    index = j;
                }
            }
            order[index] = i + 1;
        }
    }

    static inline void sortToIndex(const unsigned long *head, int *indexByOrder, int length) {
        int set[length + 1];
        memset(set, 0, sizeof(int) * (length + 1));
        unsigned long upValue = 0;
        int index = 0;
        for (int i = 0; i < length; i++) {
            upValue = 0;
            index = 0;
            for (int j = 0; j < length; j++) {
                if (set[j] > 0) {
                    continue;
                }
                if (upValue <= head[j]) {
                    upValue = head[j];
                    index = j;
                }
            }
            indexByOrder[i] = index;
            set[index] = 1;
        }
    }
};

#endif //NUMAPERF_SORTS_H
