#include<stdio.h>
#include<stdlib.h>
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
	
		case 1:if(top==n)
				{
				printf("stack is fulled\n");
				}
				else
				{
				printf("Enter element to add\n");
				scanf("%d",&element);
				top++;
				stack[top]=element;
				}	
				break;
				
		case 2:{
				if(top==-1)
				printf("stack is empty\n");
				else
				{
				printf("removed:%d\n",stack[top]);
				top--;
				}
				}
				break;
		case 3:exit(1);
		default:printf("Enter valid address\n");
	}
	}while(op!=3);
}






