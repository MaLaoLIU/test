#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UNMU 6
int usum(int *,int);
int urand(void);
void show (int *,int);
struct arg{
	float ave;
	int sum;
	int max;
	int min;
};

struct arg operate(int *,int);

int comp(const void*  ,const void *);

