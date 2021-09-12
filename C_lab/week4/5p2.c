//sum=x-x3/3!+x5/5!.......
#include<stdio.h>
#include<math.h>
void main()
{
float i,j,k=1,l=1,c=1,sum=0,p,n,x;
printf("Enter the value of x\n");
scanf("%f",&x);
printf("Enter the series upto which value\n");
scanf("%f",&n);
for(i=0;i<n;i++)
   {
     
     for(j=1;j<=k;j++)
     {
       c=c*j;
       }   
    	sum+=pow(-1,i)*x*(k/c);
    	
    	
    	k+=2;
    	}
    	printf("%f",sum);
    	}
