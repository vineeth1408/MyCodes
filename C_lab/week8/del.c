#include<stdio.h>
char del(char [],int,int);
int main()
{
 char a[100];
 int n,x;
 printf("Enter string\n");
 gets(a);
 printf("Enter position\n");
 scanf("%d",&n);
 printf("Enter size to delete\n");
 scanf("%d",&x);
 del(a,n,x);
 }
 char del(char a[],int n,int x)
 {
 char b[100];
 int c=0,i,l=0;
   for(i=0;a[i]!='\0';i++)
       {
         if(i!=n)
           {
             b[l]=a[i];
             l++;
            }
            if(i==n)
             {
              i=i+x-1;
              }
       }
       for(i=0;i<l;i++)
         printf("%c ",b[i]);
         }
            
 
  
