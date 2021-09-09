#include<stdio.h>
#include<time.h>
void main()
{
int a[100000],n,i,j,temp;
float t;
	printf("Enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand();
	t=clock();
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
	t=(clock()-t)/CLOCKS_PER_SEC;
	printf("time=%f\n",t);
for(i=0;i<n;i++)
printf("%d",a[i]);
}
