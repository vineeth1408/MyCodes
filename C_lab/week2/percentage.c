#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter any two numbers\n");
scanf("%d%d",&a,&b);

c=(a*100)/b;
printf("%d is %d%%  percentage of %d\n",a,c,b);
}
