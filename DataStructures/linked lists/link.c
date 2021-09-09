#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node * insert(struct node *head)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("ENTER DATA TO STORE IN  NEW NODE\n");
	scanf("%d",&newnode->data);	
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
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
void display(struct node* head)
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	printf("NOTHING TO DISPLAY\n");
	else
	{
	printf("\n");

	while(temp->next!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
		
	}
	printf("%d",temp->data);
	printf("\n");

	}
}
int count(struct node* head)
{	
	int c=0;
	struct node *temp;
	temp=head;
	if(head==NULL)
	printf("ADD LINKS FIRST THEN AFTER GO FOR THE LENGTH OF LL\n");
	else
{
	while(temp->next!=NULL)
	{
		
		temp=temp->next;
		c++;		
	}
	return c;
}
}
void find(struct node* head,int ele)
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{	
		static int i=1;
		if(temp->data==ele)
			{
				printf("CONGRTAS! YOU HAVE FOUND THE ELEMENT AT:[%d] POSITION\n",i);
		        	return;
			}
				
		temp=temp->next;
		i++;

	}
	printf("YOU ENTERED ELEMENT IS NOT PRESENT IN LINKED LIST\n");
				
}

void main()
{
	struct node *head=NULL;
	int op,c,ele;
	do{
		printf("\n1:-ADD\n2:-DISPLAY\n3:-LENGTH OF LINKED LIST\n4:-FIND DATA IN LINKED LIST\n5:-EXIT\n");
		printf("\n");
		scanf("%d",&op);
	switch(op)
	{
		
		case 1:head=insert(head);
		break;
		case 2:display(head);
		break;
		case 3:c=count(head);
			printf("NUMBER OF NODES IN  LINKED LIST= %d\n",c+1);
		break;
		case 4:
			printf("ENTER THE ELEMENT YOU WANT TO FIND ?\n");
			scanf("%d",&ele);		
			find(head,ele);
		break;
		case 5:exit(0);
		break;
		
		default:printf("SIR YOU HAVE ENTERED INVALID OPTION PLEASE ENTER VALID OPTION\n");
	}
	}while(op!=6);
}
 t
