#include<stdio.h>
#include<stdlib.h>
int i;
void main()
{
int a[10],n,top=-1,element,op,k=0,max,min;
printf("Enter size:\n");
scanf("%d",&n);
while(op<4)
{
printf("1 for push \n2 for pop \n3 for reverse \n4 for quit\n");
scanf("%d",&op);
switch(op)
{
	case 1:if(top==n-1)
		printf("stack is full\n");
		else
		{	top++;
			printf("insert:\n");
			scanf("%d",&element);
			a[top]=element;
		}
		break;
	case 2:if(top==-1)
		printf("stack is empty\n");
		else
		{
			top--;
			printf("%d",a[top+1]);
		}
		break;
	case 3:if(top==-1)
		printf("nothing to reverse\n");
		else
		{
			for(i=top;i>=0;i--)
			{
				printf("%d\t",a[i]);
			}
			printf("\n");
		}
		break;
	case 4:if(top==-1)
		printf("unable to find max number\n");
		else
		{	
			max=a[0];
			min=a[0];
			for(i=0;i<=top;i++)
			 {
			 	if(a[i]>max)
			 	{
			 	max=a[i];
			 	}
			 	if(a[i]<min)
			 	{
			 	min=a[i];
			 	}
			 }
			 printf("%d %d\n",max,min);
		}
			 		 
}}}
