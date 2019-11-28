#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main(){
	printf("This is parent process %d\n",getpid());
	pid_t p1,p2;
	if((p1=fork())==0)
	{ 
		printf("This is child_1 process %d\n",getpid()); 
	}else{
		if((p2=fork())==0)
		{ 
			printf("This is child_2 process %d\n",getpid()); 
		}
		else
		{ 
			wait(p1,NULL,0); 
			wait(p2,NULL,0); 
			printf("This is parent process %d\n",getpid()); 
		} 
	} 
} 

