#include<stdio.h>
int fibo(int n,int a[])
{	
	int i;
	if (n<=1)
	return n;
	else
	{
	a[0]=0;
	a[1]=1;
		for(i=2;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
	return a[n];	
	}
}
void main()
{
	int n,a[100],i;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	a[i]=-1;
	
	printf("fibo(%d) of %d\n",n,fibo(n,a));
}
