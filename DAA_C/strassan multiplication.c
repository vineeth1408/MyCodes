#include<stdio.h>
#include<stdlib.h>
void sum(int n,int a[][10],int b[][10],int c[][10])
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
void sub(int n,int a[][10],int b[][10],int c[][10])
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

void mul(int n,int m1[10][10],int m2[10][10],int m3[10][10])
{
	if(n==1)
	m3[0][0]=m1[0][0] * m2[0][0];
	else
	{
		int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10],f[10][10],g[10][10],h[10][10];
		int p1[10][10],p2[10][10],p3[10][10],p4[10][10],p5[10][10],p6[10][10],p7[10][10];
		int t1[10][10],t2[10][10],i,j;
		int c1[10][10],c2[10][10],c3[10][10],c4[10][10];
		
		for(i=0;i<n/2;i++)
		{
			for(j=0;j<n/2;j++)
			{
				a[i][j]=m1[i][j];
				b[i][j]=m1[i+n/2][j];
				c[i][j]=m1[i][j+n/2];
				d[i][j]=m1[i+n/2][j+n/2];
				
				e[i][j]=m2[i][j];
				f[i][j]=m2[i+n/2][j];
				g[i][j]=m2[i][j+n/2];
				h[i][j]=m2[i+n/2][j+n/2];
			}
		}
// p1=a*(f-h)
// p2= (a+b)*h
// p3 =(c+d)*e
// p4 =d*(g-e);
// p5 =(a+d)*(e+h)
// p6 =(b-d) * (g+h)
// p7 =(a-c)*(e+f)

		sub(n/2,f,h,t1);
		mul(n/2,a,t1,p1);
		sum(n/2,a,b,t1);
		mul(n/2,t1,h,p2);
		sum(n/2,c,d,t1);
		mul(n/2,t1,e,p3);
		sub(n/2,g,e,t2);
		mul(n/2,t2,d,p4);
		sum(n/2,a,d,t1);
		sum(n/2,e,h,t2);
		mul(n/2,t1,t2,p5);
		sub(n/2,b,d,t1);
		sum(n/2,g,h,t2);
		mul(n/2,t1,t2,p6);
		sub(n/2,a,c,t1);
		sum(n/2,e,f,t2);
		mul(n/2,t1,t2,p7);
	
//  p5+p6+p4-p2 p1+p2
//  p3+p4    p1-p3+p5-p7	
		
		sum(n/2,p5,p6,t1);
		sub(n/2,p4,p2,t2);
		sum(n/2,t1,t2,c1);
		
		sum(n/2,p1,p2,c2);
		sum(n/2,p3,p4,c3);
		
		sub(n/2,p1,p3,t1);
		sub(n/2,p5,p7,t2);
		sum(n/2,t1,t2,c4);
		
		for(i=0;i<n/2;i++)
		{
			for(j=0;j<n/2;j++)
			{
				m3[i][j]=c1[i][j];
				m3[i+n/2][j]=c2[i][j];
				m3[i][j+n/2]=c3[i][j];
				m3[i+n/2][j+n/2]=c4[i][j];
			}
		}
	}
}
void main() {
	
	int A[10][10],B[10][10],C[10][10],n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter matrix1:\n");

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	printf("Enter matrix2:\n");

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&B[i][j]);
	
	mul(n,A,B,C);

	printf("Multiplication is:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++)
			printf("%d ",C[i][j] );
		printf("\n");
	}
}
