#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
struct node* insert(struct node*);
void display(struct node*);
void swap(struct node*);
void reverse(struct node*);
int len(struct node*);
void swap_2(struct node*);
void reverse2(struct node*);
void main()
{
	struct node *head=NULL;
	int op;
	do
	{
		printf("choose\n1 insert\n2 dispkay\n3 swap\n4 reverse\n5 swap two nodes\n6 reverse 2\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:head=insert(head);
			break;
			case 2:display(head);
			break;
			case 3:swap(head);
			break;
			case 4:reverse(head);
			break;
			case 5:swap_2(head);
			break;
			case 6:reverse2(head);
			break;
		}
	}while(op!=7);
}
struct node* insert(struct node *head)
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
void swap(struct node *head)
{	
	int k;
	if(head==NULL)
	return;
	
	swap(head->next);
	printf("%d->",head->ele);
	if(head->ele==)

}
int len(struct node*head)
{	int c=0;
	while(head!=NULL)
	{
		head=head->next;
		c++;
	}
return c;
}
void reverse(struct node *head)
{
	int i,j,k,c,temp;
	c=len(head);
	i=0;
	j=c-1;
	struct node*p=head,*q=head;
	while(i<j)
	{
		k=0;
		while(k<j)
		{	k++;
			q=q->next;
		}
		temp=p->ele;
		p->ele=q->ele;
		q->ele=temp;
		i++;j--;
		p=p->next;
		q=head;	
	}
}
void swap_2(struct node *head)
{
	struct node*p=head,*q,*r;
	int i=1,position;
	printf("enter position to swap\n");
	scanf("%d",&position);
	while(i<position)
	{
		i++;
		p=p->next;
	}
	q=p->next;
	r=q->next;
	q->next=r->next;
	r->next=q;
	p->next=r;
}
void reverse2(struct node *head)
{
	struct node *temp=head;
	struct node *next=NULL;
	struct node *prev=NULL;
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
}




