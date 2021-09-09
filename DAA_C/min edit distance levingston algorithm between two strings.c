#include<stdio.h>
#include<string.h>
int min(int a,int b,int c)
{
	int temp,min;
	
	temp=(a<b)?a:b;
	min=(c < temp)?c:temp;
}
int edit(char s1[10],char s2[10],int m,int n)
{
	int i,j;
	int d[m+1][n+1];
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			d[i][j]=j;
			
			else if(j==0)
			d[i][j]=i;
			
			else if(s1[i-1]==s2[j-1])
			d[i][j]=d[i-1][j-1];
			
			else 
			{
				d[i][j]= 1 + min( d[i][j-1] , d[i-1][j],d[i-1][j-1]);
			}
		}
	}
	i=m,j=n;
	while(i && j)
	{
		if( d[i][j]==d[i-1][j-1] )
		{	
			i--;
			j--;
			printf("substitution\n");
		}
		else if( (d[i][j] + 1 == d[i][j-1] ) || (d[i][j]+1 == d[i-1][j] )|| (d[i][j] +1== d[i-1][j-1]) )
		{
			i--;
			j--;
			printf("insert\n");
		}
		else
		{
			i--;
			j--;
			printf("deletion\n");
		}
	}
	
return d[m][n];	
}
void main()
{
	char s1[100],s2[100];
	int m,n;
	printf("enter string 1\n");
	scanf("%s",s1);
	printf("enter string 2\n");
	scanf("%s",s2);
	m=strlen(s1);
	n=strlen(s2);
	
	n=edit(s1,s2,m,n);
	printf("minimum distance= %d\n",n);
}
