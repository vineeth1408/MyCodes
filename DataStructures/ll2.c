#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct satck* push(struct node *head)
{
		
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	printf("error\n");
	else
	{	
		newnode->next=head;
		newnode->data=4;
		head=newnode;
	}
	printf("%d\n",newnode->data);
	printf("%d",newnode->next);
	return head;
}
void end(struct node *head)
{
	int ele;
	while(head->next!=NULL)
	{
		head=head->next;
	}
	printf("you are adding a new node\n enter data\n");
	scanf("%d",&ele);
	struct node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	n1->data=ele;
	n1->next=NULL;
}
int main()
{
	int op;
struct node *head=NULL;
struct node *second=NULL;
struct node *third=NULL;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=NULL;
printf("enter option\n");
scanf("%d",&op);
switch(op)
{
case 1:head=push(head);
break;
case 2:
       end(head);
	break;
}while(op!=2);}
