#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
void reverse(struct node **head)
{
	struct node *next;
	struct node *temp=*head;
	struct node *prev=NULL;
	do{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}while(temp!=(*head));
	(*head)->next=prev;
	(*head)=prev;
	
}
struct node* insert(struct node *);
void display(struct node *);
struct node* beginning(struct node*);
struct node* end_add(struct node*);
struct node* first_delete(struct node*,int *,char *);
struct node* last_delete(struct node*,int *,char *);
struct node* delete_middle(struct node*,int *,char *);
void find(struct node*);
void count(struct node*);
struct node* delete_after(struct node*,int *,char *);
struct node* delete_before(struct node*,int *,char *);
struct node* replace(struct node*); 
struct node* add_position(struct node*);
struct node* add_before(struct node*);
struct node* add_after(struct node*);
//struct node* reverse(struct node*);
void main()
{
	struct node *head=NULL;
	
	int op,ele,c;
	int k;
	char ch;
	do{	
		printf("\n1:-ADD\n2:-DISPLAY\n3:-ADD AT BEGINNING\n4:-ADD AT LAST\n5:-DELETE FROM FIRST\n6:-DELETE FROM END\n7:-DELETE FROM POSITION\n8:-SEARCH\n9:-NO.OF NODES\n10:-DELETE AFTER\n11:-DELETE BEFORE\n12:-REPLACE\n13:-ADD AT POSITION\n16:-EXIT\n14:-ADD BEFORE\n15:-ADD AFTER\n16:-REVERSE\n");
		
		printf("\n");
			scanf("%d",&op);
	switch(op)
	{
		
		case 1:head=insert(head);
		break;
		case 2:display(head);
		break;
		case 3:head=beginning(head);
		break;
		case 4:head=end_add(head);
		break;
		case 5:head=first_delete(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 6:head=last_delete(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 7:head=delete_middle(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 8:find(head);
		break;
		case 9:count(head);
		break;
		case 10:head=delete_after(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 11:head=delete_before(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 12:head=replace(head);
		break;
		case 13:head=add_position(head);
		break;
		case 14:head=add_before(head);
		break;
		case 15:head=add_after(head);
		break;
		case 16:reverse(&head);
		break;
	}

}while(op!=17);
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
		head->next=head;
	}
	else
	{	
		struct node *temp;
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
	temp->next=newnode;
	newnode->next=head;	
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
		while(temp->next!=head)
		{
			printf("%d->",temp->ele);
			temp=temp->next;
		}
		printf("%d",temp->ele);
		printf("\n");
	}
}
struct node* beginning(struct node *head)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in new node\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	temp=head;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
	
		
		while(temp->next!=head)
			{
				temp=temp->next;
			}
		temp->next=newnode;
		newnode->next=head;
		head=newnode;
        }
return head;
}
struct node* end_add(struct node *head)
{
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=head;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
	newnode->next=head;	
	temp->next=newnode;
	}
return head;
}
struct node* first_delete(struct node *head,int *k,char *ch)
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
	*ch='n';
	printf("nothing to delete\n");
	}
	else if(head->next==head)
	{	
		*k=head->ele;
		head=NULL;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		*ch='y';
		*k=head->ele;
		head=head->next;
		temp->next=head;
	}
return head;
}
struct node* last_delete(struct node *head,int *k,char *ch)
{
	struct node*temp;
	temp=head;
	if(head==NULL)
	{
		printf("no nodes\n");
		*ch='n';
	}
	else if(head->next==head)
	{
		*k=head->ele;
		head=NULL;
	}
	else
	{
		while((temp->next)->next!=head)
		{
			temp=temp->next;
		}
	*ch='y';
	*k=(temp->next)->ele;
	temp->next=head;
	}
	return head;
}
struct node* delete_middle(struct node *head,int *k,char *ch)
{
	struct node *temp;
	temp=head;
	int flag=0,l;
	printf("enter position to delete\n");
	scanf("%d",&l);
	if(head==NULL)
	printf("NO NODES YAAR HOW U WILL DELETE THEN\n");
	else if(l==0)
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		*ch='y';
		*k=head->ele;
		head=head->next;
		temp->next=head;
	}
	else
	{	int m=1;
		while(m<l)
		{	
			m++;
			if(temp->next!=head)
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
		*ch='y';
		*k=(temp->next)->ele;
		temp->next=(temp->next)->next;
	}
	else
	printf("enter valid position\n");
	}
return head;
}
void find(struct node *head)
{
	struct node*temp=head;
	int ele,k=0;
	if(head==NULL)
	{
	printf("nothing to find\n");
	}
	else
	{
		printf("enter element to search\n");
		scanf("%d",&ele);	
		while(temp->next!=head)
		{
			if(temp->ele==ele)
			{
				k=1;
				break;
			}
			temp=temp->next;
		}
		if(temp->ele==ele)
		printf("element found\n");
		else if(k==1)
		printf("element found\n");
		else
		printf("not found\n");
	}
}
void count(struct node *head)
{	
	int c=0;
	struct node*temp=head;
	if(head==NULL)
	printf("nothing to count\n");
	else
	{
		while(temp->next!=head)
		{
			c++;
			temp=temp->next;
		}
	printf("count=%d\n",c+1);		
	}
}
struct node* delete_after(struct node* head,int *k,char *ch)
{
	struct node*temp=head,*temp1=head;
	int ele;
	if(head==NULL)
		printf("nothing to delete\n");
	else
	{
		printf("enter ele\n");
		scanf("%d",&ele);
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		if(temp1->ele==ele)
			{
				printf("not possible\n");
				*ch='n';
			}
		else
			{
				while(temp->ele!=ele)
				{
					temp=temp->next;
				}
					*ch='y';	
					*k=(temp->next)->ele;
					temp->next=(temp->next)->next;
			}
	}
return head;
}
struct node* delete_before(struct node* head,int *k,char *ch)
{
	struct node*temp,*temp1=head;
	temp=head;
	int ele;
	if(head==NULL)
	printf("nothing to delete\n");
	else
	{
		printf("enter ele\n");
		scanf("%d",&ele);
		if(temp->ele==ele)
		{
			*ch='n';
			printf("not possible\n");
		}
		else if((temp->next)->ele==ele)
		{
			*ch='y';
			*k=temp->ele;
			while(temp->next!=head)
			{	
				temp=temp->next;
			}
			head=head->next;
			temp->next=head;
		}
		else
		{
			while(temp->ele!=ele)
			{
				temp=temp->next;
			}
			while((temp1->next)->next!=temp)
			{
				temp1=temp1->next;
			}
			*ch='y';
			*k=(temp1->next)->ele;
			temp1->next=temp;
	    }
	}
return head;
}	
struct node* replace(struct node* head)
{
	struct node*temp=head,*newnode,*temp1=head,*temp2=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	int flag=0,k;
	if(head==NULL)
	printf("not possible to replace\n");
	else{
		printf("ENTER THE DATA TO REPLACE\n");
		scanf("%d",&k);
		printf("Enter data in newnode\n");
		scanf("%d",&newnode->ele);
		newnode->next=NULL;
		if(head->ele==k)
		{
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->next=head->next;
			head=newnode;
		}
		else
		{
			while(temp2->next!=head)
			{
				temp2=temp2->next;
			}
			if(temp2->ele==k)
			{
				while(temp->next!=temp2)
					{
						temp=temp->next;
					}
				temp->next=newnode;
				newnode->next=head;
			}
			else
			{
			while(temp->next!=head)
			{
				if(temp->ele!=k)
				{
					temp=temp->next;
				}
				else
				{
					flag=1;
					break;				
				}
			}
			if(flag==1)
			{	
				while(temp1->next!=temp)
				{
					temp1=temp1->next;
				}
				temp1->next=newnode;
				newnode->next=temp->next;	
			}
			else
			printf("not possible to replace\n");
			}
		}
	}
		
return head;
}
struct node* add_position(struct node* head)
{
	struct node*temp=head,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int position,flag=0;
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
	printf("enter position to add\n");
	scanf("%d",&position);
		if(position==0)
			{
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				temp->next=newnode;
				newnode->next=head;
				head=newnode;
			}
		else	
			{	int m=1;
				while(m<position)
				{	m++;
					if(temp->next!=head)
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
					temp->next=newnode;

				}
				else
				printf("not possible to add\n");
			}
	}
return head;		
}
struct node* add_before(struct node *head)
{
	struct node *temp=head,*newnode,*temp1=head,*temp2=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
		int k,flag=0;
		printf("choose a particular element to add before\n");
		scanf("%d",&k);
	if(head==NULL)
	{
		head=newnode;
		head->next=newnode;
	}
	else if(head->ele==k)
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
		head=newnode;
	}
	else
	{
		while(temp2->next!=head)
		{
			temp2=temp2->next;
		}
		if(temp2->ele==k)
		{
			while(temp1->next!=temp2)
				{
					temp1=temp1->next;
				}
				temp1->next=newnode;
				newnode->next=temp2;
				
		}
		else
		{
			while(temp->next!=head)
				{
					if(temp->ele!=k)
					{
						temp=temp->next;
					}
					else
					{
						flag=1;
						break;				
					}
				}
				if(flag==1)
				{	
					while(temp1->next!=temp)
					{
						temp1=temp1->next;
					}
					temp1->next=newnode;
					newnode->next=temp;
				}
				else
				printf("not possible to insert\n");
		}
	}
return head;
}
struct node* add_after(struct node *head)
{
	struct node *temp=head,*newnode,*temp1=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=newnode;
	}
	else
	{	int k,flag=0;
		printf("choose a particular element to add after\n");
		scanf("%d",&k);
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		if(temp1->ele==k)		
		{
			temp1->next=newnode;
			newnode->next=head;
		}
		else
		{
			while(temp->next!=head)
				{
					if(temp->ele!=k)
					{
						temp=temp->next;
					}
					else
					{
						flag=1;
						break;				
					}
				}
				if(flag==1)
				{	
					newnode->next=temp->next;	
					temp->next=newnode;
				}
				else
				printf("not possible\n");
		}
	}
return head;
}

