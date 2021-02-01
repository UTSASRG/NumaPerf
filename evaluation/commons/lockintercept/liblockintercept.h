//
// Created by XIN ZHAO on 1/31/21.
//

#ifndef NUMAPERF_LIBLOCKINTERCEPT_H
#define NUMAPERF_LIBLOCKINTERCEPT_H

extern "C" {
int pthread_barrier_wait(pthread_barrier_t *barrier);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);

};
#endif //NUMAPERF_LIBLOCKINTERCEPT_H
