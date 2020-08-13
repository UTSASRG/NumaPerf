#ifndef NUMAPERF_ASSERTS_H
#define NUMAPERF_ASSERTS_H

#include <cstdlib>
#include "log/Logger.h"

class Asserts {
public:
    // since the default one will call malloc inside
    static void assertt(bool result, char *message = NULL) {
        if (!result) {
            Logger::error("assert fail:%s\n", message);
            exit(11);
        }
    }
};

#endif //NUMAPERF_ASSERTS_H
