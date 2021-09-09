#include<stdio.h>
#include<stdlib.h>
struct node
{	
	struct node *prev;
	int ele;
	struct node *next;
};
void insert(struct node**);
void display(struct node**);
void add_begin(struct node**);
void  add_last(struct node**);
void  add_middle(struct node**);
void find(struct node**);
void count(struct node**);
void delete_first(struct node**,int*,char*);
void delete_last(struct node**,int*,char*);
void delete_middle(struct node**,int*,char*);
void main()
{
	struct node *head=NULL;
	int op,k;
	char ch;
	do
	{
		printf("choose option\n1:-INSERT\n2:-DISPLAY\n3:-ADD BEGIN\n4:-ADD LAST\n5:-ADD MIDDLE\n6:-SEARCH\n7:-NO.OF NODES\n8:-DELETE FIRST\n9:-DELETE LAST\n10:-DELETE MIDDLE\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insert(&head);
			break;
			case 2:display(&head);
			break;
			case 3:add_begin(&head);
			break;
			case 4:add_last(&head);
			break;
			case 5:add_middle(&head);
			break;
			case 6:find(&head);
			break;
			case 7:count(&head);
			break;
			case 8:delete_first(&head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);
			break;
			case 9:delete_last(&head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);	
			break;
			case 10:delete_middle(&head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);
			break;
		}
	}while(op!=11);
}
void insert(struct node **head)
{
	struct node *temp,*newnode;	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->prev=NULL;
	}
	else
	{
		temp=(*head);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		(temp->next)->prev=temp;
	}
}
void display(struct node **head)
{
	struct node *temp=(*head);
	if((*head)==NULL)
	printf("nothing to display\n");
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d->>",temp->ele);
			temp=temp->next;
		}
		printf("%d\n",temp->ele);
	}
}
void add_begin(struct node **head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->prev=NULL;
	}
	else
	{
		newnode->next=(*head);
		(*head)->prev=newnode;
		(*head)=newnode;
		(*head)->prev=NULL;
	}
}
void add_last(struct node **head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->prev=NULL;
	}
	else
	{
		temp=(*head);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		(temp->next)->prev=temp;
	}
}
void add_middle(struct node **head)
{	
	struct node *temp=(*head),*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	int position,flag=0;
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->prev=NULL;
	}
	else
	{	int m=1;
		printf("enter position to add\n");
		scanf("%d",&position);
		while(m<position)
		{
			m++;
			if(temp->next!=NULL)
			{
				temp=temp->next;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			newnode->next=temp->next;
			(temp->next)->prev=newnode;
			temp->next=newnode;
			newnode->prev=temp;
		}
		else
		printf("enter valid position\n");
	}
}
void find(struct node **head)
{
	struct node *temp=(*head);
	int k,l=0;
	if((*head)==NULL)
	printf("nothing to find\n\n");
	else
	{
		printf("enter the element you want to find\n");
		scanf("%d",&k);
		while(temp!=NULL)
		{
			if(temp->ele==k)
			{			
				l=1;
			}
			temp=temp->next;
		}
	if(l==1)
	printf("element found\n\n");
	else
	printf("not found\n\n");			
	}	
}
void count(struct node **head)
{	int c=0;
	if((*head)==NULL)
	printf("no nodes to count\n\n");
	else
	{
		while((*head)->next!=NULL)
		{
			(*head)=(*head)->next;
			c++;
		}
	printf("nodes=%d\n\n",c+1);
	}
}
void delete_first(struct node **head,int *k,char *ch)
{
	struct node *temp=(*head);
	if((*head)==NULL)
	{	*ch='n';
	printf("no nodes to delete\n\n");
	}
	else
	{	*ch='y';
		*k=temp->ele;
		(*head)=temp->next;
		
	}
}
void delete_last(struct node **head,int *k,char *ch)
{
	struct node *temp=(*head);
	if((*head)==NULL)
	{	*ch='n';
	printf("no nodes to delete\n\n");
	}
	else
	{		if(temp->next==NULL)
			{	*ch='n';
				printf("%d\n",temp->ele);
			}
			else
			{
			while((temp->next)->next!=NULL)
			{
				temp=temp->next;
			}
			*ch='y';
			*k=(temp->next)->ele;
			temp->next=NULL;
			}
	}
}
void delete_middle(struct node **head,int *k,char *ch)
{
	struct node *temp=(*head);
	int flag=0;
	if((*head)==NULL)
	{
		*ch='n';
	printf("no nodes to delete\n\n");
	}
	else
	{
		int position,m=1;
		printf("enter position\n");
		scanf("%d",&position);
		while(m<position)
		{	m++;
			if(temp->next!=NULL)
			{	temp=temp->next;
			}
			else
			{
				flag=1;
				break;
			}
		}
	if(flag==0)
	{	*ch='y';
		*k=(temp->next)->ele;
		temp->next=(temp->next)->next;
		(temp->next)->prev=temp;
	}
	else
	printf("not possible to delete\n");
	}
}
