#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* insert(struct node* head)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("enter value\n");
	scanf("%d",&newnode->data); 
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node * temp =head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next = newnode;
	}
	return head;
}
void display(struct node *head)
{	
	struct node *temp=head;
	if(temp==NULL)
	printf("NULL\n");
	else
	{
		
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void middle(struct node *head)
{
	struct node *slow=head;
	struct node *fast=head;
	if(head!=NULL)
	{
		while(fast->next!=NULL && fast!=NULL)
		{
			fast=fast->next->next;
			slow=slow->next;		
		}
		printf("%d\n",slow->data);
	}
}
struct node *deletefirst(struct node *head)
{
	if(head==NULL)
	printf("Nothing to delete\n");
	else
	{
		struct node *temp=head;
		
	}
}
void main()
{	
	int option;
	struct node *head=NULL;
	struct node *temp=head;
	while(1)
	{	
		printf("1 INPUT\t2 DISPLAY\t3 COUNT\t4 MIDDLE ELEMENT\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:head = insert(head);
				break;
			case 2: temp=head;
				display(temp);
				break;
			case 3:
				break;
			case 4: middle(head);
				break;
			case 5:head=deletefirst(head);
				break;
		}
	}
}
