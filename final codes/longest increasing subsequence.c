#include<stdio.h>
void main()
{
	int i,j;
	int a[]={10,22,9,33,21,50,41,60};
	int n=8;
	int lis[100];
	
	for(i=0;i<n;i++)
	lis[i]=1;
	
	for(i=1;i<=n;i++)
	{	
		for(j=0;j<i;j++)
		{
			
			if (a[j] < a[i] && lis[i] < lis[j]+1)
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	int max;
	max=lis[0];
	for(i=0;i<n;i++)
	{
		if(lis[i] > max)
		max=lis[i];
	}
	printf("max=%d\n",max);
	
}
