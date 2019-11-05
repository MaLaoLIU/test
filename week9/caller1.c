#include "my.h"
int main(){
	int ret;
	printf("caller1:pid = %d,ppid = %d\n",getpid(),getppid());
	//ret = system("/home/rlk/class/test/week9/test1");
	execl("/home/rlk/class/test/week9/test1","./test1","123","456",NULL);
	printf("after calling\n");
	sleep(10);
	return 0;
}
