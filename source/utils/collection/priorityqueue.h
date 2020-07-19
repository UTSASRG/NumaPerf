#ifndef NUMAPERF_PRIORITYQUEUE_H
#define NUMAPERF_PRIORITYQUEUE_H

#include <assert.h>

#define PRI_QUEUE_MAX_CAPACITY 100

template<class ValueType>
class PriorityQueue {
    const int MAX_SIZE;
    int endIndex;
    ValueType *values[PRI_QUEUE_MAX_CAPACITY];

private:
    inline void swap(int indexA, int indexB) {
        ValueType *a = this->values[indexA];
        this->values[indexA] = this->values[indexB];
        this->values[indexB] = a;
    }

    inline void sink(int targetIndex) {
        while (targetIndex < endIndex) {
            int child = 2 * (targetIndex + 1) - 1;
            if (child >= endIndex) {
                return;
            }
            if ((child + 1) < endIndex && (*(values[child]) > *(values[child + 1]))) {
                child++;
            }
            swap(targetIndex, child);
            targetIndex = child;
        }
    }

    inline void pop(int targetIndex) {
        while (targetIndex > 0) {
            int parent = targetIndex / 2;
            if (*(values[targetIndex]) >= *(values[parent])) {
                break;
            }
            swap(targetIndex, parent);
            targetIndex = parent;
        }
    }

public:
    PriorityQueue(int maxSize) : MAX_SIZE(maxSize) {
        assert(maxSize < PRI_QUEUE_MAX_CAPACITY);
        endIndex = 0;
    }

    inline void reset() {
        endIndex = 0;
    }

    /**
     * min heap: if not full, insert new value into end and then pop it.
     * if full and new value is bigger than the head , replace the head with the new value and sink the new head
     * @param value
     */
    inline bool insert(ValueType *value) {
        if (endIndex < MAX_SIZE) {
            values[endIndex] = value;
            pop(endIndex);
            endIndex++;
            return true;
        }
        if (*value < *(values[0])) {
            return false;
        }
        values[0] = value;
        sink(0);
        return true;
    }

    inline int getSize() {
        return endIndex;
    }

    inline ValueType **getValues() {
        return values;
    }

};

#endif //NUMAPERF_PRIORITYQUEUE_H
