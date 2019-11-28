#include "my.h"

int main(){
	pid_t r;
	int r_num;
	int pipefd[2];
	char buf[65537];
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0){
		perror("pipe failed.\n");
		return -1;
	}
	r = fork();
	if(r < 0){
		perror("fork failed.\n");
		return -1;
	}else if(r == 0){
		char b = 'a';
		close(pipefd[0]);
		for(int i = 0;i < 65537;i++){
			
			write(pipefd[1],&b,1);
			printf("%d:parent\n",i);
		}
		close(pipefd[1]);
		exit(0);   
	}else{
		wait(NULL);
		close(pipefd[1]);
		for(int i = 0;i < 65537;i++){
			read(pipefd[0],buf,1);
			printf("%d:child read from pipe:%s\n",i,buf);
		}
		
		close(pipefd[0]);
	return 0; 
	}
}
