#include<stdio.h>
#include<stdlib.h>
struct stack 
{
	int arr[100];
	int n,element;
	int top;
};
struct stack push(struct stack);
struct stack pop(struct stack);
void main()
{
	struct stack s;
	s.top = -1;
	int op;
	
	printf("enter  size:\n");
	scanf("%d",&s.n);
	do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:s=push(s);
		        break;
		case 2:s=pop(s);
			break;
		case 3:exit(0);
		default:
			 printf("enter valid number\n");
	}
  	}while(op!=3);
}
struct stack push(struct stack s)
{
	if((s.top)==(s.n)-1)
	printf("stack is filled\n");
	else
	{
		printf("insert:\n");
		scanf("%d",&s.element);
		(s.top)++;
		(s.arr)[s.top]=s.element;
	}
	return s;
}
struct stack pop(struct stack s)
{
	if(s.top==-1)
	printf("stack is empty\n");
	else
	{ 	(s.top)--;
		printf("removed:%d\n",s.arr[(s.top)+1]);
	}
	return s;
}

