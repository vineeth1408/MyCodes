#include<stdio.h>
void quick(int a[],int first,int last)
{	
	int mid;
	if(first<last)
	{
		mid=partition(a,first,last);
		quick(a,first,mid-1);
		quick(a,mid+1,last);
	}
}
int partition(int a[],int first,int last)
{
	int pivot;
	pivot=a[last];
	
}
void main()
{
	int a[10],i,n;
	printf("size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	quick(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
