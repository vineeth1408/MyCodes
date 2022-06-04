#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char a[5][10];
int low,mid,high,n,i;
char key[100];
printf("Enter number\n");
scanf("%d",&n);
printf("Enter names in ascending order\n");

for(i=0;i<n;i++)
scanf("%s",a[i]);

printf("Enter the name to be searched\n");
scanf("%s",key);
low=0;
high=n-1;
while(low<=high)
{
    mid=(low+high)/2;
    if(strcmp(a[mid],key)==0)
    {
   	 printf("element searched in %d position",mid+1);
   	 exit(0);
    }
    else if(strcmp(a[mid],key)>0)
    {
    	low=mid+1;
    	high=high;
    }
    else
    {
   	 low=low;
    	high=mid-1;
    }
}
    }
    
    
    
