#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int glob=6; 
int main()  
{
	int var;
	pid_t pid;
	var=88;
	printf("before vfork\n");
	if((pid=vfork())<0){
		perror("create failure");
	}else if(pid==0){
		glob++;
		var++;
		_exit(0);
	}
	printf("pid=%d,glob=%d,var=%d\n",getpid(),glob,var); 
	return 0;  
}
