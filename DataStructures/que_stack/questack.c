//one stack with two pointers
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int a[100],n,top;
}*s1,*s2;
void push(struct stack*,int);
void pop(struct stack*);
void main()
{	
	int op,ele;
	s1=(struct stack*)malloc(sizeof(struct stack));
	s2=(struct stack*)malloc(sizeof(struct stack));
	s1->top=-1;
	s2->top=-1;
	
	printf("Enter size:\n");
	scanf("%d",&s2->n);
	int k=s2->n;
	s1->n=s2->n=k-1;
	do{
		printf("1 Push\n2 Pop\n3 Exit\n4 dispaly\n");
		printf("\n");
		scanf("%d",&op);
	switch(op)
	{
		case 1:	while(s2->top!=-1)
			{
				pop(s2);
				push(s1,s2->a[(s2->top)+1]);
			}
			if(s1->top==s1->n)
			{
				printf("que is full\n");

			}
			else
			{
				printf("enter the elements\n");
				scanf("%d",&ele);
				push(s1,ele);
			}
			break;
		case 2:	while(s1->top!=-1)
			{
				pop(s1);
				push(s2,s1->a[(s1->top)+1]);
			}
			if(s2->top==-1)
			{
				printf("que is empty\n");
			}
			else
			{
				pop(s2);
				printf("remove:%d\n",s2->a[(s2->top)+1]);				
			}
			break;
		case 3:	exit(0);
			break;
		case 4: if(s2->top==-1)
			{
				for(int i=0;i<=s1->top;i++)
				printf("%d",s1->a[i]);
			}
			else
			{
				for(int i=s2->top;i>=0;i--)
				printf("%d",s2->a[i]);
			}
			
		break;
		default:printf("enter the valid one\n");
		}
	}while(op!=3);
}
void push(struct stack *s1,int ele)
{
	s1->top++;
	s1->a[s1->top]=ele;
}
void pop(struct stack *s2)
{
	s2->top--;
}
				













