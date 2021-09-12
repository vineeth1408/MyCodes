#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter any three number\n");
scanf("%d%d%d",&a,&b,&c);
if (a<b && a<c && b<c)
printf("ascending order\n%d,%d,%d",a,b,c);
else if (a<b && a<c && c<b)
printf("ascending order\n%d,%d,%d",a,c,b);
else if (c<b && c<a && a<b)
printf("ascending order\n%d,%d,%d",c,a,b);
else if (c<b && c<a && b<a)
printf("ascending order\n%d,%d,%d",c,b,a);
else if (b<a && b<c && a<c)
printf("ascending order\n%d,%d,%d",b,a,c);
else
printf("ascending order\n%d,%d,%d",b,c,a);
}







//abc acb bac bca cab cba
