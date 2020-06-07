//
// Created by XIN ZHAO on 6/6/20.
//

#ifndef NUMAPERF_LOGGER_H
#define NUMAPERF_LOGGER_H

#include <stdio.h>
#include <stdarg.h>

class Logger {
private:
    inline static void _log(const char *format, ...) {
        va_list args;
        va_start (args, format);
        vfprintf(stderr, format, args);
        va_end (args);
    }

public:
    inline static void debug(const char *format, ...) {
#ifdef DEBUG_LOG
        _log(format);
#endif
    }

    inline static void info(const char *format, ...) {
#ifdef INFO_LOG
        _log(format);
#endif
    }
};

#endif //NUMAPERF_LOGGER_H
