#include<stdio.h>
#include<stdlib.h>

int check(int b[],int key,int iter){
	int i;
	for(i=0;i<iter;i++){
		if(key ==b[i]){
			return 1;
		}
	}
	return 0;
}
void main(){
	int n,i,j;
	scanf("%d",&n);
	int *a = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *b = (int*)malloc(sizeof(int)*n);
	int k,iter=1;
	b[0]=a[0];
	for(i=1;i<n;i++){
		if(check(b,a[i],iter)){
			continue;
		}
		else{
		b[iter]=a[i];
		iter++;	
		}
	}
	for(i=0;i<iter;i++){
		printf("%d",b[i]);
	}
}
