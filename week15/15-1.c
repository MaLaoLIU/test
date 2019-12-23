#include "my.h"
pthread_rwlock_t rwlock;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int g = 0;
void *fun(void *param){
	int i;
	pthread_rwlock_rdlock(&rwlock);
	for(i = 0;i < LOOP;i++){
		pthread_mutex_lock(&mutex);
		g++;
		pthread_mutex_unlock(&mutex);
	}
	pthread_rwlock_unlock(&rwlock);
	return NULL;
}

int main(){
	pthread_t tid[NUM];
//	char err_buf[1024];
	int i,ret;
	
	ret = pthread_rwlock_init(&rwlock,NULL);
	
	if(ret){
		perror("lock init failed!\n");
		exit(1);
	}
	pthread_rwlock_wrlock(&rwlock);
	for(i = 0;i < NUM;i++){
		ret = pthread_create(&tid[i],NULL,fun,NULL);
		if(ret != 0){
			perror("pthread create failed!\n");
			exit(2);
		}
	}
	pthread_rwlock_unlock(&rwlock);
	for(i= 0;i < NUM;i++){
		pthread_join(tid[i],NULL);
	}
	pthread_rwlock_destroy(&rwlock);
	printf("thread num----------:%d\n",NUM);
	printf("loops per thread : %d\n",LOOP);
	printf("except result %d\n",NUM*LOOP);
	printf("actual result %d\n",g);
	return 0;
}
