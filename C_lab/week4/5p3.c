//sum=1+x^1/1!+x^2/2!+x^3/3!+x^4/4!.........
#include<stdio.h>
#include<math.h>
void main()
{
float i,n,k,x,p,c=1,sum=1;

printf("Enter x value\n");
scanf("%f",&x);
printf("Enter series upto which value\n");
scanf("%f",&n);
for(i=1;i<=n;i++)
   {
     
     for(k=i;k>0;k--)
     {
     c=c*k;
     }
     p=pow(x,i);
     sum=sum+(p/c);
     
     }
     printf("%f",sum);
     }
     
     
     
     
     
