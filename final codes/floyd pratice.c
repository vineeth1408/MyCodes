#include<stdio.h>

void floyd(int a[][10],int n)
{
	int i,j,k;
	int d[10][10];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	d[i][j]=a[i][j];
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(d[i][k] + d[k][j] < d[i][j])
				{
					d[i][j]= d[i][k] + d[k][j];
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",d[i][j]);		
		}
		printf("\n");
		
	}
	
}
void main()
{
	int a[10][10];
	int i,j,n;
	printf("enter size\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	floyd(a,n);
}
