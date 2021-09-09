	#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
void insert(struct node**);
void display(struct node**);
void beginning(struct node**);
void end_add(struct node**);
void first_delete(struct node**,int *,char *);
void last_delete(struct node**,int *,char *);
void delete_middle(struct node**,int *,char *);
void find(struct node**);
void count(struct node**);
void delete_after(struct node**,int *,char *);
void delete_before(struct node**,int *,char *);
void add_position(struct node**);
void replace(struct node**);
void insert_sort(struct node**);
void max_min(struct node**);
void main()
{
	struct node *head=NULL;
	
	int op,ele,c;
	int k;
	char ch;
	do{	
		printf("\n1:-ADD\n2:-DISPLAY\n3:-ADD AT BEGINNING\n4:-ADD AT LAST\n5:-DELETE FROM FIRST\n6:-DELETE FROM END\n7:-DELETE FROM POSITION\n8:-SEARCH\n9:-NO.OF NODES\n10:-DELETE AFTER\n11:-DELETE BEFORE\n12:-REPLACE\n13:-ADD AT POSITION\n14:-SORTED INSERT\n15:-EXIT\n16:-MAX AND MIN\n");
		
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
		case 4:end_add(&head);
		break;
		case 5:first_delete(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 6:last_delete(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 7:delete_middle(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 8:find(&head);
		break;
		case 9:count(&head);
		break;
		case 10:delete_after(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 11:delete_before(&head,&k,&ch);
			if(ch=='y')
			printf("removed=%d",k);
		break;
		case 12:replace(&head);
		break;
		case 13:add_position(&head);
		break;
		case 14:insert_sort(&head);
		break;
		case 16:max_min(&head);
		break;
	}

}while(op!=15);
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
		(*head)->next=(*head);
	}
	else
	{	
		struct node *temp;
		temp=(*head);
		while(temp->next!=(*head))
		{
			temp=temp->next;
		}
	temp->next=newnode;
	newnode->next=(*head);	
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
		while(temp->next!=(*head))
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
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in new node\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	temp=(*head);
	if((*head)==NULL)
	{
		(*head)=newnode;
		newnode->next=(*head);
	}
	else
	{
		while(temp->next!=(*head))
			{
				temp=temp->next;
			}
		temp->next=newnode;
		newnode->next=(*head);
		(*head)=newnode;
        }
}
void end_add(struct node **head)
{
	struct node* newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	temp=(*head);
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->next=(*head);
	}
	else
	{
		while(temp->next!=(*head))
		{
			temp=temp->next;
		}
	newnode->next=(*head);	
	temp->next=newnode;
	}
}
void first_delete(struct node **head,int *k,char *ch)
{
	struct node *temp;
	temp=(*head);
	if((*head)==NULL)
	{
	*ch='n';
	printf("nothing to delete\n");
	}
	else if((*head)->next==(*head))
	{	
		*k=(*head)->ele;
		(*head)=NULL;
	}
	else
	{
		while(temp->next!=(*head))
		{
			temp=temp->next;
		}
		*ch='y';
		*k=(*head)->ele;
		(*head)=(*head)->next;
		temp->next=(*head);
	}
}
void last_delete(struct node **head,int *k,char *ch)
{
	struct node*temp;
	temp=(*head);
	if((*head)==NULL)
	{
		printf("no nodes\n");
		*ch='n';
	}
	else if((*head)->next==(*head))
	{
		*k=(*head)->ele;
		(*head)=NULL;
	}
	else
	{
		while((temp->next)->next!=(*head))
		{
			temp=temp->next;
		}
	*ch='y';
	*k=(temp->next)->ele;
	temp->next=(*head);
	}
}
void delete_middle(struct node **head,int *k,char *ch)
{
	struct node *temp;
	temp=(*head);
	int flag=0,l;
	printf("enter position to delete\n");
	scanf("%d",&l);
	if((*head)==NULL)
	printf("NO NODES YAAR HOW U WILL DELETE THEN\n");
	else if(l==0)
	{
		while(temp->next!=(*head))
		{
			temp=temp->next;
		}
		*ch='y';
		*k=(*head)->ele;
		(*head)=(*head)->next;
		temp->next=(*head);
	}
	else
	{	int m=1;
		while(m<l)
		{	
			m++;
			if(temp->next!=(*head))
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
}
void find(struct node **head)
{
	struct node*temp=(*head);
	int ele,k=0;
	if((*head)==NULL)
	{
	printf("nothing to find\n");
	}
	else
	{
		printf("enter element to search\n");
		scanf("%d",&ele);	
		while(temp->next!=(*head))
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
void count(struct node **head)
{	
	int c=0;
	struct node*temp=(*head);
	if((*head)==NULL)
	printf("nothing to count\n");
	else
	{
		while(temp->next!=(*head))
		{
			c++;
			temp=temp->next;
		}
	printf("count=%d\n",c+1);		
	}
}
void delete_after(struct node **head,int *k,char *ch)
{
	struct node*temp=(*head),*temp1=(*head);
	int ele;
	if((*head)==NULL)
		printf("nothing to delete\n");
	else
	{
		printf("enter ele\n");
		scanf("%d",&ele);
		while(temp1->next!=(*head))
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
}
void delete_before(struct node **head,int *k,char *ch)
{
	struct node*temp,*temp1=(*head);
	temp=(*head);
	int ele;
	if((*head)==NULL)
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
			while(temp->next!=(*head))
			{	
				temp=temp->next;
			}
			(*head)=(*head)->next;
			temp->next=(*head);
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
}	
void replace(struct node **head)
{
	struct node*temp=(*head),*newnode,*temp1=(*head),*temp2=(*head);
	newnode=(struct node*)malloc(sizeof(struct node));
	int flag=0,k;
	if((*head)==NULL)
	printf("not possible to replace\n");
	else{
		printf("ENTER THE DATA TO REPLACE\n");
		scanf("%d",&k);
		printf("Enter data in newnode\n");
		scanf("%d",&newnode->ele);
		newnode->next=NULL;
		if((*head)->ele==k)
		{
			while(temp->next!=(*head))
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->next=(*head)->next;
			(*head)=newnode;
		}
		else
		{
			while(temp2->next!=(*head))
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
				newnode->next=(*head);
			}
			else
			{
			while(temp->next!=(*head))
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
}
void add_position(struct node **head)
{
	struct node*temp=(*head),*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	int position,flag=0;
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if((*head)==NULL)
	{
		(*head)=newnode;
		newnode->next=(*head);
	}
	else
	{
	printf("enter position to add\n");
	scanf("%d",&position);
		if(position==0)
			{
				while(temp->next!=(*head))
				{
					temp=temp->next;
				}
				temp->next=newnode;
				newnode->next=(*head);
				(*head)=newnode;
			}
		else	
			{	int m=1;
				while(m<position)
				{	m++;
					if(temp->next!=(*head))
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
}
void insert_sort(struct node** head)
{
	struct node *newnode;
	struct node *current=(*head);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter data\n");
	scanf("%d",&newnode->ele);
	if((*head)==NULL)
	{
		(*head)=newnode;
		(*head)->next=newnode;
	}
	else if(current->ele >= newnode->ele)
	{
		 while(current->next!=(*head))
			current=current->next;
		current->next=newnode;
		newnode->next=(*head);
		(*head)=newnode;
	}
	else
	{
		while(current->next!=(*head) && current->next->ele < newnode->ele)
			current=current->next;
		newnode->next=current->next;
		current->next=newnode;

	}
}
void max_min(struct node **head)
{
	int min,max;
	struct node *temp=*head;
	while(temp->next!=(*head))
	{
		if(min < temp->ele)
		min=temp->ele;
		if(max > temp->ele)
		max=temp->ele;

		temp=temp->next;	
	}
printf("%d,%d\n",max,min);	
}

