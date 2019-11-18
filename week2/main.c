#include "uhead.h"
 int main(){
	int data[UNMU];
	int j;
	srand((int)time(0));

	for(j=0;j<UNMU;j++){

	data[j]=urand();}
	show(data,UNMU);

	printf("hhehheh");
	struct arg a;
	a=operate(data,UNMU);
	printf("sum=%d,ave=%f,max=%d,min=%d\n",a.sum,a.ave,a.max,a.min);
	
	
return  0;

}
