#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
void insert(struct node **);
void display(struct node **);
void beginning(struct node**);
//struct node* middle_add(struct node*);
void delete_end(struct node**,int *,char *);
void delete_front(struct node**,int *,char *);
void delete_pos(struct node**,int *,char *);
void delete_ele(struct node**);
void find(struct node**,int );
int count(struct node**);
//struct node * left_right(struct node*);
void add_end(struct node**);
void main()
{
	struct node *head=NULL;
	
	int op,ele,c;
	int k;
	char ch;
	do{	
		printf("\n1:-ADD\n2:-DISPLAY\n3:-ADD AT BEGINNING\n4:-ADD IN MIDDLE\n5:-DELETE FROM END\n6:-DELETE FROM FRONT\n7:-DELETE FORM GIVEN PARTICULAR POSITION\n8:-DELETE PARTICULAR NODE WITH ELEMENT\n9:-SEARCH ELEMENT\n10:-NUMBER OF NODES\n11:-ADD NODE AT LEFT OR RIGHT TO A ELEMENT\n12:-ADD AT END\n13:-EXIT");
		
		printf("\n");
			scanf("%d",&op);
	switch(op)
	{
		
		case 1:insert(&head);
		break;
		case 2:display(&head);
		break;
		case 3:beginning(&head);
		break;
		//case 4:head=middle_add(head);
		//break;
		case 5:delete_end(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 6:delete_front(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 7:delete_pos(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 8:delete_ele(&head);
		break;
		case 9: printf("ENTER THE ELEMENT YOU WANT TO FIND = ?\n");
			scanf("%d",&ele);		
			find(&head,ele);
		break;
		case 10:c=count(&head);
			printf("NUMBER OF NODES IN  LINKED LIST= %d\n",c+1);
		break;
		//case 11:head=left_right(head);
		//break;
		case 12:add_end(&head);
		break;
		case 13:exit(0);
	}
}
while(op!=11);

}
void insert(struct node **head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int ele;
	printf("Enter data to store:\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)			//head initioa null so 
	{
		(*head)=newnode;
	}
	else
	{	
		struct node *temp;
		temp=(*head);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	temp->next=newnode;	
	}
}
void display(struct node **head)
{
	struct node*temp;
	temp=(*head);
	if((*head)==NULL)
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
void beginning(struct node **head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in new node\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	(*head)=newnode;
	else
	{
		
		newnode->next=(*head);
		(*head)=newnode;
        }
}
/*struct node* middle_add(struct node* head)
{
	struct node *newnode,*temp,*temp1;
	newnode=(struct node *)malloc(sizeof(struct node));
	temp=head;
	temp1=head;
	int position,i;
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
	else if(temp->next==NULL)
	{
		temp->next=newnode;
	}
	else
	{	
		printf("enter position\n");
		scanf("%d",&position);
		if(position==0)
		{	newnode->next=temp->next;
			head=newnode;
		}
	else
	{
			for(i=0;i<position && temp->next!=NULL;i++)
			{
				temp=temp->next;
			}
			while(temp1->next!=temp)
			{
				temp1=temp1->next;
			}	
		temp1->next=newnode;
		newnode->next=temp;
	}
	}
	return head;
}*/

void delete_end(struct node **head,int *k,char *ch)
{
	struct node *temp=(*head),*temp1=(*head);
	if((*head)==NULL) {
	*ch='n';
	printf("----nodes are not available to delete----\n");
	}
	else if(temp->next==NULL) 
	{	*ch='y';
		*k=temp->ele;
		(*head)=NULL;
				
	}
	else
	{	
		while(temp->next!=NULL)
		{
			temp=temp->next;	
		}
			
		while(temp1->next!=temp)
		{	
			temp1=temp1->next;
		}
		*ch='y';
		*k=temp->ele;
	
		temp1->next=NULL;
	 }
}
void delete_front(struct node **head,int *k,char *ch)
{	
	struct node *temp;
	temp=(*head);
	if((*head)==NULL)
	{
	printf("-----nodes are not available to delete----\n");
	*ch='n';
	}
	else
	{
	(*head)=temp->next;
	*ch='y';
	*k=temp->ele;
	}
	
}
void delete_pos(struct node **head,int *k,char *ch)
{	
	struct node *temp,*temp1;
	temp=(*head);
	temp1=(*head);
	int position,i;
	printf("Enter position to delete\n");
	scanf("%d",&position);
	if((*head)==NULL)
	printf("unable to delete\n");
	else if(position==0)
	{
		printf("removed=%d\n",temp->ele);
		(*head)=temp->next;
		
	}
	else if(position==1)
	{
		temp->next=(temp->next)->next;
	}
	else
	{	
		for(i=0;i<position && temp->next!=NULL;i++)
		{	
			temp=temp->next;
		}
		while(temp1->next!=temp)
		{
			temp1=temp1->next;
		}
		temp1->next=temp->next;
	}

}
void delete_ele(struct node **head)
{
	struct node *temp,*temp1;
	int element;
	int k=0;
	temp=(*head);
	temp1=(*head);
	printf("Enter element to delete\n");
	scanf("%d",&element);
	if((*head)==NULL)
	printf("unable to delete\n");
	else if(temp->next==NULL)
	{
		if(temp->ele==element)
			{
				printf("removed=%d\n",temp->ele);
				(*head)=NULL;
			}
	}
	else if(temp->ele==element)
	{
		(*head)=temp->next;	
	}
	else 
	{
		while(temp->ele!=element)
			{
				temp=temp->next;
			}
		while(temp1->next!=temp)
			{
				temp1=temp1->next;
			}
		temp1->next=temp->next;
	}	

}
void find(struct node **head,int ele)
{
	struct node *temp;
	temp=(*head);
	int k=0,i=0;
	while(temp!=NULL)
	{	
		
		if(temp->ele==ele)
		{
			k=1;
		i++;					     
		}	
		temp=temp->next;
	}
	if(k==1)
	printf("YOUR ENTERED ELEMENT IS PRESENT %d TIMES\n",i);
	else
	printf("YOUR ENTERED ELEMENT IS NOT PRESENT\n");
				
}
int count(struct node **head)
{	
	int c=0;
	struct node *temp;
	temp=(*head);
	if((*head)==NULL)
	printf("ADD LINKS FIRST THEN AFTER GO FOR THE LENGTH OF LL\n");
	else
	{
		while(temp->next!=NULL)
		{	
			temp=temp->next;
			c++;		
		} 
	}
	return c;
}
//struct node* left_right(struct node *head)
/*{	
	int op;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	do{
	printf("enter data of new node\n");
	scanf("%d",&newnode->ele);
	printf("PRESS CHOICE TO ADD NEW NODE\n");
	printf("1-RIGHT TO NODE\n-LEFT TO NODE\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		//struct node *temp;
		//temp=head;
		
	
	}
	
}
}*/
void add_end(struct node **head)
{
	struct node *newnode,*temp=(*head);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->next=NULL;
	if((*head)==NULL)
	printf("THIS FUNCTION IS ONLY TO ADD AT END NOT IN THE BEGINNING\n");
	else
	{
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	}
	
}



