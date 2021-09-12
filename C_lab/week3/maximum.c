#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter any three digits\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
printf("Given number is max %d\n",a);
else if (b>a && b>c)
printf("Given number is max %d\n",b);
else if (c>a && c>b)

printf("Given number is max %d\n",c);
else 
printf("Equal");
}//(a<b)?printf("b"):printf("a")}
