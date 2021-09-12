//sub string add in main string.....
#include<stdio.h>
#include<string.h>
 void sub(char [],char [],int);
 int main()
 {
   char a[100],b[100];
   int s,d,x;
   printf("Enter string\n");
   gets(a);
   
printf("Enter sub string to add\n");
   gets(b);
   
   printf("Enter position\n");
     scanf("%d",&x);
   sub(a,b,x); 
   }
   
 void sub(char a[],char b[],int m)
 {
    int k=0,i,x,s=strlen(b),z=strlen(a),y;	
    char o[100];
  for(i=0;i<s+z;i++)
  {
     if(i<m)
     {
       o[i]=a[i];
     } 
     else if (i>=m&&i<m+s)
     {  o[i]=b[k];
          k++; 
     }
       else if(i>=m+s)
     {
        o[i]=a[i-s];
     }
    
  }
     y=strlen(o);
     for(i=0;i<y;i++)
     printf("%c",o[i]);
  }
   
