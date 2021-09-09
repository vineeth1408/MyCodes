//program for the strassen algorithm for the multiplication of the two matrixs
//program for to matrix multiplication using divide and conquer method
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int ** sum(int **a,int **b,int n)
{
	int **c=(int**)malloc(sizeof(int*)*n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		c[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	return c;
}
int ** sub(int **a,int **b,int n)
{
	int **c=(int**)malloc(sizeof(int*)*n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		c[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	return c;
}
int **partition(int **a,int n,int ax1,int ax2,int ay1,int ay2)
{
	int **c=(int**)malloc(sizeof(int*)*n);
	int i,j,k,l;
	for(i=0;i<n;i++)
	{
		c[i]=(int*)malloc(sizeof(int)*n);
	}
	for(i=ax1,k=0;k<n && i<ax2;k++,i++)
	{
		for(j=ay1,l=0;l<n && j<ay2;l++,j++)
		{
			c[k][l]=a[i][j];
		}
	}
	return c;
}
int ** multiply(int n,int **a,int **b)
{
	int **c=(int**)malloc(sizeof(int*)*n);
	int i,j,k,m;
	for(i=0;i<n;i++)
	{
		c[i]=(int*)malloc(sizeof(int)*n);
	}
	if(n==1)
	{
		c[0][0]=a[0][0]*b[0][0];
	}
	else
	{
		int **aa=partition(a,n/2,0,n/2,0,n/2);
		int **bb=partition(a,n/2,0,n/2,n/2,n);
		int **cc=partition(a,n/2,n/2,n,0,n/2);
		int **dd=partition(a,n/2,n/2,n,n/2,n);
	
		int **ee=partition(b,n/2,0,n/2,0,n/2);
		int **ff=partition(b,n/2,0,n/2,n/2,n);
		int **gg=partition(b,n/2,n/2,n,0,n/2);
		int **hh=partition(b,n/2,n/2,n,n/2,n);
		
		int **p5=multiply(n/2,sum(aa,dd,n/2),sum(ee,hh,n/2));
		int **p3=multiply(n/2,sum(cc,dd,n/2),ee);
		int **p1=multiply(n/2,aa,sub(ff,hh,n/2));
		int **p4=multiply(n/2,dd,sub(gg,ee,n/2));
		int **p2=multiply(n/2,sum(aa,bb,n/2),hh);
		int **p7=multiply(n/2,sub(aa,cc,n/2),sum(ee,ff,n/2));
		int **p6=multiply(n/2,sub(bb,dd,n/2),sum(gg,hh,n/2));
		
		int **c11=sub(sum(sum(p5,p4,n/2),p6,n/2),p2,n/2);
		int **c12=sum(p1,p2,n/2);
		int **c21=sum(p3,p4,n/2);
		int **c22=sub(sub(sum(p1,p5,n/2),p3,n/2),p7,n/2);
		for(i=0;i<n/2;i++)
		{
			for(j=0;j<n/2;j++)
			{
				c[i][j]=c11[i][j];
			}
			for(j=n/2,k=0;k<n/2&&j<n;k++,j++)
			{
				c[i][j]=c12[i][k];
			}
		}
		for(i=n/2,k=0;k<n/2 && i<n;i++,k++)
		{
			for(j=0;j<n/2;j++)
			{
				c[i][j]=c21[k][j];
			}
			for(j=n/2,m=0;m<n/2 && j<n;m++,j++)
			{
				c[i][j]=c22[k][m];
			}
		}
	}
	return c;
}
void main()
{
	int n,i,j,k;
	printf("Enter the size of the square matrix:");
	scanf("%d",&n);
	int **a=(int**)malloc(sizeof(int*)*n);
	int **b=(int**)malloc(sizeof(int*)*n);
	int **c;
	for(i=0;i<n;i++)
	{
		a[i]=(int*)malloc(sizeof(int)*n);
		b[i]=(int*)malloc(sizeof(int)*n);
	}
	printf("Enter the matrix elements of the first matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the matrix elements of the second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	c=multiply(n,a,b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
}
	
