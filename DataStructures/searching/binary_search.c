#include<stdio.h>
int main()
{
	int a[100],n,key,mid,start,end,k=0,i;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
  	
	scanf("%d",&a[i]);

	printf("Enter key\n");
	scanf("%d",&key);
	start=0;end=n-1;
	
	while(start<=end)
  	{
	     mid=(start+end)/2;  
        	if(a[mid]==key)
      		{
        		printf("Element found in %d index",mid);
       			 k=1;
        		break;
      		}   
       		else if(a[mid] > key)
      		{
        		start=mid+1;
        		end=end;
      		}
      		else 
     		{
      			end=mid-1;
      			start=start;
     		}
 	}
 if(k==0)
 printf("Element is not found\n");
 } 
