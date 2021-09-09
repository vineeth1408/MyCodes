#include<stdio.h>
#define INF 9999
# define v 4
void print(int d[][v])
{	
	int i,j;
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
			{	
				printf("%d to %d-",i,j);
				if(d[i][j]==INF)
				printf("%7s\t","INF");
				else
				printf("%7d\t",d[i][j]);
				
				printf("\t\t");	
			}
		printf("\n");
	}
}
void floyd(int graph[][v])
{
	int d[v][v],i,j,k;
	
	for(i=0;i<v;i++)
	for(j=0;j<v;j++)
	d[i][j]=graph[i][j];
	
	for(k=0;k<v;k++)
	{
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
				if(d[i][k] + d[k][j] < d[i][j])
				{
					d[i][j]=d[i][k] + d[k][j];
				}
			}
		}
	}
	print(d);	
}
int main()
{
	int graph[v][v]= {	{0,5,1,10},
						{2,0,3,10},
						{5,1,0,1},
						{6,8,9,0}
					 };
	floyd(graph);				 
}
