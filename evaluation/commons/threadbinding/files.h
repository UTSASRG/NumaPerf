#ifndef NUMAPERF_FILES_H
#define NUMAPERF_FILES_H

#include <stdio.h>
#include <cstring>

class Files {
public:

    // return the length of string readed out, and 0 means reach the end of the file.
    static int readALine(FILE *file, char *buff, int buffSize) {
        if (file == NULL) {
            return 0;
        }
        if (feof(file)) {
            return 0;
        }
        if (!fgets(buff, buffSize, file)) {
            return 0;
        }
        return strlen(buff);
    }
};

#endif //NUMAPERF_FILES_H
