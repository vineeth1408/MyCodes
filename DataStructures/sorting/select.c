#include<stdio.h>
void main()
{
int a[100],i,j,min,temp,n,loc;
printf("Enter size\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	min=a[i];
	for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
		}
			temp=min;
			a[loc]=a[i];
			a[i]=temp;	
}
for(i=0;i<n;i++)
printf("%d",a[i]);
}
