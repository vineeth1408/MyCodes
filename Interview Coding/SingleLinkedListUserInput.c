#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void Middle(struct node *head)
{
	struct node *fast=head,*slow=head;
	if(head!=NULL){
		while(fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast = fast->next->next;
		}
		printf("%d\n",slow->data);
	}
}
struct node* Newnode(int data)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	
	return temp;
}
//struct node* insert(struct node *head, int position)
//{
//	struct node *newnode = Newnode(5);
//	if(position==1){
//		newnode->next = head;
//		head=newnode;
//	
//	}
//	else
//	{	
//		struct node *temp=head;
//		int i=1;
//		while(temp!=NULL && i<position-1)
//			temp=temp->next;
//			i++;
//		}
//	//	newnode->next=temp->next;
//		//temp->next = newnode;
//		if(i==position-1)
//		printf("None");
//	}
//	
//	return head;
//}
void display(struct node *head)
{
	struct node *temp=head;
	printf("\n");
	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
	
}
void main()
{
	struct node *head=NULL;
	int position;
	head=Newnode(1);
	head->next=Newnode(2);
	(head->next)->next=Newnode(3);
	((head->next)->next)->next=Newnode(4);
//	printf("ENter position to insert");
	//scanf("%d",&position);
	
 //	head = insert(head,position);
	display(head);
//head->next->next->next=Newnode(5);
	
//	struct node *second=NULL;
//	struct node *third = NULL;
//	struct node *fourth =NULL;
//	
//	head =(struct node*)malloc(sizeof(struct node));
//	second =(struct node*)malloc(sizeof(struct node));
//	third =(struct node*)malloc(sizeof(struct node));
//	fourth =(struct node*)malloc(sizeof(struct node));
//	
	Middle(head);
}
