#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <string.h>
#include <wait.h>
#include <errno.h>
#include <time.h>
#include <sys/times.h>
#include <pthread.h>
#include <limits.h>
#include <assert.h>
#include <semaphore.h>

#define LOOP 10000000
#define NUM 4
#define NT 100
#define WRITER_FIRST
