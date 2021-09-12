#include<stdio.h>
void main()
{
int i,j,n,c=0;
printf("Enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
   {
   if(n%i==0)
   c++;
   }
   if(c==2)
   printf("it is a prime\n");
   
   else 
   printf("it is not a prime\n");}
/*
for (i=0;i<=100;i=i+2)
{
//if(i%2==0)

sum=sum+i;
printf("%d+",i);
}
printf("=");
printf(" %d",sum);
}*/
