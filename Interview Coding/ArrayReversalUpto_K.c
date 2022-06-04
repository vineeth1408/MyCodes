// array rotate upto K elements
#include<stdio.h>
void swap(int start,int end,int a[])
{
	int temp;
	while(start < end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}
void main()
{
	int a[5]={1,2,3,4,5};
	int k=3;
	int start=0,i;
	int end =4;
	swap(start,end,a);
	swap(start,k-1,a);
	swap(k,end,a);
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
