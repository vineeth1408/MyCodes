#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void dijkstra(int g[][10],int,int);
int main()
{
	int n,i,j,source;
	int b[10],d[10],s[10]={0};
	int g[9][9]=	{ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
	printf("enter source node\n");
	scanf("%d",&source);
	n=9;
	dijkstra(g,n,source);
}
void dijkstra(int g[][10], int n,int source)
{
	int g1[10][10];
	int distance[100],parent[100],visit[100];
	int count,i,j,mindist,next;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(g[i][j]==0)
			g1[i][j]=99999;
			else
			g1[i][j]=g[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		distance[i]=g1[source][i];
		parent[i]=source;
		parent[i]=source;
		visit[i]=0;
	}
	distance[source]=0;
	visit[source]=1;
	count=1;
	while(count < n-1)
	{
		mindist=9999;
		for(i=0;i<n;i++)
		{
			if(distance[i] < mindist && visit[i]==0)
			{
				mindist=distance[i];
				next=i;
			}
		}
		visit[next]=1;
		for(i=0;i<n;i++)
		{
			if(visit[i]==0)
			{
				if(mindist + g1[next][i] < distance[i])
				{
					distance[i]= mindist + g1[next][i];
					parent[i]=next;
				}
			}
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
		if(i!=source)
		{
			printf("distance of node %d is %d\t",i,distance[i]);
			printf("\npath=%d",i);
			j=i;
			do{
				j=parent[j];
				printf("<-%d ",j);
				
			}while(j!=source);
		}
	}
}
	

