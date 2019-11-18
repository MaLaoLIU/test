#include "uhead.h"
struct arg operate(int *a,int n){
	struct arg k;
	int i;
	k.sum=0;
	k.ave=0.0;
	for(i=0;i<n;i++){
	k.sum=k.sum+a[i];
	}
	k.ave=((float)k.sum)/n;
	qsort(a,n,sizeof(int),comp);
	k.min=a[0];
	k.max=a[n-1];
return k;

}
int comp(const void* a ,const void*b){
	return *(int*)a-*(int*)b;

}
