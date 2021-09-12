#include<stdio.h>
void main()
{
char a[100],b[100];
int i,n=0,j,c=0;
printf("Enter string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{};
printf("%d",i);
n=i;
for(i=0,j=n-1;i<n,j>=0;i++,j--)
{
 b[j]=a[i];
 }
 for(i=0;i<n;i++)
  {
   if(a[i]==b[i])
     c++;
     
     }
     if(c==n)
     printf("Palindrome\n");
     else
     printf("Not a palindrome\n");
     }
