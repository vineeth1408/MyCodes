#include<stdio.h>
#include<stdlib.h>
int dup(int array[],int n){
	if(n==0 || n==1){
		return n;
	}
	int j=0,i;
	for(i=0;i<n-1;i++){
		if(array[i]!=array[i+1]){
			array[j++]=array[i];
		}
	}
	array[j++]=array[n-1];
	return j;
}
void sort(int *array,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void main(){
	int n,i,j;
	scanf("%d",&n);
	int *array = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	sort(array,n);
	
	j=dup(array,n);
	for(i=0;i<j;i++){
		printf("%d",array[i]);
	}
}
