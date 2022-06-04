#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	int s[10]={0};
	int d[10],b[10];
	int n=9,i,j,u;
	int a[9][9]=		{ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	
	for(i=0;i<n;i++)
	b[i]=i;
	
	d[0]=0;
	for(i=1;i<n;i++)
	{
		d[i]=100000;
	}
	while(is_complete(b,n))
	{
		u=min(d,b,n);
		for(i=0;i<n;i++)
		{
			if(a[u][i]!=0 && b[i]!=1)
			{
				if(d[i] > a[u][i]+d[u])
				{
					d[i]= a[u][i]+d[u];
					s[i]=u;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ->%d",d[i],s[i]);
	}
}
int min(int d[10],int b[10],int n)
{
	int i=0,j=0;
	int mi=11111;
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			if(mi > d[i])
			{
				mi = d[i];
				j=i;
			}
		}
	}
	b[j]=1;
	return j;
}
int is_complete(int b[10],int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		if(b[i]!=1)
		return true;
	}
	return false;
}
