#include<stdio.h>
void main()
{
 int a[100],i,j,k,n,temp;
 int *p,sum=0;
  p=a;
  printf("Enter size\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    scanf("%d",(a+i));
 
   }
   for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
       {
        if(*(p+i)>*(p+j))
          {
           temp=*(p+i);
           *(p+i)=*(p+j);
           *(p+j)=temp;
          }
         
       }
    }
         for(i=0;i<n;i++)
         {
          printf("%d ",*(p+i));
          sum=sum+*(p+i);
          }
          printf("%d\n",sum);
          }
