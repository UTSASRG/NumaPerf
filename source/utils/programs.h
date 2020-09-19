#ifndef NUMAPERF_PROGRAMS_H
#define NUMAPERF_PROGRAMS_H

#include <cstdio>
#include <cstring>
#include "../xdefines.h"

extern char *__progname_full;
extern bool inited;

class Programs {
public:
    static inline void printAddress2Line(unsigned long sourceAddress, FILE *file = stderr) {
        bool originalInited = inited;
        inited = false;
        char cmd[BUFSZ];
        char out[BUFSZ];
        FILE *pFile;
        memset(cmd, 0, BUFSZ);
        memset(out, 0, BUFSZ);
        sprintf(cmd, "/usr/bin/addr2line -e %s %p", __progname_full, (void *) sourceAddress);
        pFile = popen(cmd, "r");
        while (fgets(out, BUFSZ, pFile) != NULL);
        pclose(pFile);
        fprintf(file, "address: %p, %s", (void *) sourceAddress, out);
        inited = originalInited;
    }

    static inline unsigned long getLastEip(void *firtArgAddress, unsigned long ripOffset) {
        void **ripAddress = (void **) (((unsigned long) firtArgAddress) + ripOffset);
        unsigned long callerAddress = (unsigned long) (*ripAddress);
        return callerAddress;
    }
};

#endif //NUMAPERF_PROGRAMS_H
