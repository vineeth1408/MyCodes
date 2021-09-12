#include<stdio.h>
#include<string.h>
void sub(char [],char [],int);
void main()
{
int x;
  char a[100],b[100];
  printf("Enter string\n");
  gets(a);
  printf("ENter sub string\n");
  gets(b);
  printf("Enter position to add\n");
  scanf("%d",&x);
  sub(a,b,x);
}
void sub(char a[],char b[],int x)
{
 int i;
 for(i=0;a[i]!='\0';i++)
     {
       if(i==x)
       {
       printf ("%s",b);
       }
     printf ("%c",a[i]);
     }
}  
        
