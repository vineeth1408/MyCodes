#include<stdio.h>
int fibo(int);
int main()
{
 int n,x;
 printf("Enter number\n");
 scanf("%d",&n);
 x=fibo(n);
 printf("%d",x);
 }
 int fibo(int n)
 { 
   if(n==1)
   return 0;
   else if(n==2||n==3)
   return 1; 
   else
   return(fibo(n-1)+fibo(n-2));
   }
