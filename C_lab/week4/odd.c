#include<stdio.h>
void main()
{
int i,odd=0,even=0,c=1,j,l;
for (i=0;c<=101;i++)
{     
  if(i%2==0)
 {
    c++;
       even=even+i;    
  }
       } printf("even sum=%d\n",even);
         j=1;
         l=0;
      while(l<100)   
      {
       odd=odd+j;
        j=j+2;
     l++;
         }
         printf("odd sum=%d",odd);
           }
  
  
  
  

