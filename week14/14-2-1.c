#include "my.h"

#define NUM 4

void * fun(void *arg){
	int *pt;
	pt = (int*)arg;
	printf("%d thread: tid %p\n\n\n",arg,pthread_self());
	return NULL;
}

int main(){
	pthread_t tid[NUM];
	int i,ret[NUM];
	for(i = 0;i < NUM;i++){
		ret[i] = pthread_create(&tid[i],NULL,fun,(void *)i);
		if(ret[i] != 0){
			printf("thread create failed!\n");
			return -1;
		}
		pthread_join(tid[i],NULL);
	}
	return 0;
}
