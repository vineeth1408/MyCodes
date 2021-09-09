
#include<stdio.h>
#include<time.h>
void quick(int [],int,int);
void main()
{
	float t;
 int a[100000],i,j,n;
 srand(time(0));
	printf("enter size\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);

	
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void quick(int a[],int start,int end)
{
int pivot,i,j,temp;
pivot=start;
i=start+1;
j=end;
if(start<=end)
{
	while(i<j)
	{
	
	while(a[i]<=a[pivot] && i<=end)
	i++;
	while(a[j]>a[pivot] && j>=start)
	j--;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	temp=a[j];
	a[j]=a[pivot];
	a[pivot]=temp;
	}	
	quick(a,start,j-1);
	quick(a,j+1,end);

}}
	
	


