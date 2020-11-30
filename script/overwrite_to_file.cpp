

#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("using format: command filename valuetooverwrite\n");
        return 0;
    }
    char *fileName = argv[1];
    FILE *file = fopen(fileName, "w+");
    rewind(file);
    fwrite(argv[2], strlen(argv[2]), 1, file);
}