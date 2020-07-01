//
// Created by XIN ZHAO on 6/6/20.
//

#ifndef NUMAPERF_LOGGER_H
#define NUMAPERF_LOGGER_H

#ifdef DEBUG_LOG
#define WARN_LOG
#define INFO_LOG
#define ERROR_LOG
#endif

#ifdef WARN_LOG
#define INFO_LOG
#define ERROR_LOG
#endif

#ifdef INFO_LOG
#define ERROR_LOG
#endif

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
        _log("DEBUG: ");
        _log(format);
#endif
    }

    inline static void warn(const char *format, ...) {
#ifdef WARN_LOG
        _log("WARN: ");
        _log(format);
#endif
    }

    inline static void info(const char *format, ...) {
#ifdef INFO_LOG
        _log("INFO: ");
        _log(format);
#endif
    }

    inline static void error(const char *format, ...) {
#ifdef ERROR_LOG
        _log("ERROR: ");
        _log(format);
#endif
    }
};

#endif //NUMAPERF_LOGGER_H
