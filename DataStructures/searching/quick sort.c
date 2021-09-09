#include<stdio.h>
void quick(int a[],int first,int last)
{		
	int i,j,temp,k;
	int pivot;
	pivot=first;
	i=first+1;
	j=last;
	if(first < last)
	{
		while(a[i]<=a[pivot] && i<=last)
		i++;
		while(a[j]>a[pivot] && j>=first)
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		
		
		quick(a,first,j-1);
		quick(a,j+1,last);
	}
}
void main()
{
	int a[100],i,n;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	quick(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

