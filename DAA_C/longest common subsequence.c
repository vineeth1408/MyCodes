#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b)?a:b;
}
int lcs(char x[],char y[],int m,int n)
{
	int l[m+1][n+1];
	int i,j,k=0;
	char b[100];
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			l[i][j]=0;
			else if(x[i-1]==y[j-1])
			{	
				b[k]=x[i-1];
				k++;
				l[i][j] = l[i-1][j-1] + 1;
			}
			else
			l[i][j] = max(l[i-1][j],l[i][j-1]);
		}
	}
	int c;
	for(i=0;i<=k;i++)
	{	
		c=0;
		for(j=0;j<i;j++)
		{
			if(b[i]==b[j])
			{
				c=c+1;
			}
		}
		if(c==0)
		printf("%c",b[i]);
	}
	
	return l[m][n];
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
