//sum=1-x^2/2!+x^4/4!-x^6/6!+x^8/8!-x^10/10!.........
#include<stdio.h>
#include<math.h>
void main()
{
float i,c=1,k=0,x,sum=1,n,l=1,p,j;
printf("Enter x value\n");
scanf("%f",&x);
printf("Enter the required series upto which value\n");
scanf("%f",&n);
for (i=1;i<=n;i++)
{
      k+=2;     
      for(j=k;j>0;--j)       
      {
          c*=j;
      }
      sum+=pow(-1,i)*(pow(x,k))/c;
               c=1; 
}
printf("%f\n",sum);
}
