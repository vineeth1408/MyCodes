#include<stdio.h>
#include<stdlib.h>
int stack[100];
int n=10,i,element,op;
int topB=5,topA=-1;
void pushA( )
{	
	if(topA==n/2-1)
	  printf("stackA is full\n");
	 else
	 {
	 	printf("enter element to push in A\n");
		scanf("%d",&element);
	 	topA++;
	 	stack[topA]=element;
	 }
}
int popA()
{
	if(topA==-1)
	printf("stackA is empty\n");
	else
	{
	printf("removed from stackA:%d\n",stack[topA]);
	topA--;
	}
}
void displayA()
{
	if(topA==-1)
	printf("nothing to display in stack A\n");
	else
	{
		for(i=0;i<=topA;i++)
		printf("%d ",stack[i]);
		printf("\n");
	}
}
void pushB( )
{
	if(topB==n)
	printf("stackB is full\n");
	else
	{
		printf("enter element to push in B\n");
		scanf("%d",&element);
		topB++;
		stack[topB]=element;
	}
}
void popB()
{
	if(topB==n/2)
	printf("stack B is empty\n");
	else
	{
	printf("removed=%d\n",stack[topB]);
	topB--;	
	}
}
void displayB()
{
	if(topB==n/2)
	printf("nothing to dispaly\n");
	else
	{
		for(i=n/2+1;i<=topB;i++)
		printf("%d ",stack[i]);
		printf("\n");
	}	
}
void main()
{
	
	do{
		printf("1 :PUSH in A\n2 :POP in A\n3 :DISPLAY in A\n4 :PUSH in B\n5 :POP in B\n6 :DISPLAY in B\n7:EXIT\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:pushA();
			break;
			case 2:popA();
			break;
			case 3:displayA();
			break;
			case 4:pushB( );
			break;
			case 5:popB();
			break;
			case 6:displayB();
			break;
			default:printf("enter valid choice\n");

		}
		}while(op!=7);
		
}

