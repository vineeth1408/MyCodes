#include<stdio.h>
void bubble(int a[],int n)
{	
	int temp,i,j;
	for(i = n - 1;i>=0;i--)
	{
		for(j=0;j<i;j++)
			{
				if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
	}
	

}

void main()
{
	int a[10],n,i;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	bubble(a,n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);	
}
