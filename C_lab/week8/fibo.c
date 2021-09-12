#include<stdio.h>
int fibo(int n);

int main()
{
  int a,b,n,c;
  printf("Enter number\n");
  scanf("%d",&n);
  c=fibo(n);
printf("%d",c);
}
int fibo(int x)
 {
 int a=0,b=1,k=0,i,c;
   for(i=0;i<x;i++)
     {
      c=a+b;
      k++;
      if(k==x)
      //printf("%d",a);
      goto w;
      a=b;
      b=c;
      }
  w : return (a);
   }
  
  
