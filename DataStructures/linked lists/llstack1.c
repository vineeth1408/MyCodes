 #include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	int top;
	struct node *next;
};
struct node* push(struct node*);
struct node* pop(struct node*,int *,char *);
void display(struct node*);
void main()
{
	struct node *head=NULL;
	int op;
	int k;
	char ch;
	do{
	printf("1 for push\n2 for pop\n3 for display\n4 fro exit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:head=push(head);
		break;
		case 2:head=pop(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 3:display(head);
		break;
	}

	}while(op!=4);
}
struct node* push(struct node*head)
{
	struct node *newnode,*temp;
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in newnode\n");	
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
	else
	{
		newnode->next=temp;
		head=newnode;
	}
	return head;
}
struct node *pop(struct node *head,int *k,char *ch)
{
	struct node *temp;
	temp=head;
	if(head==NULL)
		{
			printf("STACK IS EMPTY\n");
			*ch='n';
		}
	else
		{
			*ch='y';
			*k=temp->data;
			head=temp->next;
		}
	
	return head;
}
		
void display(struct node *head)
{
	struct node*temp;
	temp=head;
	if(head==NULL)
	printf("nothing to display\n");
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
		printf("\n");
	}
}
