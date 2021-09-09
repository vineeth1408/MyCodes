#include<stdio.h>
#include<stdlib.h>
struct que
{
	int a[100];
	int r,f,n;
};
struct que* enque(struct que *q)
{
	printf("enter elelemt\n");
	scanf("%d",&ele);
	if(q->r==-1)
	{
		q->r++;
		q->a[q->r]=ele;
	}
	else
	{
		for(int i=0;i<=q->r;i++ )
		{
			if(ele < q->a[i])
			{
				for(int j=q->r;j>=i;j--)
					{
						q->a[j]=q->a[j-1];
					}
				q->r++;
				q->a[i]=ele;
				break;
			}
		
			if(i==q->r)
			{	q->r++;
				q->a[q->r]=ele;
				break;
			}
		}
	}
	return q;
}
struct que* deque(struct que* q)
{
	int ele;
	printf("enter the element\n");
	scanf("%d",&ele);
	for(int i=0;i<=q->r;i++)
	{
		if(ele==q->a[i])
		{
			for(int j=q->r;j>=i;j--)
			{
				q->a[j-1]=q->a[j];
			}
			q->r--;
			break;
		}
	}
	return q;
}
void display(struct que *q)
{
	int i,n;
	for(i=0;i<=q->r;i++)
	printf("%d",q->a[i]);
}
void main()
{
	struct que *q;
	q=(struct que*)malloc(sizeof(struct que));
	q->f=-1;q->r=-1;
	int op;
	printf("enter size of the array\n");
	scanf("%d",&q->n);
	while(1)
	{
		printf("1 enque\n2 deque\n3 display\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:q=enque(q);
			break;
			case 2:q=deque(q);
			break;
			case 3:dsplay(q);
			break;
		}
	}
}
