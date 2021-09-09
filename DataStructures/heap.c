#include<stdio.h>
int n;
int max(int a,int b)
{
	return (a>b)?a:b;
}
void heapify(int a[],int n)
{
	int i,j,flag=1;
	while(flag)
	{	flag=0;
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
void insert(int a[],int ele)
{
	int i;
	n++;
	a[n]=ele;
	heapify(a,n);
	/*
	for(i=n;i>1;)
	{
		if(a[i]>a[i/2])
		{
			a[i]=a[i]+a[i/2]-(a[i/2]=a[i]);
			i=i/2;
			
		}
		else
		break;
	}*/
	for(i=1;i<=n;i++)
	printf("after insertion=%d\n",a[i]);
}
void heap(int a[],int k)
{	
	int i,flag;
	if(k>=1)
	{
		for(i=1;i<=k;i++)
			{
				if( 2*i <=k && 2*i+1 <= k)
				{
					if(a[i] > a[2*i] && a[i] > a[2*i+1])
					{
					 	flag=0;             
					}
					else
					{
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
				else if(a[i] > a[2*i])
				{		
					break;
					
				}	
				else	
				{
					a[i]=a[i]+a[2*i]-(a[2*i]=a[i]);
					break;
				}
			}
	}
	else
	printf("no elements to heap\n");
}
void delete(int a[],int k)
{	
	
	a[1]=a[1]+a[k]-(a[k]=a[1]);
	printf("removed=%d\n",a[k]);
	k--;
	heap(a,k);
}
void heap_sort(int a[])
{
	int m;
	for(;m>0;m--)
	{
		printf("Hello\n");
		delete(a,m);
	}
}
void main()
{
	int a[100],i,j,m,op,ele,n;
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	
	
	do{
		printf("1 heapify\n2 insert\n3 delete\n4 heap-sort\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:heapify(a,n);
				for(i=1;i<=n;i++)
				printf("after heapify=%d\n",a[i]);
	
			break;
			case 2:	printf("enter element to insert\n");
				scanf("%d",&ele);
				insert(a,ele);
			break;
			case 3:
				delete(a, n);
			break;
			case 4:heap_sort(a);
				for(i=1;i<=n;i++)
				printf("%d",a[i]);
			break;
		}
	}while(op!=5);
}
