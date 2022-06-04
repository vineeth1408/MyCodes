#include<stdio.h>
void quick(int a[10],int start, int end)
{
	int pivot,i,j,temp;
	pivot=start;
	i=start+1;
	j=end;
	if(start <end)
	{
		while(a[i]<=a[pivot] && i<=end)
		i++;
		while(a[j]>a[pivot] && j>=start)
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
		  quick(a,start,j-1);
		  quick(a,j+1,end);
	}
}
void main()
{
	int a[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
