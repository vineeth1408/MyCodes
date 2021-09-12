#include<stdio.h>
#include<math.h>
int rev(int,int);
int sum=0,c=0;
int main()
{
 int n,i,s,l;
 printf("Enter number\n");
 scanf("%d",&n);
 s=n;
 for(i=0;s!=0;i++)
   {
     s=s/10;
     c++;
     }
     printf("%d ",c);
 l=rev(n,c);
 printf("%d",l);
 
 }
 int rev(int n,int c)
 {
   int k;
   if(n==0)
     return sum;
     else
     {
     k=n%10;
   sum=sum+(k*pow(10,c-1));
    return (rev(n/10,c-1));   
    }
    }
     
