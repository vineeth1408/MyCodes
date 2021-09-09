#include<stdio.h>
int min(int a,int b)
{
	return (a>b)?a:b;
}
void main()
{
	int n,k,i,j;
	printf("enter n and k\n");
	scanf("%d%d",&n,&k);
	
	int table[k+1];
	 
	table[0]=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=min(i,k);j>0;j--)
		{
			table[j]= table[j] + table[j-1];
		}
	}
	printf("%d",table[k]);
	
}
