#include<stdio.h>
#include<stdlib.h>
int i;
struct que 
{
	int arr[100];
	int n,element;
	int first,last;
};
struct que push(struct que);
struct que pop(struct que);
void main()
{
	struct que s;
	s.first = -1;
	s.last=-1;
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
struct que push(struct que s)
{
	if((s.last)==(s.n)-1)
	printf("que is filled\n");
	else
	{
		printf("insert:\n");
		scanf("%d",&s.element);
		(s.last)++;
		(s.arr)[s.last]=s.element;
	}
	return s;
}
struct que pop(struct que s)
{
	if(s.first==s.last)
	printf("que is empty\n");
	else
	{ 	s.first++;
		printf("removed:%d\n",s.arr[s.first]);
		
	}
	return s;
}

