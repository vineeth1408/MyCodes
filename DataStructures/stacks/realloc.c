#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	int *arr;
	char q;
	printf("Enter minimum size:");
	scanf("%d",&n);
	arr=(int*)calloc(sizeof(int),n);
	if(arr==NULL)
	{
		printf("out of memeory\n");
		exit(1);
	}
	printf("enter the elements and also press 1 to end\n");
	for(i=0;;i++)
	{
		scanf("%d",(arr+i));
		
		if(i>=n)
		{	
			n++;
			arr=(int*)realloc(arr,sizeof(int)*n);
		}
		if(*(arr+i)==1)
		break;
	}
	for(i=0;i<n-1;i++)
	{
	printf("%d",*(arr+i));
	}
		
}

