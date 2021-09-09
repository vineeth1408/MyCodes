#include<stdio.h>
#include<stdlib.h>
#define maxsize	10
#include<stdbool.h>
bool isempty(){
   return itemcount == 0;
}

bool isfull(){
   return itemcount == MAX;
}
void main()
{
	int a[100];
	int itemcount=0,n,i,op,element;
	printf("enter size\n");
	
	scanf("%d",&n);
	max=n;
	do{
		printf("1 enque\n2 deque\n3 display\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("enter element\n");
				scanf("%d",&element);
				if(isfull())
				{
				
					if(itemcount==0)
					a[itemcount++]=element;
				}
				else
				{
					for(i=itemcount-1;i>=0;i--)
					{
						if( element > a[i])
						{
							a[i+1]=a[i];
							
						}
						else
						break;
					}
					a[i+1]=element;
					itemcount++;
				}
			break;
			case 2:if(isempty())
				printf("empty\n");
				else
				{
					printf("removed=%d",a[itemcount]);
					a[--itemcount];
				}
			break;
			case 3:for(i=0;i<=itemcount;i++)
				printf("%d",a[i]);
			break;
		}
	}while(op!=4);
}
