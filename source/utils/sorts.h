#ifndef NUMAPERF_SORTS_H
#define NUMAPERF_SORTS_H

#include <cstring>
#include "real.h"

class Sorts {
public:

    // get the order of each elements in head, the order starts from 1, ends at length and it is in a down order
    static inline void getOrder(const unsigned long *head, int *order, int length) {
        memset(order, 0, sizeof(int) * length);
        unsigned long upValue = 0;
        int index = 0;
        for (int ii = 0; ii < length; ii++) {
            upValue = 0;
            index = 0;
            for (int jj = 0; jj < length; jj++) {
                if (order[jj] > 0) {
                    continue;
                }
                if (upValue <= head[jj]) {
                    upValue = head[jj];
                    index = jj;
                }
            }
            order[index] = ii + 1;
        }
    }

    static inline void sortToIndex(const unsigned long *head, int *indexByOrder, int length) {
        int *set = (int *) Real::malloc(sizeof(int) * (length + 1));
        memset(set, 0, sizeof(int) * (length + 1));
        unsigned long upValue = 0;
        int index = 0;
        for (int k = 0; k < length; k++) {
            upValue = 0;
            index = 0;
            for (int f = 0; f < length; f++) {
                if (set[f] > 0) {
                    continue;
                }
                if (upValue <= head[f]) {
                    upValue = head[f];
                    index = f;
                }
            }
            indexByOrder[k] = index;
            set[index] = 1;
        }
        Real::free(set);
    }
};

#endif //NUMAPERF_SORTS_H
