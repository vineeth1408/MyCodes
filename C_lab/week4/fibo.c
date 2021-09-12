#include<stdio.h>
void main()
{
int a=0,b=1,k=1,n,c,l;
printf("enter any number\n");
scanf("%d",&n);
do 
{
printf("%d\n",a);

c=a+b;
a=b;

b=c;
k++;
}
while(k<=n);
}
