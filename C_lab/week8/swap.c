#include<stdio.h>
int swap(int,int );

void main()
{
  int a,b,temp;
  printf("Enter number to swap\n");
  scanf("%d%d",&a,&b);
  swap(a,b);
 
  
  }
  int swap(int a,int b)
    {
      int temp2;
        temp2=a;
        a=b;
        b=temp2;
       printf("%d%d",a,b);
  
     }
        
  
