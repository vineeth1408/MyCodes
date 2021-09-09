#include<stdio.h>
#include<time.h>
void main()
{
	int a[100000],i,j,min,temp,n,loc;
	float t;
	printf("Enter size\n");
	scanf("%d",&n);
	srand(time(0));
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	t=clock();
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
	t=(clock()-t)/CLOCKS_PER_SEC;
	printf("time =%f\n",t);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
