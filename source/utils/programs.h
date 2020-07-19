#ifndef NUMAPERF_PROGRAMS_H
#define NUMAPERF_PROGRAMS_H

#include <cstdio>
#include <cstring>
#include "../xdefines.h"

extern char *__progname_full;
extern bool interceptMalloc;

class Programs {
public:
    static inline void address2Line(unsigned long sourceAddress) {
        interceptMalloc = false;
        char cmd[BUFSZ];
        char out[BUFSZ];
        FILE *pFile;
        memset(cmd, 0, BUFSZ);
        memset(out, 0, BUFSZ);
        sprintf(cmd, "/usr/bin/addr2line -e %s %p", __progname_full, (void *) sourceAddress);
        pFile = popen(cmd, "r");
        while (fgets(out, BUFSZ, pFile) != NULL);
        pclose(pFile);
        fprintf(stderr, "%s", out);
        interceptMalloc = true;
    }
};

#endif //NUMAPERF_PROGRAMS_H
