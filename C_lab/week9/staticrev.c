#include<stdio.h>
int rev(int);
int main()
{
int n,x;
printf("Enter number\n");
scanf("%d",&n);
x=rev(n);
printf("%d",x);
}
int rev(int n)
{
 static int s;
 int k;
 if(n==0)
   return(s);
   else 
  k=n%10;
  s=s*10+k;
  return( rev (n/10));
  }
  
