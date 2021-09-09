#include<stdio.h>
#include<stdlib.h>
int push(int [],int,int,int*);
void pop(int[],int*);
void main()
{
	int stack[100],element,n,top=-1,op;
	printf("Enter size:\n");
	scanf("%d",&n);
	
do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		       
			   push(stack,n,element,&top);
			   break;
		case 2:
			   pop(stack,&top);
			   break;
		case 3:exit(0);
		default:
			    printf("enter valid number\n");
	}
  }while(op!=3);
}
int push(int stack[],int n,int element,int *top)
	{
		if((*top)==n-1)
		printf("stack is fulled\n");
		else
		{
		printf("insert:\n");
		scanf("%d",&element);
		(*top)++;
		stack[(*top)]=element;
		}
	}
void pop(int stack[],int *top)
	{
	if((*top)==-1)
	printf("stack is empty\n");
	else
	{   
	    (*top)--;
		printf("removed:%d\n",stack[(*top)+1]);
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	
