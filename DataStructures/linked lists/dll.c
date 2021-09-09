#include<stdio.h>
#include<stdlib.h>
struct node
{	
	struct node *prev;
	int ele;
	struct node *next;
};
struct node* insert(struct node*);
void display(struct node*);
struct node* add_begin(struct node*);
struct node* add_last(struct node*);
struct node* add_middle(struct node*);
void find(struct node*);
void count(struct node*);
struct node* delete_first(struct node*,int*,char*);
struct node* delete_last(struct node*,int*,char*);
struct node* delete_middle(struct node*,int*,char*);
struct node* reverse(struct node*);
struct node* insert_sorted(struct node*);
struct node* swap(struct node*);
struct node* reverse1(struct node*);
int max(struct node*);
void bubble(struct node*);
void main()
{
	struct node *head=NULL;
	int op,k;
	char ch;
	do
	{
		printf("choose option\n1:-INSERT\n2:-DISPLAY\n3:-ADD BEGIN\n4:-ADD LAST\n5:-ADD MIDDLE\n6:-SEARCH\n7:-NO.OF NODES\n8:-DELETE FIRST\n9:-DELETE LAST\n10:-DELETE MIDDLE\n11:-REVERSE\n12:-INSERT SORTED\n13:-SWAP\n14:-REVERSE 1\n15:-MAX\n16:-BUBBLE\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:head=insert(head);
			break;
			case 2:display(head);
			break;
			case 3:head=add_begin(head);
			break;
			case 4:head=add_last(head);
			break;
			case 5:head=add_middle(head);
			break;
			case 6:find(head);
			break;
			case 7:count(head);
			break;
			case 8:head=delete_first(head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);
			break;
			case 9:head=delete_last(head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);	
			break;
			case 10:head=delete_middle(head,&k,&ch);
				if(ch=='y')
				printf("removed=%d\n\n",k);
			break;
			case 11:head=reverse(head);
			break;
			case 12:head=insert_sorted(head);
			break;
			case 13:head=swap(head);
			break;
			case 14:head=reverse1(head);
			break;
			case 15:max(head);
			break;
			case 16:bubble(head);
			break;
		}
	}while(op!=17);
}
struct node* insert(struct node *head)
{
	struct node *temp,*newnode;	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->prev=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
return head;
}
void display(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
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
struct node* add_begin(struct node *head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->prev=NULL;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
		head->prev=NULL;
	}
}
struct node* add_last(struct node *head)
{
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->prev=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		(temp->next)->prev=temp;
	}
return head;
}
struct node* add_middle(struct node *head)
{	
	struct node *temp=head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	int position,flag=0;
	if(head==NULL)
	{
		head=newnode;
		head->prev=NULL;
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
return head;
}
void find(struct node *head)
{
	struct node *temp=head;
	int k,l=0;
	if(head==NULL)
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
void count(struct node *head)
{	int c=0;
	if(head==NULL)
	printf("no nodes to count\n\n");
	else
	{
		while(head->next!=NULL)
		{
			head=head->next;
			c++;
		}
	printf("nodes=%d\n\n",c+1);
	}
}
struct node* delete_first(struct node *head,int *k,char *ch)
{
	struct node *temp=head;
	if(head==NULL)
	{	*ch='n';
	printf("no nodes to delete\n\n");
	}
	else
	{	*ch='y';
		*k=temp->ele;
		temp->prev=NULL;
		head=temp->next;
		
	}
return head;
}
struct node* delete_last(struct node *head,int *k,char *ch)
{
	struct node *temp=head;
	if(head==NULL)
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
return head;
}
struct node* delete_middle(struct node *head,int *k,char *ch)
{
	struct node *temp=head;
	int flag=0;
	if(head==NULL)
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
return head;
}
struct node* reverse(struct node* head)
{
	struct node*temp=head;
	while(temp->next!=NULL)
	{
		printf("%d",temp->ele);
		temp=temp->next;
	}
	printf("%d\n",temp->ele);
	while(temp->prev!=NULL)
	{
		printf("%d",temp->ele);
		temp=temp->prev;
	}
	printf("%d\n",temp->ele);
}
struct node* insert_sorted(struct node *head)
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node* current=head;
	newnode->next=NULL;
	newnode->prev=NULL;
	printf("Enter element\n");
	scanf("%d",&newnode->ele);
	int flag=0;
	if(head==NULL)
	head=newnode;
	else if(current->ele >= newnode->ele)
	{
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
	else
	{
		while(current->next!=NULL)
		{ 
			 if(current->next->ele < newnode->ele)
			{
				current=current->next;
			}
			else
			{	
				flag=1;
				break;				
			}
		}
		if(flag==1)
		{
				(current->next)->prev=newnode;
				newnode->next=current->next;
				current->next=newnode;
				newnode->prev=current;
		}
		else
		{
			
			current->next=newnode;
			newnode->prev=current;
		}
	}
return head;
}
struct node* swap(struct node* head)
{
	if(!head)
	return NULL;
	
	struct node*temp=head->next;
		head->next=head->prev;
		head->prev=temp;
	if(head->prev==NULL)
	return head;
	
	return swap(head->prev);
}
struct node* reverse1(struct node *head)
{
	struct node*temp=NULL;
	struct node*current=head;
	while(current!=NULL)
	{
	temp=current->prev;
	current->prev=current->next;
	current->next=temp;
	current=current->prev;
	}
	if(temp!=NULL)
	head=temp->prev;
return head;
}
int max(struct node *head)
{
	struct node *temp=head,*max;
	max=head;
	while(temp!=NULL)
	{
		if(max->ele < temp->ele)
		max=temp;
		else
		temp=temp->next;
	}
printf("%d\n",max->ele);
}
void bubble(struct node *head)
{	
	int swapped;
	struct node *temp=head,*temp1=head;
	
	while(temp1->next!=NULL)
	{	
		while(temp!=NULL)
		{
		if(temp->ele > (temp->next)->ele)
		{
			int temp1=(temp->next)->ele;
			temp->ele=(temp->next)->ele;
			(temp->next)->ele=temp1;
		}
		temp=temp->next;
		}
		temp1=temp1->next;
	}
}


