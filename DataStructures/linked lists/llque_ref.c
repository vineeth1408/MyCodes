#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void enque(struct node**);
void deque(struct node**,int *,char *);
void display(struct node **);
void main()
{
	struct node *head=NULL;
	int op;
	int k;
	char ch;
	do{
	printf("1 for enque\n2 for deque\n3 for display\n4 fro exit\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:enque(&head);
		break;
		case 2:deque(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 3:display(&head);
		break;
	}

	}while(op!=4);
}
void enque(struct node **head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in newnode\n");	
	scanf("%d",&newnode->data);	
	newnode->next=NULL;
	if(*head==NULL)
	(*head)=newnode;
	else
	{
	newnode->next=(*head);
	(*head)=newnode;
	}
}
void deque(struct node **head,int *k,char *ch)
{
	struct node *temp,*temp1;
	temp=(*head);
	if((*head)==NULL)
		{
			printf("NOTHING TO POP\n");
			*ch='n';
		}
	else if((*head)->next==NULL)
		{	*ch='y';
			*k=(*head)->data;
			(*head)=NULL;
		}
	else
	{
		while((temp->next)->next!=NULL)
		{
			temp=temp->next;		
		}
		/*while(temp1->next!=temp)
		{
			temp1=temp1->next;		
		}
			temp1->next=NULL;*/
		*ch='y';
		*k=(temp->next)->data;
		temp->next=NULL;
	}
}
		
void display(struct node**head)
{
	struct node *temp;
	temp=(*head);
	if((*head)==NULL)
	printf("nothing to dispaluy\n");
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
		printf("\n");
	}
}

