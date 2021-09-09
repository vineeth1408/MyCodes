#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
void del(struct node **head,struct node *temp)
{	
	struct node *temp1=*head;
	if((*head)==temp)
	{
		(*head)=(*head)->next;
	}
	else if(temp->next==NULL)
	{	
	
		while(temp1->next!=temp)
		{
			temp1=temp1->next;
		}
		temp1->next=NULL;
	}
	else
	{
	
	while(temp1->next!=temp)
	{
		printf("yellow");
		temp1=temp1->next;
	}
	temp1->next=(temp1->next)->next;
	}
}

struct node* dup(struct node *head)
{	
	struct node *temp3;
	struct node *temp=head;
	struct node *temp1=temp->next;
	while(temp->next!=NULL)
	{
		while(temp1->next!=NULL)
		{
			if(temp->ele==temp1->ele)
			{
				temp3=temp1;
				del(&head,temp3);
			}
			temp1=temp1->next;
		}
		temp1=temp->next;
		temp=temp->next;
		
	}
			
return head;
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
void main()
{	
	int op,ele;
	struct node *head=NULL;
	while(1)
	{
		printf("1 insert\n2 display\n 3 dup\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("enter element\n");
					scanf("%d",&ele);
					head=insert(head,ele);
			break;
			case 2:display(head);
			break;
			case 3:head=dup(head);
			break;	
		}
		}	
}
