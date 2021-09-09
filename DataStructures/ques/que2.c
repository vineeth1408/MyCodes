 #include<stdio.h>
#include<stdlib.h>
int i;
int push(int [],int,int,int*);
int pop(int[],int*,int*);
void main()
{
	int que[100],element,n,first=-1,last=-1,op;
	printf("Enter size:\n");
	scanf("%d",&n);
	
do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
	
		case 1:	    push(que,n,element,&last);
				break;
				
		case 2:	    pop(que,&first,&last);
				break;	
				
		case 3:exit(1);
		default:printf("Enter valid address\n");
	}
	}while(op!=3);
}
int push(int que[],int n,int element,int *last)
{
	if((*last)==n-1)
	printf("que is fulled\n");
	else							
		{
			printf("Enter element to add\n");
			scanf("%d",&element);
			(*last)++;
			que[(*last)]=element;
		} 
}
int pop(int que[],int *first,int *last)
{
	 if((*first)==(*last))
	 printf("que is empty\n");
	 else
		{	 (*first)++;
			printf("removed:%d\n",que[*first]);
											
		}
}
