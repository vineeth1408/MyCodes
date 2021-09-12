#include<stdio.h>
void main()
{
char a[100];
int i=0,c=0,x=0,j,z=0,l;
printf("Enter string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
 for(l=0;l<(i+1)/2;l++)
      {  
       
          
           if(a[l]!=a[i-l-1])              
                c++; 
      }
     if(c==0)
     printf("Palindrome\n");   
     else 
     printf("not a palindrome\n");
     }
     
     
     
     

