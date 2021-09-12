#include<stdio.h>
void main()
{
int a;
printf("Enter any number\n");
scanf("%d",&a);
if (a>0) 
printf("Given number is positive %d\n",a);
else if (a<0)
printf("Given number is negative %d\n",a);
else 
printf("zero\n");
}

