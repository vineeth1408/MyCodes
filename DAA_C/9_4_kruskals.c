#include<stdio.h>
#include<stdlib.h>
int parent[100];

int find(int k)
{
	while(parent[k])
	{
		k=parent[k];
	}
	return k;
}
int un(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	else
	return 0;
}
void kruskals(int g[100][100],int n)
{
	int i,j,a,b,u,v,dist=0,min;
	int m=1;
	while(m<n)
	{
		for(i=0,min=999;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(g[i][j] < min)
				{
					min=g[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(un(u,v))
		{
			printf("%d edge (%d,%d)=%d\n",m++,a,b,min);
			dist=dist+min;
		}
		g[a][b]=g[b][a]=999;
	}
printf("minimum dist =%d\n",dist);	
}
void main()
{
	int a[100][100];
	int i,j,n;
	printf("enter no.of vertices\n");
	scanf("%d",&n);
	printf("enter cost matrix\n");
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{	
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				a[i][j]=999;
			}
		}
	}
	kruskals(a,n);
}
