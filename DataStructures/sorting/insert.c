#include<stdio.h>
void main()
{
int a[100],n,i,j,temp;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(a[j]<a[j-1])
				{
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				}
			else
			break;
		}
	}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
