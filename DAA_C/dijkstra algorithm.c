#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int is_all_visited(int visit[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(visit[i]!=1)
		return 1;
	}
	return 0;
}
int min_distance(int d[],int visit[],int n)
{	
	int min=99,loc;
	for(int i=0;i<n;i++)
	{
		if(visit[i]==0)
		{
				if(d[i] < min)
				{
					min=d[i];
					loc=i;
				}
			}
			
		}
		return loc;
}
int main()
{
	int i,j,n;
	int adj[100][100];
	printf("enter size of adjacency matrix\n");
	scanf("%d",&n);
	printf("enter adjacent matrix with weights\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&adj[i][j]);
	
	int visit[100];
	for (i=0;i<n;i++)
	visit[i]=0;
	
	int d[100],x;
	d[0]=0;
	for(i=1;i<n-1;i++)
		d[i]=99;
	
	while(is_all_visited(visit,n))
	{
		x=min_distance(d,visit,n);
	}
}
