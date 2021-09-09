#include<stdio.h>
#include<stdlib.h>
int i;
struct que s;
struct que
{
	int que[100];
	int r,n,element,f;
};
int isfull()
{
	if(s.r==s.n-1)
	return 1;
	else
	return 0;

}
int isempty()
{
	if(s.f==s.r)
	return 1;
	else
	return 0;
}
void push(struct que*);
void pop(struct que*);

void main()
{		
	int op;
	printf("Enter size:\n");
	scanf("%d",&s.n);
	s.f=-1;
	s.r=-1;
	do{	
		printf("1 for inserting:\n2 for removing:\n3 for quitting:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: if(isfull())
				printf("que is full\n");
				else
				push(&s);
			        break;
			case 2: if(isempty())
				printf("que is empty\n");
				else
			        pop(&s);
			        break;
			case 3:exit(0);
			default:printf("Enter valid address\n");
		}
	}while(op!=3);
}
void push(struct que *s)
{
	
	{
		printf("insert:\n");
		scanf("%d",&s->element);
		s->r++;
	        s->que[s->r]=s->element;
	}
	
}
void pop(struct que *s)
{	

	printf("removed:%d\n",s->que[0]);
	for(i=0;i<s->r;i++)
	{
		s->que[i]=s->que[i+1];
	}
	(s->r)--;

	
}
