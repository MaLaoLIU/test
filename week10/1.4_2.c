#include "my.h"
int main(){
	int v = 99;
	pid_t pid;
	pid = vfork();
	if(pid < 0){
		perror("vfork failed!\n");
		exit(0);
	}else if(pid == 0){
		g++;
		v++;
		printf("child:pid = %d,g = %d,v = %d",getpid(),g,v);
		return 0;
	}
}
