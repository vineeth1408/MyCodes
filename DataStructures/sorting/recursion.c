#include<stdio.h>
void bubble(int a[],int n)
{	
	 int i,temp;
	for(i=0;i<n-1;i++)
	{
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;	
	}	
	}
	return bubble(a,n-1);
}
void main()
{
	int a[100],i,n;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble(a,n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

