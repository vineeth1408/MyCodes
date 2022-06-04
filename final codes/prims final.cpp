#include<stdio.h>
    int cost[10][10],i,j,n;
    int visit[10]={0};
	int ne=1,mincost=0;
	int u,v,a,b,s;
	int min;
void main()
{
	
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter weights\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
	}
	printf("enter the source vertex\n");
	scanf("%d",&s);
	visit[s]=1;
	printf("output\n");
	while(ne < n)
	{
		for(i=0,min=999;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(cost[i][j] < min)
				{
					if(visit[i]==0)
					{
						min=cost[i][j];
					    u=a=i;
					    v=b=j;
					}
				}
			}
		}
		if(visit[u]==0||visit[v]==0)
		{
			printf("%d -> (%d %d)---%d \n",ne++,a,b,min);
			mincost=mincost+min;
			visit[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("min cost=%d \n",mincost);
}
