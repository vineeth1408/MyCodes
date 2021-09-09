#include<stdio.h>

int cost[10][10];
int min,mincost=0;
int n,ne=1;
int a,b,u,v,i,j;
int parent[10];
int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int unio(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
		
	}
	return 0;
}
void main()
{
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	
	while(ne<n)
	{
		for(i=0,min=999;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(unio(u,v))
		{
			printf("%d (%d-%d)----- %d\n",ne++,a,b,min);
			mincost=mincost+min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("cost=%d\n",mincost);
 } 


