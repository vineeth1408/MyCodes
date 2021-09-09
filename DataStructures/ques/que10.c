#include<stdio.h>
#include<stdlib.h>
int i;
struct que 
{
	int arr[100];
	int n,element;
	int first,last;
};
void main()
{
	struct que s;
	s.first = -1;
	s.last=-1;
	int op;
	
	printf("enter  size:");
	scanf("%d",&s.n);
	do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:if(s.last==s.n-1)
			printf("que is fulled\n");
			else
			{
				printf("insert:\n");
				scanf("%d",&s.element);
				s.last++;
				s.arr[s.last]=s.element;
			}
		        break;
		case 2:if(s.first==s.last)
			printf("que is empty\n");
			else
			{
				
				printf("removed:%d\n",s.arr[0]);
				for(i=0;i<s.last;i++)
				{
					s.arr[i]=s.arr[i+1];
				}
				(s.last)--;
			}
		
			   break;
		case 3:exit(0);
		default:
			 printf("enter valid number\n");
	}
  	}while(op!=3);
	
	
	
}
