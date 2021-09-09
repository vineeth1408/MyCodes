#include<stdio.h>
void main()
{
	int g[10][10],min;
	int n,m=1,j,i,a,b,dist=0;
	int visit[100]={0},v,u;
	printf("enter no.of vertices\n");
	scanf("%d",&n);
	
	printf("enter cost matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
			if(g[i][j]==0)
			g[i][j]=999;
		}
	}
	printf("enter starting node\n");
	scanf("%d",&v);
	visit[v]=1;
	while(m<n)
	{
		for(i=0,min=999;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(g[i][j]< min)
				{
					if(visit[i]!=0)
					{	
						min=g[i][j];
						a=u=i;
						b=v=j;
					}
				}
			}
		}
		if(visit[u]==0 || visit[v]==0)
		{
			printf("%d edge (%d,%d)=%d\n",m,a,b,min);
			dist=dist+min;
			visit[b]=1;
		}
		g[a][b]=g[b][a]=999;
		m++;
	}
	printf("min=%d\n",dist);
}
