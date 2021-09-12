#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,k,x;
x=1;
k:
if(x<=100)
{
printf("%d\n",x);
x++;
goto k;
}
}
