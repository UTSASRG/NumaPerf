#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEST_BUFSZ 1024

//int g_variable = 0;

int main() {
	//fprintf(stderr, "globalVariable = 0 at address %p\n", &g_variable);
	//g_variable = 1;																//WRITE
	//fprintf(stderr, "globalVariable = 1 at address %p\n", &g_variable);

	//fprintf(stderr, "**[START] malloc\n");
	char *buf = (char*)malloc(TEST_BUFSZ*sizeof(char));				//MALLOC
	//fprintf(stderr, "buf addr: %p\n", buf);
	//fprintf(stderr, "**[ END ] malloc\n\n");


	//fprintf(stderr, "**[START] strcpy\n");
	//strcpy(buf, "Hello!");
	//fprintf(stderr, "**[ END ] strcpy\n\n");

//	fprintf(stderr, "**[START] replace buf[0]\n");
	buf[0] = 'h';
//	fprintf(stderr, "**[ END ] replace buf[0]\n\n");

//	fprintf(stderr, "**[START] replace buf[1]\n");
	buf[1] = 'e';
//	fprintf(stderr, "**[ END ] replace buf[1]\n\n");

	buf[2] = 'y';

	buf[1] = 'a';

	buf[1000] = 'u';

	char *buf2 = (char*)malloc(10000*sizeof(char));
	buf2[0] = 'm';


	char *buf3 = (char*)malloc(555*sizeof(char));

	free(buf);
	free(buf2);
	free(buf3);
	return 0;
}
