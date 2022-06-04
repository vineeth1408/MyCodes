#include<stdio.h>
#include<string.h>
int min(int a,int b,int c)
{
	int temp,min;
	temp=a<b ?a:b;
	return min=temp<c?temp:c;
}
int minE(char s1[],char s2[],int m,int n)
{
	int d[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			d[i][j]=j;
			else if(j==0)
			d[i][j]=i;
			else if(s1[i-1]==s2[j-1])
			d[i][j]= d[i-1][j-1];
			else
			d[i][j]= 1+ min(d[i][j-1], d[i-1][j], d[i-1][j-1]);
		}
	}
	for(i=0;i<=m;i++)
	for(j=0;j<=n;j++)
	printf("%d ",d[i][j]);
	
	return d[m][n];
}
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	printf("min= %d\n",minE(a,b,strlen(a),strlen(b)));
}
