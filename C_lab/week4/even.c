#include<stdio.h>
void main()
{
int i,j,sum=0,C=1;
for (i=0;C<=100;i++)
{ 
   if (i%2==0)
  {
    C++;
   
  sum=sum+i;
  printf("%d+ ",i); 
   }
   }
printf("=%d\n",sum);

}
