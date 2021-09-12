#include<stdio.h>
void main()
{
int p,a,c,n,x=0;
for (p=2;x<=100;p++)
{	
	c=0;
         for(a=1;a<=p;a++)
	{ 
	if(p%a==0)
	 c++;
	}
if (c==2)
{
x++;
printf("%d ",p);
}
}
}
