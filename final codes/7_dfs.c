#include<stdio.h>
#include<stdlib.h>
void depth_first_search(int a[100][100],int start,int n,int visit[])
{	
	int i;
	if(visit[start]==0)
	{
		visit[start]=1;
		printf("%d",start);
		for(i=0;i<n;i++)
		{
			if(a[start][i]==1 && visit[i]==0)
			{
				depth_first_search(a,i,n,visit);
			}
		}
	}
}
void main()
{
	int a[100][100],start=0,i,j,n;
	int visit[10];
	printf("Enter size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 visit[10]=0;
	depth_first_search(a,0,n,visit);
}
