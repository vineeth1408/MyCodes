#include<stdio.h>
void main()
{
int i,j,n,k,num1,num2,c;
scanf("%d%d",&num1,&num2);
for(i=num1+1;i<num2;i++)
   
    { c=0;
     for(j=2;j<i;j++)
       {
        if(i%j==0)
         c++;
       }
    
    if(c==0)
      {
        printf("Prime %d\n",i);   
      }
    }   
    }
    
       
