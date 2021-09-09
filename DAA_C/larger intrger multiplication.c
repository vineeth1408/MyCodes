#include<stdio.h>
#include<math.h>
int max(int a,int b)
{	
	int i,n;
	if(a>b)
	i=a;
	else
	i=b;
	for(n=0;i!=0;n++)
    	i=i/10;
	return n;
}
long power(int a,int b)
{
	int i;
	for(i=0;i<b;i++)
	{
		a=(a<<3) + (a<<1);
	}
	return a;
}

int product(long u,long v)
{	
	long a1,a0,b1,b0,n,c1,c2,c3,m;
	n=max(u,v);
	if(u==0 || v==0)
	return 0;
	else if(n<=2)
	return (u*v);
	else
	{
		m=(n/2);
		a1=u/pow(10,m);
		a0=u%(int)pow(10,m);
		b1=v/pow(10,m);
		b0=v%(int)pow(10,m);
		
		c1=product(a1,b1);
		c3=product(a0,b0);
		
		c2=product(a1+a0,b1+b0);
		
		return power(c1,2*m)+power(c2-c1-c3,m)+c3;
	}
}
void main()
{
	long a,b;
	int i,n;
	printf("enter two digits\n");
	scanf("%d%d",&a,&b);
    printf("%ld",product(a,b));
}
