#include<stdio.h>
int a[10][0],visit[10],cost=0;
void input()
{
	int i,j,n;
	printf("enter the no.of cities\n");
	scanf("%d",&n);
	printf("enter cost matrix\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			visit[j]=0;
		}
	}
}
int least(int c)
{
	int i,j;
	int min=999;
	int min2;
	for(i=0;i<n;i++)
	{
		if( a[c][i]!=0 && visit[i]==0)
		{
			if( a[c][i] + a [i][c] < min)
			{
				min=a[i][0]+a[c][i];
				min2=a[c][i];
				j=i;	
			}
		}
	}
	if(min!=999)
	cost=cost+min2;
	
	return j;
}
void mincost(int city)
{
	int i,j;
	visit[city]=1;
	printf("%d---->",city+1);
	
	j=least(city);
	if(j==999)
	{
		j=0;
		printf("%d",j+1);
		cost=cost+a[city][j];
		
		return;
	}
	mincost(j);
}
int main()
{
	input();
	mincost(0;)
}
