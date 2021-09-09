#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int stack[100];
	int top,n;
};
void push(struct node *s )
{	int element;
	printf("enter element\n");
	scanf("%d",&element);
	s->top++;
	s->stack[s->top]=element;
}
int pop(struct node *s)
{
	s->top--;
	return (s->stack[(s->top)+1]);
}
void find(struct node *s,int k)
{	int i;
	for(i=0;i<(s->n);i++)
		{
			if(k==i+1)
			{
				printf("element found\n");
				break;
			}
		}
}
void delete(struct node *s,int k,struct node *s1)
{	int i;
		
	
	
}
void main()
{
	struct stack *s,*s1;
	s=(struct stack *)malloc(sizeof(struct stack));
	s1=(struct stack *)malloc(sizeof(struct stack));
	s->top=-1;
	s1->top=-1;
	int op,k;
	printf("enter size\n");
	scanf("%d",&s->n);
	do{
		printf("1 push\n2 pop\n3 find middle\n4 delete middle\n");
		switch(op)
		{
			case 1:if(s->top==(s->n)-1)
				printf("stack is full\n");
				else
				{
					push(s);
				}
			break;
			case 2:if(s->top==-1)
				printf("stack is empty\n");
				else
				{	
					k=pop(s);
					printf("popped=%d\n",k);
				}
			break;
			case 3:if((s->n)%2==0)
				find(s,(s->n)/2);
				else
				printf("no middle element\n");
			break;
			case 4:if((s->n)%2==0)
				delete(s,(s->n)/2,s1);
				else
				printf("no middle element to delete\n");
			break;
			default:printf("enter valid address\n");
		}
	}while(op!=5);
}
