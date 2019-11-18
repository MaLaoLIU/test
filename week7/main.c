#include "/home/mmmm/test/test6/my.h"

int main(void){
	int a[maxn];
	int  zuida=0;
	srand(time(NULL));
	randinit(a,maxn);
	for(int i=0;i<maxn;i++){printf("%d  ",a[i]);}
	printf("max value wei\n");
	zuida=max(a,maxn);
	printf("%d\n",zuida);
return  0;
}
