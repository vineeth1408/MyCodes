#include<stdio.h>
#include<stdlib.h>
struct stack 
{
	int arr[100];
	int n,element;
	int top;
};
void main()
{
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top = -1;
	int op;
	
	printf("enter  size:");
	scanf("%d",&s->n);
	do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:if((s->top)==(s->n)-1)
			printf("stack is fulled\n");
			else
			{
				printf("insert:\n");
				scanf("%d",&(s->element));
				(s->top)++;
				(s->arr)[s->top]=(s->element);
			}
		        break;
		case 2:if((s->top)==-1)
			printf("stack is empty\n");
			else
			{
				(s->top)--;
				printf("removed:%d\n",(s->arr)[(s->top)+1]);
			}
		
			   break;
		case 3:exit(0);
		default:
			 printf("enter valid number\n");
	}
  	}while(op!=3);
	
	
	
}
