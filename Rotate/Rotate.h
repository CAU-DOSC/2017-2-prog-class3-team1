#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct data {
	char* str;
	int n;
	int d;
};

char* trivialrotation(char *input, int d, int n);
char* juggling(char* str, int n, int d);
char* blockswap(char* str, int n, int d);
char* reverse(char* str, int n, int d);
