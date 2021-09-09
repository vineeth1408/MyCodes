#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
struct node* del(struct node *head,struct node *temp)
{	
	struct node *temp1=head;
	while(temp1->next!=temp)
	{
		temp1=temp1->next;
	}
	temp1->next=(temp1->next)->next;
	return head;
}
struct node* dup(struct node *head)
{	
	struct node *temp3;
	struct node *temp=head;
	struct node *temp1=head->next;
	while(temp!=NULL)
	{
		while(temp1!=NULL)
		{
			if(temp->ele==temp1->ele)
			{
				temp3=temp1;
				head=del(head,temp3);
			}
			temp1=temp1->next;
		}
		temp=temp->next;
		temp1=temp->next;
	}
			
return head;
}
void middle_node(struct node *head)
{
	struct node *two=head;
	struct node *one=head;
	while(1)
	{
		if(two->next!=NULL)
		{
			if((two->next)->next!=NULL)
			{
				two=(two->next)->next;	
			}
			else
			break;
		}
		else
		break;
		one=one->next;
		if(two->next==NULL)
		printf("%d",one->ele);
		else
		printf("%d,%d",one->ele,(one->next)->ele);
	}

}

int length(struct node *head)
{
	if(head==NULL)
		return 0;
		else
		return (1+length(head->next));	
}
int cycle(struct node *head)
{
	struct node *temp=head;
	struct node *temp1=head;
	while(head!=NULL)
	{	
		temp=temp->next;
		temp1=(temp1->next)->next;
		if(temp==temp1)
		return 1;
		head=head->next;
		
	}
	return 0;
}
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
}

void merge()
{	
	int op,ele;
	struct node *link1=NULL;
	struct node *link2=NULL;
	while(1)
	{
		printf("1 insert in link-1\n2 insert in link 2\n3 dispaly in link 1\n4 display in link 2\n6 merge sort\n");
		scanf("%d",&op);
		{
			switch(op)
			{
			case 1: printf("enter element in link1 \n");
					scanf("%d",&ele);
			
			break;
			case 2:printf("enter element in link1 \n");
					scanf("%d",&ele);
					
			break;
			case 3:exit(0);
			break;
			//case 4:display(link1);
			//break;
			//case 5:display(link2);
			//break;
			case 6:mergesort(link1,link2);
			break;
		}
	}
}
}
struct node* insert(struct node*,int);
void display(struct node *);
struct node* beginning(struct node*);
struct node* middle_add(struct node*);
struct node* delete_end(struct node*,int *,char *);
struct node* delete_front(struct node*,int *,char *);
struct node* delete_pos(struct node*,int *,char *);
struct node* delete_ele(struct node*);
void find(struct node* ,int );
int count(struct node*);
struct node * left_right(struct node*);
struct node* add_end(struct node*);
struct node* replace(struct node*);
struct node* add_after(struct node *);
struct node* delete_middle(struct node*,int*,char*);
void nth_back(struct node*,int);
void palindrome(struct node*);
int cycle(struct node*);
void merge();
void main()
{
	struct node *head=NULL;
	
	int op,ele,c;
	int k;
	char ch;
	do{	
		printf("\n1:-ADD\n2:-DISPLAY\n3:-ADD AT BEGINNING\n4:-ADD IN MIDDLE\n5:-DELETE FROM END\n6:-DELETE FROM FRONT\n7:-DELETE FORM GIVEN PARTICULAR POSITION\n8:-DELETE PARTICULAR NODE WITH ELEMENT\n9:-SEARCH ELEMENT\n10:-NUMBER OF NODES\n11:-ADD NODE AT LEFT OR RIGHT TO A ELEMENT\n12:-ADD AT END\n13:-REPLACE\n14:-ADD AFTER\n15:-DELETE MIDDLE\n16:-N^TH ELEMENT FROM BACK\n17:-PALINDROME\n18:-MIDDLE_NODE IN ONE LOOP\n19:-LENGTH USING RECURSION\n20 delete duplicates\n");
		printf("21 cycle\n22 merge linked lists\n");
		printf("\n");
			scanf("%d",&op);
	switch(op)
	{
		
		case 1:printf("enter element\n");
				scanf("%d",&ele);
				head=insert(head,ele);
		break;
		case 2:display(head);
		break;
		case 3:head=beginning(head);
		break;
		case 4:head=middle_add(head);
		break;
		case 5:head=delete_end(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 6:head=delete_front(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 7:head=delete_pos(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 8:head=delete_ele(head);
		break;
		case 9: printf("ENTER THE ELEMENT YOU WANT TO FIND = ?\n");
			scanf("%d",&ele);		
			find(head,ele);
		break;
		case 10:c=count(head);
			printf("NUMBER OF NODES IN  LINKED LIST= %d\n",c+1);
		break;
		case 11:head=left_right(head);
		break;
		case 12:head=add_end(head);
		break;
		case 13:head=replace(head);
		break;
		case 14:head=add_after(head);
		break;
		case 15:head=delete_middle(head,&k,&ch);
			if(ch=='y')
			printf("removed=%d\n",k);
		break;
		case 16:printf("enter the element you want to find from back\n");
			scanf("%d",&k);
			nth_back(head,k);
		break;
		case 17:palindrome(head);
		break;
		case 18:middle_node(head);
		break;
		case 19:k=length(head);
			printf("length=%d",k);
		case 20:head=dup(head);
		break;
		case 21:k=cycle(head);
			if(k==1)
			printf("true\n");
			else
			printf("false");
		break;
		case 22:merge();
		break;
	}
}
while(op!=23);

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
struct node* beginning(struct node *head)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data in new node\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	head=newnode;
	else
	{
		
		newnode->next=head;
		head=newnode;
        }
return head;
}
struct node* middle_add(struct node* head)
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
		{
			head=newnode;
			newnode->next=temp;
			return head;
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
}

struct node* delete_end(struct node *head,int *k,char *ch)
{
	struct node *temp=head,*temp1=head;
	if(head==NULL) {
	*ch='n';
	printf("----nodes are not available to delete----\n");
	}
	else if(temp->next==NULL) 
	{	*ch='y';
		*k=temp->ele;
		head=NULL;
				
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
	return head;
}
struct node* delete_front(struct node *head,int *k,char *ch)
{	
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
	printf("-----nodes are not available to delete----\n");
	*ch='n';
	}
	else
	{
	head=temp->next;
	*ch='y';
	*k=temp->ele;
	}
	return head;
}
struct node *delete_pos(struct node *head,int *k,char *ch)
{	
	struct node *temp,*temp1;
	temp=head;
	temp1=head;
	int position,i;
	printf("Enter position to delete\n");
	scanf("%d",&position);
	if(head==NULL)
	printf("unable to delete\n");
	else if(position==0)
	{
		printf("removed=%d\n",temp->ele);
		return temp->next;
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
	return head;
}
struct node * delete_ele(struct node *head)
{
	struct node *temp,*temp1;
	int element;
	int k=0;
	temp=head;
	temp1=head;
	printf("Enter element to delete\n");
	scanf("%d",&element);
	if(head==NULL)
	printf("unable to delete\n");
	else if(temp->next==NULL)
	{
		if(temp->ele==element)
			{
				printf("removed=%d\n",temp->ele);
				return NULL;
			}
	}
	else if(temp->ele==element)
	{
		printf("%d is deleted\n",temp->ele);
		return temp->next;
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
return head;
}
void find(struct node* head,int ele)
{
	struct node *temp;
	temp=head;
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
	}
	return c;
}
struct node* left_right(struct node *head)
{	
	int op,k,l;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node *temp,*temp1;
	newnode->next=NULL;
	temp=head;
	temp1=head;
	printf("R U ADDING A NEWNODE IN BEGINNING ? IF YES PRESS 1 ELSE PRESS 2\n");
	scanf("%d",&l);
	if(l==1)
	{
	if(head==NULL)
	{	
		printf("enter data of first node\n");
		scanf("%d",&newnode->ele);
	 	head=newnode;
	}
	else if(temp->next==NULL)
		{	
		printf("enter data of second node\n");
		scanf("%d",&newnode->ele);
		printf("PRESS CHOICE TO ADD NEW NODE\n");
		printf("1-LEFT TO NODE\n2-RIGHT TO NODE\n");
		scanf("%d",&op);
		switch(op)
			{
				case 1:	{
						newnode->next=head;
						head=newnode;
			        		return head;
					}
				break;
				case 2:		temp->next=newnode;
						break;
			}
		}
	}
	else
	{
		printf("CHOOSE A PARTICULAR ELEMENT TO ADD A NEWNODE TO IT EITHER LEFT OR RIGHT BY YOURS CHOICE\n");
		scanf("%d",&k);
	 if(temp->ele==k)
	{	printf("enter data of new node\n");
		scanf("%d",&newnode->ele);
		printf("PRESS CHOICE TO ADD NEW NODE\n");
		printf("1-LEFT TO NODE\n2-RIGHT TO NODE\n");
		scanf("%d",&op);
		switch(op)
			{
				case 1:	{
						newnode->next=head;
						head=newnode;
			        		return head;
					}
				break;
				case 2:		temp->next=newnode;
						break;
			}
	}
	else
	{	
		printf("enter data of new node\n");
		scanf("%d",&newnode->ele);
		printf("YOUR CHOICE\n");
		printf("1-LEFT TO NODE\n2-RIGHT TO NODE\n");
		scanf("%d",&op);
	switch(op)
		{
		case 1:
			while(temp->ele!=k)
			{
				temp=temp->next;
			}
			while(temp1->next!=temp)
			{
				temp1=temp1->next;
			}
			temp1->next=newnode;
			newnode->next=temp;
			return head;
		break;
		case 2:{
				while(temp->ele!=k)
				{
					temp=temp->next;
				}
				temp->next=newnode;
				newnode->next=(temp->next)->next;
				return head;
			}
		break;
		}
        }
	}
}	
struct node* add_end(struct node *head)
{
	struct node *newnode,*temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->next=NULL;
	if(head==NULL)
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
	return head;
}
struct node* replace(struct node *head)
{
	struct node *newnode,*temp=head,*temp1=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	int k;
	printf("Enter data to replace\n");
	scanf("%d",&k);
	printf("enter data\n");
	scanf("%d",&newnode->ele);
	newnode->next=NULL;
	if(head==NULL)
	printf("CANNOT REPLACE\n");
	else if(temp->ele==k)
	{	
	head=newnode;
	newnode->next=temp->next;
	}
	else
	{
		while(temp->ele!=k)
		{
			temp=temp->next;
		}
		while(temp1->next!=temp)
		{
			temp1=temp1->next;
		}
	temp1->next=newnode;
	newnode->next=temp->next;
	} 
	return head;
}
struct node* add_after(struct node *head)
{
	struct node *newnode,*temp;
	
}
struct node* delete_middle(struct node*head,int *k,char *ch)
{
	struct node *temp;
	temp=head;
	int flag=0,l;
		printf("enter position to delete\n");
		scanf("%d",&l);
	if(head==NULL)
	{
		printf("NO NODES\n");
		*ch='n';
	}
	else if(l==0)
	{	*ch='y';	
		*k=head->ele;
		head=head->next;
		return head;
	}
	else
	{	int m=0;
		while(m<l)
		{	
			m++;
			if(temp->next!=NULL)
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
		printf("we have found position\n");
		*ch='y';
		*k=temp->ele;
		temp->next=(temp->next)->next;
	}
	else
	printf("enter valid position\n");
	}
return head;
}
void nth_back(struct node *head,int l)
{	
	int c=0;
	int k;
	k=l;
	struct node *temp=head;
	struct node *temp1=head;
	while(temp!=NULL)
	{
		if(k==c)
		{
			temp1=temp1->next;
			c++;	
			temp=temp->next;
			k++;
		}
		else
		{
			temp=temp->next;
			c++;
		}
	}
	if(k<=c)
	printf("found=%d\n",temp1->ele);
	else
	printf("no");
	
}
void palindrome(struct node *head)
{
	int a[10];
	int i=0,c=0;
	int l=0;
	while(head!=NULL)
	{	c++;
		a[i]=head->ele;
		i++;
		head=head->next;
	}
	
	
		for(i=0;i<c/2;i++)
		{
			if(a[i]==a[c-i-1])
			{	
				l++;
			}
			printf("%d \t",a[i]);
		}
		printf("l=%d\n",l);
		if(l==c/2)
		printf("palindrome\n");
		else
		printf("not");
}
	
