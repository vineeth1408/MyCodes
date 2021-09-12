#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j,n,k=0,l=0,x,c=0;
gets(a);
j=strlen(a);
for(i=j-1;i>=0;i--)
  {
       b[k]=a[i];
       k++;
   }
   x=strcmp(a,b);
   if(x==0)
   printf("palindrome\n");
   else
   printf("not a palindrome\n");
   }
   
