#include <stdio.h>
#include <unistd.h>
#include <time.h>
void init_daemon(void);
int main(){
	FILE *fp;
	time_t t;
	init_daemon();
	while(1){
		sleep(10);
		if((fp = fopen("6-8.log","a")) >= 0){
			t = time(0);
			fprintf(fp,"shouhujincheng is still running,time is:%s",asctime(localtime(&t)));
			fclose(fp);
		}
	}
}
