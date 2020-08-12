#ifndef NUMAPERF_PRIORITYQUEUE_H
#define NUMAPERF_PRIORITYQUEUE_H

#include <assert.h>
#include "../concurrency/spinlock.h"

#define PRI_QUEUE_MAX_CAPACITY 11

// save big values in this queue
template<class ValueType>
class PriorityQueue {
    spinlock lock;
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
            if (*(values[targetIndex]) <= *(values[child])) {
                return;
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

    inline ValueType *_insert(ValueType *value) {
        if (endIndex < MAX_SIZE) {
            values[endIndex] = value;
            pop(endIndex);
            endIndex++;
            return NULL;
        }
        if (*value <= *(values[0])) {
            return value;
        }
        ValueType *old = values[0];
        values[0] = value;
        sink(0);
        return old;
    }

public:
    PriorityQueue(int maxSize) : MAX_SIZE(maxSize) {
        assert(maxSize < PRI_QUEUE_MAX_CAPACITY);
        endIndex = 0;
        lock.init();
    }

    inline void reset() {
        endIndex = 0;
    }

    /**
     * min heap: if not full, insert new value into end and then pop it.
     * if full and new value is bigger than the head , replace the head with the new value and sink the new head
     *
     * return the old value which are evicted, or the new value that are not inserted.
     * return null if the queue is not full
     * @param value
     */
    inline ValueType *insert(ValueType *value, bool withLock = false) {
        // fast fail
        if (endIndex >= MAX_SIZE && *value <= *(values[0])) {
            return value;
        }
        if (!withLock) {
            return _insert(value);
        }
        lock.lock();
        ValueType *ret = _insert(value);
        lock.unlock();
        return ret;
    }

    inline bool mayCanInsert(unsigned long value) {
        if (endIndex >= MAX_SIZE && value <= *(values[0])) {
            return false;
        }
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
