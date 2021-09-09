#include<stdio.h>
void main()
{
	int a[100],n,i,j,temp,c=0;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{	c++;
				//temp=a[j];  //a=a+b-(b=a);
				a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);
				//a[j]=a[j+1];
				//a[j+1]=temp;
			}
		}
	}
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
printf("\n");
printf("%d\n",c);
}
	
