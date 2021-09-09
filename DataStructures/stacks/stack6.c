#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int stack[100];
	int top,n,element;
};

void push(struct stack*);
void pop(struct stack*);

void main()
{	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	
	int op;
	printf("Enter size:\n");
	scanf("%d",&s->n);
	s->top=-1;
	do{	
		printf("1 for inserting:\n2 for removing:\n3 for quitting:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push(s);
			      break;
			case 2:pop(s);
			      break;
			case 3:exit(0);
			default:printf("Enter valid address\n");
		}
	}while(op!=3);
}
void push(struct stack *s)
{
	if(s->top==(s->n)-1)
	printf("stack is fulled\n");
	else
	{
		printf("insert:\n");
		scanf("%d",&s->element);
		s->top++;
	        s->stack[s->top]=s->element;
	}
	
}
void pop(struct stack *s)
{
	if(s->top==-1)
	printf("stack is empty\n");
	else
	{
		printf("removed:%d\n",s->stack[s->top]);
		s->top--;		
	}
	
}
