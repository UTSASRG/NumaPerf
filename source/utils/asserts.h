#ifndef NUMAPERF_ASSERTS_H
#define NUMAPERF_ASSERTS_H

#include <cstdlib>
#include <string.h>
#include "log/Logger.h"

#define MAX_MESSAGE_LENGTH 100

class Asserts {
public:
    // since the default one will call malloc inside
    static inline void assertt(bool result, int paramNum ...) {
        if (result) {
            return;
        }
        va_list valist;
        va_start(valist, paramNum);
        char message[MAX_MESSAGE_LENGTH];
        message[0] = '\0';
        for (int i = 0; i < paramNum; i++) {
            char *nextMessage = va_arg(valist, char*);
            if (strlen(message) + strlen(nextMessage) >= MAX_MESSAGE_LENGTH) {
                break;
            }
            strcat(message, nextMessage);
        }
        va_end(valist);
        Logger::error("assert fail:%s\n", message);
        exit(11);
    }
};

#endif //NUMAPERF_ASSERTS_H
