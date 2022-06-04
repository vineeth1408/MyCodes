#include<stdio.h>
#include<limits.h>
int chain(int p[],int n)
{
	int m[n][n];
	int i,j,k,l,q;
	for(i=1;i<n;i++)
	m[i][i]=0;
	
	for(l=2;l<n;l++)
	{
		for(i=1;i<n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(k=i;k<=j;k++)
			{
				q=m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
				if(q < m[i][j])
				{
					m[i][j]=q;
				}
			}
		}
	}
	return m[1][n-1];
}
void main()
{
	int a[4]={1,2,3};
	int n=3;
	printf("%d",chain(a,n));
}
