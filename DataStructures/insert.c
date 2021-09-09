#include <stdio.h>
void main()
{
	int arr[20],a[20],i, j, n,itemcount = 0,data;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		data=arr[i];
	if(itemcount == 0)
	{
		a[i++] = data;
		itemcount++;
		
	}
	for(i = itemcount-1; i >= 0; i--)
	{
		if(data > a[i])
		{
			a[i+1] = a[i];
		}
		else
		{
			break;
		}
	}
	a[i+1] = data;
	itemcount++;
}
for(i=0;i<n;i++)
printf("%d",arr[i]);
}

