


/*
 * FreeGuard: A Faster Secure Heap Allocator
 * Copyright (C) 2017 Sam Silvestro, Hongyu Liu, Corey Crosser,
 *                    Zhiqiang Lin, and Tongping Liu
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * @file   real.cpp: provides wrappers to glibc thread & memory functions.
 * @author Tongping Liu <http://www.cs.utsa.edu/~tongpingliu/>
 * @author Sam Silvestro <sam.silvestro@utsa.edu>
 */

#ifndef ACCESSPATERN_REAL_H
#define ACCESSPATERN_REAL_H

#include <dlfcn.h>
#include <stdlib.h>
#include <pthread.h>

#define DEFINE_WRAPPER(name) decltype(::name) * name;
#define INIT_WRAPPER(name, handle) name = (decltype(::name)*)dlsym(handle, #name);

namespace Real {
    DEFINE_WRAPPER(malloc);
    DEFINE_WRAPPER(free);
    DEFINE_WRAPPER(calloc);
    DEFINE_WRAPPER(realloc);

    DEFINE_WRAPPER(pthread_create);

    DEFINE_WRAPPER(pthread_barrier_wait);
    DEFINE_WRAPPER(pthread_mutex_lock);
    DEFINE_WRAPPER(pthread_mutex_trylock);
    DEFINE_WRAPPER(pthread_spin_lock);
    DEFINE_WRAPPER(pthread_spin_trylock);
//    DEFINE_WRAPPER(pthread_join);
//    DEFINE_WRAPPER(pthread_kill);

    void init() {
        INIT_WRAPPER(malloc, RTLD_NEXT);
        INIT_WRAPPER(free, RTLD_NEXT);
        INIT_WRAPPER(calloc, RTLD_NEXT);
        INIT_WRAPPER(realloc, RTLD_NEXT);

        // FIXME about the flags
        void *pthread_handle = dlopen("libpthread.so.0", RTLD_NOW | RTLD_GLOBAL | RTLD_NOLOAD);
        INIT_WRAPPER(pthread_create, pthread_handle);

        INIT_WRAPPER(pthread_barrier_wait, pthread_handle);
        INIT_WRAPPER(pthread_mutex_lock, pthread_handle);
        INIT_WRAPPER(pthread_mutex_trylock, pthread_handle);
        INIT_WRAPPER(pthread_spin_lock, pthread_handle);
        INIT_WRAPPER(pthread_spin_trylock, pthread_handle);
//        INIT_WRAPPER(pthread_join, pthread_handle);
//        INIT_WRAPPER(pthread_kill, pthread_handle);
    }
}
#endif //ACCESSPATERN_REAL_H
