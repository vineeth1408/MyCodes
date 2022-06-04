// array min max 
#include<stdio.h>
#include<limits.h>
void main()
{
	int a[5]={1,2,3,4};
	int max=0,min=9999,i;
	for(i=0;i<4;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d%d",min,max);
}
