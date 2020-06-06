//
// Created by XIN ZHAO on 6/6/20.
//

#ifndef NUMAPERF_LOGGER_H
#define NUMAPERF_LOGGER_H

#include <stdio.h>
#include <stdarg.h>

class Logger {
public:
    inline static void debug(const char *format, ...) {
#ifdef DEBUG_LOG
        va_list args;
        va_start (args, format);
        vfprintf(stderr, format, args);
        va_end (args);
#endif
    }
};

#endif //NUMAPERF_LOGGER_H
