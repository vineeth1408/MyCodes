#include<stdio.h>
int bino(int n,int k)
{
	if(k==0 || k==n)
	return 1;
	else
	return bino(n-1,k-1)+bino(n-1,k);
}
void main()
{
	int n,k;
	printf("enter n and k values\n");
	scanf("%d%d",&n,&k);
	printf("answer=%d\n",bino(n,k));
}
