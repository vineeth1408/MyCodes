#include<stdio.h>
#include<stdlib.h>
struct que
{
	int a[100];
	int r,f,n;
};
void enque(struct que *s)
{
		int element;
		if(s->r==s->n-1 || s->f==s->r+1)
		printf("que is full\n");
		else if(s->f==-1&&s->r==-1)
		{
			s->f=0;
			s->r=0;
			printf("Enter element\n");
			scanf("%d",&element);
			s->a[s->r]=element;
		}
		else if(s->r==s->n-1)
		{
			s->r=0;
			printf("Enter element\n");
			scanf("%d",&element);
			s->a[s->r]=element;
		}
		else
		{	
			printf("Enter element\n");
			scanf("%d",&element);
			s->r++;
			s->a[s->r]=element;	
		}
}
void deque(struct que *s)
{	
	if(s->f==-1 && s->r==-1)
	printf("que is empty\n");
	else if(s->f==s->r)
	{
		printf("removed=%d\n",s->a[s->f]);
		s->f=-1;
		s->r=-1;
	}
	else if(s->f==s->n-1)
	{
		printf("removed %d\n",s->a[s->f]);
		s->f=0;
	}
	else
	{
		printf("removed=%d\n",s->a[s->f]);
		s->f++;
	}
}
void display(struct que *s)
{	int i;
		if(s->f==-1 && s->r==-1)
		printf("no\n");
		else
		{
			for(i=s->f;i<=s->r;i++)
			{
				printf("%d ",s->a[i]);
			}
			printf("\n");
		}
}
void main()
{
	struct que *s;
	s=(struct que*)malloc(sizeof(struct que));
	s->r=-1;
	s->f=-1;
	int op;
	printf("enter size\n");
	scanf("%d",&s->n);
	do
	{
		printf("Enter option\n1 enque\n2 deque\n3 display\n4 exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enque(s);
			break;
			case 2:deque(s);
			break;
			case 3:display(s);
			break;
			default:printf("Enter valid choice\n");
		}
	}while(op!=4);
}
