#include<stdio.h>
#include<stdbool.h>
int small_dist(int n,int visit[],int distance[],int near_node)
{
	int min=999,i;
	for(i=0;i<n;i++)
	{
		if(visit[i]!=-1 && distance[i] < min)
		{
			min=distance[i];
			near_node=i;
		}
	}
	return near_node;
	
}
bool empty(int n,int visit[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(visit[i]!=-1)
		return false;
	}
	return true;
}
void dikstra(int n,int a[][100],int near_node,int distance[],int parent[])
{
	int visit[10],i,dist;
	for(i=0;i<n;i++)
	{
		distance[i]=9999;
		visit[i]=i;
		parent[i]=-1;
	}
	distance[near_node]=0; //all big only this value 0 first now
	
	while( ! empty(n,visit))
	{
		near_node=small_dist(n,visit,distance,near_node);
		for(i=0;i<n;i++)
		{
			if(a[near_node][i]!=0 && visit[i]!=-1)
			{
				dist=distance[near_node]+ a[near_node][i];
				
				if(dist < distance[i])
				{
					distance[i]=dist;
					parent[i]=near_node;
				}
			}
		}
		visit[near_node]=-1;
	}
}
void main()
{
	int i,j,n,distance[100],start_node,parent[100];
	printf("enter size n\n");
	scanf("%d",&n);
	
	int a[9][9]	={ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	
	printf("enter start node\n");
	scanf("%d",&start_node);
	
	dikstra(n,a,start_node,distance,parent);
	printf("Node\tDistance\tParent\n");
	for(i=0;i<n;i++)
		printf("%d\t%d\t\t%d\n",i,distance[i],parent[i]);
}
