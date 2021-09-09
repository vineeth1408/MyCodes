#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
struct node* enque(struct node *);
void display(struct node *);
struct node* deque(struct node*,int *,char *);
void main()
{
	struct node*head=NULL;
	int op,k;
	char ch;
	do
	{
		printf("CHOOSE OPTION\n1 enque\n2 display\n3 deque\n4 exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:head=enque(head);
			break;
			case 2:display(head);
			break;
			case 3:head=deque(head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n",k);
			break;
			default:printf("Enter valid address\n");
		}
	}while(op!=4);
}
struct node* enque(struct node *head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int ele;
	printf("Enter data to store:\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)			//head initioa null so 
	{
		head=newnode;
		head->next=head;
	}
	else
	{	
		struct node *temp;
		temp=head;
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
	struct node*temp;
	temp=head;
	if(head==NULL)
	printf("nothing to dispaluy\n");
	else
	{
		while(temp->next!=head)
		{
			printf("%d->",temp->ele);
			temp=temp->next;
		}
		printf("%d",temp->ele);
		printf("\n");
	}
}
struct node* deque(struct node *head,int *k,char *ch)
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
	*ch='n';
	printf("que is empty\n");
	}
	else if(head->next==head)
	{	
		*k=head->ele;
		head=NULL;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		*ch='y';
		*k=head->ele;
		head=head->next;
		temp->next=head;
	}
return head;
}
