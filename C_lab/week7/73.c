#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,c=0,k=0,l=0,f,s,o;
printf("Enter string\n");
gets(a);
f=strlen(a);
for(i=0;i<=f;i++)
   {
       
     if(a[i]==' ')||a[i]==','||a[i]=='.')
      { k++;
      }
      if(a[i]=='.')
      { 
      l++;
      }
      if(a[i]>=65&&a[i]<=122)
      s++;
     // else if(a[i]==a[i])
      //o++;
   }
   printf("No.of characters=%d\nNo.of words=%d\nNo.of lines=%d\n",s,k,l);
   //printf("%d",o);
   }
   
   
   
   
   
   
   
   
