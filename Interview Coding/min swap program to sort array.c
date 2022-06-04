#include<stdio.h>
#include<stdlib.h>
// in a unduplicated array
void main(){
	int n,c=0;
	printf("enter size");
	scanf("%d",&n);
	int *a = (int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<n){
		if(a[i]!=i+1){
			int temp=a[i];
			a[i]=a[temp-1];
			a[temp-1]=temp;
			c++;
		}
		else{
			i++;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("%d",c);
}
