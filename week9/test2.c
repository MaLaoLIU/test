#include "my.h"
static void __attribute__ ((constructor)) brfore_main(){
	printf("-1:Running before main!\n");
}
static void __attribute__ ((destructor)) after_main(){
	printf("9999:Running after main!\n");
}

static void callback1(){
	printf("1:Running after main!\n");
}

static void callback2(){
	printf("2:Running after main!\n");
}

static void callback3(){
	printf("3:Running after main!\n");
}

int main(){
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("test1:pid = %d,ppid = %d\n",getpid(),getppid());
	//while(1)
		//sleep(2);
}
