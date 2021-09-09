//strassens matrix multiplication
#include<stdio.h>

void add(int n,int a[10][10],int b[10][10],int c[10][10])
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

void sub(int n,int a[10][10],int b[10][10],int c[10][10])
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


void stra(int n,int a[10][10],int b[10][10],int c[10][10])
{
	int i,j;
	if(n==1)
	{
		c[0][0]=a[0][0]*b[0][0];
	}
	else
	{
		int a11[10][10],a12[10][10],a21[10][10],a22[10][10],b11[10][10],b12[10][10],b21[10][10],b22[10][10];
		int c11[10][10],c12[10][10],c21[10][10],c22[10][10],p1[10][10],p2[10][10],p3[10][10],p4[10][10],p5[10][10],p6[10][10],p7[10][10];
		int t1[10][10],t2[10][10],t3[10][10],t4[10][10],t5[10][10],t6[10][10],t7[10][10],t8[10][10],t9[10][10],t10[10][10];
		int q1[10][10],q2[10][10],q3[10][10],q4[10][10];
		
		for(i=0;i<n/2;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    a11[i][j]=a[i][j];
		    }
	    }
	    for(i=0;i<n/2;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    a12[i][j-n/2]=a[i][j];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    a21[i-n/2][j]=a[i][j];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    a22[i-n/2][j-n/2]=a[i][j];
		    }
	    }
	    for(i=0;i<n/2;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    b11[i][j]=b[i][j];
		    }
	    }
	    for(i=0;i<n/2;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    b12[i][j-n/2]=b[i][j];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    b21[i-n/2][j]=b[i][j];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    b22[i-n/2][j-n/2]=b[i][j];
		    }
	    }
// p1=a*(f-h)
// p2= (a+b)*h
// p3 =(c+d)*e
// p4 =d*(g-e);
// p5 =(a+d)*(e+h)
// p6 =(b-d) * (g+h)
// p7 =(a-c)*(e+f)		
	    add(n/2,a11,a22,t1);
	    add(n/2,b11,b22,t2);
	    add(n/2,a21,a22,t3);
	    sub(n/2,b12,b22,t4);
	    sub(n/2,b21,b11,t5);
	    add(n/2,a11,a12,t6);
	    sub(n/2,a11,a21,t7);
	    add(n/2,b11,b12,t8);
	    sub(n/2,a12,a22,t9);
	    add(n/2,b21,b22,t10);
	    
	    stra(n/2,t1,t2,p5);
	    stra(n/2,t3,b11,p3);
	    stra(n/2,a11,t4,p1);
	    stra(n/2,a22,t5,p4);
	    stra(n/2,t6,b22,p2);
	    stra(n/2,t7,t8,p7);
	    stra(n/2,t9,t10,p6);
	    
	    add(n/2,p5,p4,q1);
	    sub(n/2,p2,p6,q2);
	    sub(n/2,q1,q2,c11);
	    add(n/2,p1,p2,c12);
	    add(n/2,p3,p4,c21);
	    add(n/2,p1,p5,q3);
	    add(n/2,p3,p7,q4);
	    sub(n/2,q3,q4,c22);
	    
	    
	    for(i=0;i<n/2;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    c[i][j]=c11[i][j];
		    }
	    }
	    for(i=0;i<n/2;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    c[i][j]=c12[i][j-n/2];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=0;j<n/2;j++)
		    {
			    c[i][j]=c21[i-n/2][j];
		    }
	    }
	    for(i=n/2;i<n;i++)
	    {
		    for(j=n/2;j<n;j++)
		    {
			    c[i][j]=c22[i-n/2][j-n/2];
		    }
	    }
	       
	}
}

int main()
{
	int n,i,j;
	printf("enter the size of the matrix\n");
	scanf("%d",&n);
	int a[10][10],b[10][10],c[10][10];
	printf("enter the a matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	stra(n,a,b,c);
	printf("the multiplied matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}


