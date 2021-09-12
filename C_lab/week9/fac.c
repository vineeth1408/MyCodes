#include<stdio.h>
int fac(int);
int main()
{
 int n,x;
 printf("Enter number\n");
 scanf("%d",&n);
 x=fac(n);
 printf("%d",x);
 }
  int fac(int n)
  {
    if(n==1||n==0)
      return 1;
      else 
      return (n*fac(n-1));
      }
       
