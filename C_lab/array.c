#include<stdio.h>
void main()
{
int i,j=0,n1,n2,k,a[10],b[10],c[10];
printf("enter size\n");
scanf("%d",&n1);
for(i=0;i<n1;i++,j++)
  {
  scanf("%d",&a[i]);
    c[j]=a[i];  
   }
   printf("Enter number\n");
   scanf("%d",&n2);
    for(i=0;i<n2;i++,j++)
    {
    scanf("%d",&b[i]);
    c[j]=b[i];
    }
    for(j=0;j<n1+n2;j++)
    
     printf("%d ",c[j]);
     }
