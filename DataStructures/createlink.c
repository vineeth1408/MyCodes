#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void create(int n)
{	
	int i;
	struct node* head ,*temp,*newnode;
	head=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	printf("unable to create memory\n");
	else
	{	
	printf("Enter data in node:\n");
	scanf("%d",&head->data);
	head->next=NULL;
	temp=head;
	}
for(i=0;i<n;i++)
{
	newnode=(struct node*)malloc(sizeof(struct node));	
	if(newnode==NULL)
	printf("no memory\n");
	else
	{
		printf("enter data:\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
}
printf("%d",head->data);
printf("%d",head->data->data);
printf("%d",head->data->data->data);
}
void main()
{
	
	int n;
	printf("enter the no.of nodes you want to insert:\n");
	scanf("%d",&n);
	create(n);
	
}
