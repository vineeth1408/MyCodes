#include<stdio.h>
#include<stdlib.h>

void add(int a[][10],int b[][10],int c[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void sub(int a[][10],int b[][10],int c[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
}

void mul(int a[][10],int b[][10],int c[][10],int n)
{
	if(n==1)
	   c[0][0]=a[0][0]*b[0][0];
	else
	{
		int i,j;
		int a11[10][10],a12[10][10],a21[10][10],a22[10][10],b11[10][10],b12[10][10],b21[10][10],b22[10][10];
		int p1[10][10],p2[10][10],p3[10][10],p4[10][10],p5[10][10],p6[10][10],p7[10][10];
		int temp1[10][10],temp2[10][10];
		int c11[10][10],c12[10][10],c21[10][10],c22[10][10];
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<n/2 && j<n/2)
				{
					a11[i][j]=a[i][j];
					b11[i][j]=b[i][j];
				}
				else if(i<n/2 && j>=n/2)
				{
					a12[i][j-n/2]=a[i][j];
					b12[i][j-n/2]=b[i][j];
				}
				else if(i>=n/2 && j<n/2)
				{
					a21[i-n/2][j]=a[i][j];
					b21[i-n/2][j]=b[i][j];
				}
				else
				{
					a22[i-n/2][j-n/2]=a[i][j];
					b22[i-n/2][j-n/2]=b[i][j];
				}
			}
		}
		sub(b12,b22,temp1,n/2);
		mul(a11,temp1,p1,n/2);
		add(a11,a12,temp1,n/2);
		mul(temp1,b22,p2,n/2);
		
		add(a21,a22,temp1,n/2);
		mul(temp1,b11,p3,n/2);
		
		sub(b21,b11,temp1,n/2);
		mul(a22,temp1,p4,n/2);
		
		add(a11,a22,temp1,n/2);
		add(b11,b22,temp2,n/2);
		mul(temp1,temp2,p5,n/2);
		
		sub(a12,a22,temp1,n/2);
		add(b21,b22,temp2,n/2);
		mul(temp1,temp2,p6,n/2);
		
		sub(a11,a21,temp1,n/2);
		add(b11,b12,temp2,n/2);
		mul(temp1,temp2,p7,n/2);
		
		// 
		add(p5,p4,temp1,n/2);
		add(temp1,p6,temp2,n/2);
		sub(temp2,p2,c11,n/2);
		
		
		add(p1,p2,c12,n/2);
		add(p3,p4,c21,n/2);
		
		sub(p1,p3,temp1,n/2);
		sub(p5,p7,temp2,n/2);
		add(temp1,temp2,c22,n/2);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<n/2 && j<n/2)
				{
					c[i][j]=c11[i][j];
				}
				else if(i<n/2 && j>=n/2)
				{
					c[i][j]=c12[i][j-n/2];
				}
				else if(i>=n/2 && j<n/2)
				{
					c[i][j]=c21[i-n/2][j];
				}
				else
				{
					c[i][j]=c22[i-n/2][j-n/2];
				}
				
			}
		}
	}
}

void main()
{
	int a[10][10],b[10][10],c[10][10];
	int n,i,j;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements in 1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements in 2\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	mul(a,b,c,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}		
}
