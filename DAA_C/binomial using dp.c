#include<stdio.h>
int min(int a,int b)
{
	return (a>b)?a:b;
}
int bino(int n,int k)
{
	int table[n+1][k+1];
	int i;
	int j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=min(i,k);j++)
		{
			if(j==0 || j==i)
			table[i][j]=1;
			else
			table[i][j]=table[i-1][j-1] + table[i-1][j];
		}
	}
	return table[n][k];
}
void main()
{
	int n,k;
	printf("enter n and k\n");
	scanf("%d%d",&n,&k);
	
	printf("bino=%d",bino(n,k));
}
