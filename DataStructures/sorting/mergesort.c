#include<stdio.h>
void mergesort(int [],int,int,int);
void main()
{
	int a[100],n,i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void merge(int a[],int start,int end)
{
	if(start<end)
	{
	}
}
void mergesort(int a[],int start,int mid,int end)
{
	int i,j,b[100],k=0;
	if(start<end)
	{
		i=start;
		j=mid+1;
		while(i<=mid && j<=end)
		{
			if(a[i]<a[j])
			{
				b[k]=a[i];
				k++;	
				i++;
			}
			else
			{
				b[k]=a[j];
				j++;
				k++
			}
		}
		while(i<=mid)
		{
			b[k]=a[i];
			i++
		}
		while(j<=end)
		{
			b[k]=a[j];
			j++;
		}
		for(i=start;i<=end;i++)
		{
			a[i]=b[i];
		}
		
	}
}
