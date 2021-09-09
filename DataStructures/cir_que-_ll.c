#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node * next;	
};
struct node *enque(struct node *head,int ele)
{	
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	
	
	newnode->next=NULL;
	newnode->ele=ele;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
return head;
}
void display(struct node *head)
{
	struct node *temp=head;
	while(temp->next!=head)
	{
		printf("%d",temp->ele);
		temp=temp->next;
	}
	printf("%d",temp->ele);
}
void main()
{	
	int op,ele;
	struct node *head=NULL;
	while(1)
	{
		printf("enter 1 enque\n2 deque\n3 dispaly\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("enter element\n");
					scanf("%d",&ele);
					head=enque(head,ele);
				break;
			//case 2:head=deque(head);
			break;
			case 3:display(head);
			break;
		}
	}
}
