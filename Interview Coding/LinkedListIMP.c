#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};

struct node* insert(struct node *head,int ele)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->ele=ele;
	newnode->next=NULL;
	if(head==NULL)			//head initioa null so 
	{
		head=newnode;
	}
	else
	{	
		struct node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	temp->next=newnode;	
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
		while(temp->next!=NULL)
		{
			printf("%d->",temp->ele);
			temp=temp->next;
		}
		printf("%d",temp->ele);
		printf("\n");
	}
}
struct node* InsertElementInSorted(struct node *head,int ele)
{	
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->ele=ele;
	if(head==NULL)
		return newnode;
	struct node *current=head,*temp;


	while(current !=NULL && current->ele < newnode->ele)
	{
		temp=current;
		current=current->next;
	}
	newnode->next=current;
	temp->next=newnode;
return head;
}
struct node* reverse(struct node *head)
{
	
}
void main()
{
	struct node *head=NULL;
	
	int op,ele,c;
	do{	
		printf("\n1:-ADD\n2:-DISPLAY\n3:-INSERT IN SORTED ARRAY\n4:- REVERSE\n");
		printf("\n");
			scanf("%d",&op);
	switch(op)
	{
		
		case 1:printf("enter element\n");
				scanf("%d",&ele);
				head=insert(head,ele);
		break;
		case 2:display(head);
		break;
		case 3:printf("enter element\n");
			scanf("%d",&ele);
			head=InsertElementInSorted(head,ele);
		break;
		case 4: head=reverse(head);
		break;
	}
}while(op!=23);
free(head);
}
