#include<stdio.h>
int b_search(int a[],int low,int high,int key)
{
	if(high>=low)
	{
	int mid=(low +high)/2;
	if(a[mid]==key)
	return mid;
	else if(a[mid] < key)
	return b_search(a,low,mid-1,key);

	return b_search(a,mid+1,high,key);
	

	}
return -1;

}
void main()
{
	int a[100],i,j,n,key,k;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter key to search\n");
	scanf("%d",&key);
	k=b_search(a,0,n-1,key);
	(k==-1)?printf("not present"):printf(" present");
}
