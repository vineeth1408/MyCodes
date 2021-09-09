#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*arr,i;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL)
	printf("no memory");
	else
	{
	for(i=0;i<n;i++)
	printf("%d\t",*(arr+i));
	}
}
