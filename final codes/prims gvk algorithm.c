#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int n;
int minkey(int key[],int visit[])
{
	int min=INT_MAX;
	int min_index,i;
	for(i=0;i<n;i++) // n vertices [size]
	{
		if(visit[i]==0 && key[i] < min)
		{
			min=key[i];
			min_index=i;
		}
	}
	return min_index;
}
void print(int parent[],int a[10][10])
{	
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d-%d\t %d \n",parent[i],i,a[i][parent[i]]);
	}
}
void prims(int a[10][10])
{
	int visit[10],key[10];
	int parent[n];
	int i,j;
	for(i=0;i<n;i++)
	visit[i]=0,key[i]=INT_MAX;
	
	printf("max values\n");
	for(i=0;i<n;i++)
	printf("%d\n",key[i]);
	
	key[0]=0;
	parent[0]=-1;
	for(i=0;i<n;i++)
	{
		int k=minkey(key,visit);
		visit[k]=1;
		
		for(j=0;j<n;j++)
		{
			if(a[k][j] && visit[j]==0 && a[k][j] < key[j])
			{
				key[j]=a[k][j];
				parent[j]=k;
			}
		}
	}
	print(parent,a);	
}

void main()
{
	int a[10][10];
	int i,j;
	printf("enter no.of vertices\n");
	scanf("%d",&n);
	printf("enter cost matrix/weight of the each edge of the matrix\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	prims(a);
	
}
