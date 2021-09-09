#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int stack[10];
	int top;
};
int i;
int pop(struct stack*);
int push(struct stack*,int);
void display(struct stack*);
void main()
{	
	int n,op;
	int k;
	struct stack *s1,*s2;
	s1=(struct stack*)malloc(sizeof(struct stack));
	s2=(struct stack*)malloc(sizeof(struct stack));
	s1->top=-1;
	s2->top=-1;
	
	printf("Enter size:\n");
	scanf("%d",&n);
	int element;
	do{
		printf("1 Push\n2 Pop\n3 for display\n4 Exit\n");
		scanf("%d",&op);
	switch(op)
	{
		case 1:while(s2->top!=-1)	//will work when contained
			{
				k=pop(s2);
				push(s1,k);
			}
			 if(s1->top==n-1)	
				printf("que is filled\n");
			else
			{
			
				printf("insert:\n");
				scanf("%d",&element);
				push(s1,element);
			}	
			break;
		case 2:while(s1->top!=-1)	//will work if contained
			{
				k=pop(s1);
				push(s2,k);
			}
			if(s2->top==-1)
				printf("que is empty\n");
			else
			{
			
				k=pop(s2);
				printf("removed:%d\n",k);
			}
			break;
		case 3:for(i=0;i<=s1->top;i++)
				printf("%d ",s1->stack[i]);
		break;
		case 4:exit(0);	
		default:printf("invalid option\n"); 
	}
	}while(op!=4);


}
int pop(struct stack *s2)
{
	        s2->top--;
	return ((s2->stack)[(s2->top)+1]);
	
}
int push(struct stack *s1,int k)
{
		(s1->top)++;
	    (s1->stack)[s1->top]=k;
			
}
			
			
			
			
			
			
			
	
