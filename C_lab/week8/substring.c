#include<stdio.h>
#include<string.h>
void sub(char[]);
 int main()
 {
   int i;
   char a[100];
   printf("Enter string\n");
   gets(a);
   sub(a);
   }
  void sub(char a[])
  {
   int i,k=0,l=0,x,j=0;
   char b[100],c[100];
   for(i=0;a[i]!='\0';i++)
      {
        k++;
      }
      printf("Enter sub string to add\n");
       scanf("%s",b);
       for(i=0;b[i]!='\0';i++)
       {
       j++;
       } 
      printf("Enter position\n");
      scanf("%d",&x);
      for(i=0;i<x;i++)
        {
          c[i]=a[i];
          }
          for(i=x;i<x+j;i++)
            {
                 c[i]=b[l];
                       l++;
             }
            for(i=x+j;i<k+j;i++)
                {
                      c[i]=a[x];
                            x++;
                }
                for(i=0;i<k+j;i++)
                  printf("%c",c[i]);
                  }
                 
      
         
