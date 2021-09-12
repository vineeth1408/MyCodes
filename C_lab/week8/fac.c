#include<stdio.h>
int factorial(int );

int main()
{
  int i,n,x;
  printf("Enter number\n");
  scanf("%d",&n);
  x=factorial(n);
   printf("%d",x);
 }
 int factorial(int n)
  { 
    int i,k=1,x;
    for(i=1;i<=n;i++)
        { 
          k=k*i;
         }
          return(k);
          }
   
