#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return a>b?a:b;
}
int lcs(char s1[],char s2[],int m,int n)
{
	int d[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			d[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			d[i][j]= 1 + d[i-1][j-1];
			else
			d[i][j]= max(d[i][j-1],d[i-1][j]);
		}
	}
	return d[m][n];
}
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	printf("min= %d\n",lcs(a,b,strlen(a),strlen(b)));
}
