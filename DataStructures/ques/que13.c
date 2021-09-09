#include<stdio.h>
#include<stdlib.h>
int i;

struct que
{
	int que[100];
	int first,n,element,last;
};
void push(struct que*);
void pop(struct que*);
int isfull(struct que *s)
{
	if(s->last==s->n-1)
	return 1;
	else
	return 0;
	
}
int isempty(struct que *s)
{
	if(s->first==s->last)
	return 1;
	else
	return 0;
}
void main()
{	struct que *s;
	s=(struct que*)malloc(sizeof(struct que));
	
	int op;
	printf("Enter size:\n");
	scanf("%d",&s->n);
	s->first=-1;
	s->last=-1;
	do{	
		printf("1 for inserting:\n2 for removing:\n3 for quitting:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:if(isfull(s))
				printf("que is full\n");
				else
				push(s);
			      break;
			case 2:if(isempty(s))
				printf("que is empty\n");
				else
				pop(s);
			      break;
			case 3:exit(1);
			default:printf("Enter valid address\n");
		}
	}while(op!=3);
}
void push(struct que *s)
{
	{
		printf("insert:\n");
		scanf("%d",&(s->element));
		(s->last)++;
		s->que[(s->last)]=s->element;
	}	
}
void pop(struct que *s)
{
	{	
		printf("removed:%d\n",s->que[0]);
		for(i=0;i<s->last;i++)
		{
			s->que[i]=s->que[i+1];
		}
		(s->last)--;
		
	}
	
}
