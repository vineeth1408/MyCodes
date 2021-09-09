#include<stdio.h>

void main()
{
char a[100];
int i,j;
char temp;
printf("Enter names\n");
gets(a);

 for(i=0;a[i]!='\0';i++)
    {
     for(j=i+1;a[j]!='\0';j++)
       {
         if(a[i]>a[j])
           {
            temp=a[i];
            a[i]=a[j];
             a[j]=temp;
            }
          }
        }
           for(i=0;a[i]!='\0';i++)
            printf("%c",a[i]);
            }  
           
         
   
