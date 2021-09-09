#include<stdio.h>

void linearsearch(int[],int,int);
 int main()
{
    int a[10],n,key,i;
    printf("Enter size\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     }
     printf("Enter key\n");
     scanf("%d",&key);
    linearsearch(a,n,key);
}
  void linearsearch(int b[],int m,int k)
  {
  int i;
  for(i=0;i<m;i++)
   {
	   if(b[i]==k)
	   {
		   printf("key is founded in %d index\n",i);
		   break;
	   }
   }
 
 if(i==m)
 printf("Element is not found\n");
 }
      
     
     
     
