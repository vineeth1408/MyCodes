#include<stdio.h>
#include<string.h>
void str(char[],char[],int,int,int);
void main()
{
  char a[100],b[100];
  int s,k;
  int x;
  printf("Enter string 1\n");
  gets(a);
  printf("Enter sub string\n");
  gets(b);
  k=strlen(a);
  s=strlen(b);
  printf("Enter position\n");
  scanf("%d",&x);
  str(a,b,x,s,k);
  }
void str(char a[],char b[],int x,int s,int k)
  {
 int j=0,i;
  char c[100];
  for(i=0;i<x-1;i++)
      {
          c[j]=a[i];
          j++;
      }
   for(i=0;i<s;i++)
      {
             c[j]=b[i];
             j++;
      }
      for(i=x-1;i<k;i++)
        {
                    c[j]=a[i];
                    j++;
         }
         for(i=0;i<s+k;i++)
           {
            printf("%c",c[i]);
            }
            } 
    
  
