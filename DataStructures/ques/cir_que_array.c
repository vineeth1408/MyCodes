#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a;
	int f=-1,r=-1,n,i;
	printf("enter size\n");
	scanf("%d",&n);
	int ele,op;
	a=(int*)malloc(sizeof(int)*n);
	while(1)
	{
		printf("1 enque\n2 deque\n3 display\n4 exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("enter element\n");
				scanf("%d",&ele);
				if(r==n-1 || f==r+1)
				printf("que is full\n");
				else if(f==-1 && r==-1)
				{
					r=0;f=0;
					a[r]=ele;
				}
				else if(r==n-1)
				{	
					r=0;
					a[r]=ele;
				}
				else
				{
					r++;
					a[r]=ele;
				}
			break;
			case 2:if(f==-1 && r==-1)
				printf("que is empty\n");
				else if(f==r)
				{
					printf("removed=%d",a[f]);
					f=-1;
					r=-1;
				}
				else if(f==n-1)
				{	
					printf("removed=%d",a[f]);
					f=0;
				}
				else
				{	
					printf("removed=%d",a[f]);
					f++;
				}
			break;
			case 3:if(f>r)
					{
						for(i=f+1;i<n;i++)
						printf("%d\t",a[i]);
						for(i=0;i<=r;i++)
						printf("%d\t",a[i]);
					}
					else if(f<r)
					{
						for(i=f;i<=r;i++)
						printf("%d",a[i]);
					}
			}
	}
	
}
