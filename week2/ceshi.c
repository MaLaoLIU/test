#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int i;
	printf("55555555  before:55555\n");
	sleep(3);
	i=system("./newtest2");
	printf("55555555  after:55555\n");
	printf("%d\n\n",i);
	printf("6666666  before:66666\n");
	sleep(3);
	i=system("./newtest");
	printf("6666666  after:66666\n");
	printf("%d\n",i);
return 0;





}
