#include<stdio.h>
int max(int a,int b)
{
	return (a>b)?a:b;
}
int heapify(int a[],int n)
{
	int i,j,flag=1;
	while(flag)
	{	
	flag=0;
		for(i=1;2*i<=n;i++)
		{
			if(2*i+1 > n)
			{
				if(a[i] < a[2*i])
				{
					a[i]=a[i]+a[2*i]-(a[2*i]=a[i]);
					flag=1;
				}
			}
			else if(a[i] < a[2*i] || a[i] < a[2*i+1])
			{	
				flag=1;
				if(max(a[2*i],a[(2*i)+1])==a[2*i])
				{
					a[i]=a[i]+a[2*i]-(a[2*i]=a[i]);
				}
				else
				{
					a[i]=a[i]+a[2*i+1]-(a[2*i+1]=a[i]);
				}
			}
		}
	}
}
void heapsort(int a[],int n)
{	
	int i=n;
	for(i;i>0;i--)
	{
		heapify(a,i);
		a[1]+=a[i]-(a[i]=a[1]);
	}
}
void main()
{
	int a[100],i,op,ele,n;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	printf("enter %d element\n",i);
		scanf("%d",&a[i]);
	}
	heapsort(a,n);
	for(i=1;i<=n;i++)
	printf("%d\n",a[i]);
}
