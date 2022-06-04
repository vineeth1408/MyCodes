#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node* newnode(int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
}
void display(struct node *head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
void main()
{
	struct node *head=NULL;
	head=newnode(1);
	head->next=newnode(2);
	display(head);
}
