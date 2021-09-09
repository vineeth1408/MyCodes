#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node*next;
};
void mergesort(struct node *link1,struct node *link2)
{
	struct node *link3=(struct node*)malloc(sizeof(struct node));
	struct node *dummy=link3;
	while(link1!=NULL && link2!=NULL)
	{
		if(link1->ele < link2->ele)
		{
			link3->next=link1;
			link3=link3->next;
			link1=link1->next;			
		}
		else
		{
			link3->next=link2;
			link3=link3->next;
			link2=link2->next;
		}
			
	}
	while(link1!=NULL)
	{
		link3->next=link1;
		link3=link3->next;
		link1=link1->next;
	}
	while(link2!=NULL)
	{
		link3->next=link2;
		link3=link3->next;
		link2=link2->next;
	}
	link3=dummy->next;
	free(dummy);
	while(link3!=NULL)
	{
		printf("%d->",link3->ele);
		link3=link3->next;
	}
	printf("\n");
}
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

struct node* insert2(struct node *head,int ele)
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
struct node * pairs(struct node* head)
{	
	struct node *temp;
	if(head==NULL || head->next==NULL)
	return ;
	else
	{
		temp=head->next;
	}
}

void main()
{	
	int op,ele;
	struct node *link1=NULL;
	struct node *link2=NULL;
	while(1)
	{
		printf("1 insert in link-1\n2 insert in link 2\n4 dispaly in link 1\n5 display in link 2\n6 merge sort\n");
		scanf("%d",&op);
		{
			switch(op)
			{
			case 1: printf("enter element in link1 \n");
					scanf("%d",&ele);
					link1=insert(link1,ele);
			break;
			case 2:printf("enter element in link1 \n");
					scanf("%d",&ele);
					link2=insert2(link2,ele);
			break;
			case 3:exit(0);
			break;
			case 4:display(link1);
			break;
			case 5:display(link2);
			break;
			case 6:mergesort(link1,link2);
			break;
			case 7:link1=pairs(link1);
			break;
		}
	}
}
}

