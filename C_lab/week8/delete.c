#include<stdio.h>
#include<string.h>
int del(char [],int,int);
int main()
{
char a[100];
int x,n,k,i;
printf("Enter string\n");
gets(a);
printf("Enter position\n");
scanf("%d",&n);
printf("Enter size to delete\n");
scanf("%d",&x);
k=del(a,n,x);
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
}
int del(char a[],int n,int x)
{
int i;
for(i=n;i<strlen(a);i++)
  {
        a[i]=a[i+x];
        }
     return(strlen(a));
     }
        
