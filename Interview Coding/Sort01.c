#include<stdio.h>

void main()
{
	int num=132,r=0,rem,sum=0;
	while(num>0)
	{
		num=num/10;
		r++;
	}
	while(num>0)
	{
		rem=num%10;
		sum=sum+Math.pow(rem,r);
		num=num/10;
	}
	if(sum==num)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Vineeth");
	}
}
// end=3
