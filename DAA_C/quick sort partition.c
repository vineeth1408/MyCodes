#include<stdio.h>
#include<time.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot=a[high];
	int i=(low-1);
	int j;
	for(j=low;j<high;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[high],&a[i+1]);
	return i+1;
}

void quick(int a[],int low,int high)
{	
	int mid;
	if (low <high)
	{	
		mid=(low+high)/2;
		mid=partition(a,low,high);
		quick(a,low,mid-1);
		quick(a,mid+1,high);
	}
}

void main()
{
	int a[100000];
	int n,i;
	float t;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	a[i]=rand();
	
	t=clock();
	quick(a,0,n-1);
	t=(clock()-t)/CLOCKS_PER_SEC;
	printf("time=%f\n",t);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
