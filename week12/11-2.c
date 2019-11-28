#include "my.h"

int main(){
	pid_t p1,p2,p3;
	p1 = fork();
	int s1,s2,s3,r1,r2,r3;
	if(p1 < 0){
		perror("fork1 failed.\n");
		return -1;
	}else if(p1 == 0){
		count += 1;
		printf("child pid = %d,ppid = %d,count = %d\n",getpid(),getppid(),count)
		exit(99);
	}else{
		printf("")
	}
}
