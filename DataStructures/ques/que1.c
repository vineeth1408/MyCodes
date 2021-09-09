#include<stdio.h>
#include<stdlib.h>
int i;
void main()
{
	int que[100],element,n,first=-1,last=-1,op;
	printf("Enter size:\n");
	scanf("%d",&n);
	
do{
	printf("1 for inserting\n2 for removing\n3 for quitiing\n4 display\n");
	printf("\n");
	scanf("%d",&op);
	switch(op)
	{
	
		case 1:		if(last==n-1)				
				printf("que is fulled\n");
				
				else							
				{
					printf("Enter element to add\n");
					scanf("%d",&element);
					last++;
					que[last]=element;
				} 
				break;
				
		case 2:
				
				 if(first==last)
				printf("que is empty\n");
				else
				{	
					first++;
					printf("removed:%d\n",que[first]);
					
					
				}
				break;
		case 3:exit(1);
		case 4:for(i=first;i<last;i++)
			printf("%d ",que[i]);
			break;
		default:printf("Enter valid address\n");
	}
	}while(op!=3);
}





