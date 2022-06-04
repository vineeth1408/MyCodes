#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b)?a:b;
}
int lcs(char x[],char y[],int m,int n)
{
	int d[m+1][n+1];
	int i,j,k=0;
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			d[i][j]=0;
			else if(x[i-1]==y[j-1])
			{	
				d[i][j] = d[i-1][j-1] + 1;
			}
			else
			d[i][j] = max(d[i-1][j],d[i][j-1]);
		}
	}

	return d[m][n];
}
void main()
{
	char x[100],y[100];
	printf("enter string\n");
	scanf("%s",x);
	printf("enter sub-string\n");
	scanf("%s",y);
	printf("lcs=%d\n",lcs(x,y,strlen(x),strlen(y)));
}
