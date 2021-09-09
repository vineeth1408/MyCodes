#include<stdio.h>
void swap(int *p,int *k)
{
	int temp;
	temp=*k;
	*k=*p;
	*p=temp;
}
void main()
{
	int i,min,j,a[10],n;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	min=i;
	for(j=i+1;j<n;j++)
	{
	if(a[min]>a[j])
		min=j;
	}
	swap(&a[min],&a[i]);
	}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
