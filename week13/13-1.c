#include "my.h"

void sigroutine(int dunno){
	switch(dunno){
		case 1:
			printf("Get a signsl SIGHUP\n");
			break;
		case 2:
			printf("Get a signal SIGHINT\n");
			break;
		case 3:
			printf("Get a signal SIGHQUIT\n");
			break;
	}
}

int main(){
	printf("process id is %d\n",getpid());
	signal(SIGHUP,sigroutine);
	signal(SIGINT,sigroutine);
	signal(SIGQUIT,sigroutine);
	while(1);
}
