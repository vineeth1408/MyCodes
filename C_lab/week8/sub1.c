#include<stdio.h>
void sub(char[],char[],int,int,int);

int main()
{
int m,n,position;
char a[100],b[100];
printf("Enter string 1\n");
gets(a);
for(m=0;a[m]!='\0';m++);
printf("Enter string 2\n");
gets(b);
for(n=0;b[n]!='\0';n++);
printf("Enter position\n");
scanf("%d",&position);
sub(a,b,m,n,position);
}
void sub(char a[],char b[],int m,int n, int position)
{
   int i;
   for(i=m-1;i>=position;i--)
   {
    a[i+n]=a[i];
    }
    for(i=0;i<n;i++)
    {
         a[i+position]=b[i];
     }
     for(i=0;i<m+n;i++)
     {
      printf("%c",a[i]);
      }
}  
