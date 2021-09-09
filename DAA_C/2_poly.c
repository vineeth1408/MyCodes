#include<stdio.h>
#include<stdlib.h>
struct node
{
	int co;
	int power;
	struct node *next;
};
struct node* insert(struct node *p)
{
	int n;
	
	printf("enter order and give inputs in descending order\n");
	scanf("%d",&n);
	int i=0;
	while(i!=n)
	{
	  struct node *newnode=(struct node*)malloc(sizeof(struct node));
	  newnode->next=NULL;
	  printf("enter co-effiecient\n");
	  scanf("%d",&newnode->co);
	  printf("enter power\n");
	  scanf("%d",&newnode->power);
	  if(p==NULL)
	  p=newnode;
	  else
	  {			
	  		struct node *temp=p;   	  		
	  		while(temp->next!=NULL)
	  		{
	  			temp=temp->next;
			}	
			temp->next=newnode;
      }
      
      i++;
	}
	return p;
}
struct node * add(struct node *p1,struct node *p2)
{
	struct node *temp,*dummy;
	
	temp=(struct node *)malloc(sizeof(struct node));
	temp->next=NULL;
	dummy=temp;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->power==p2->power)
		{
			p1->co= p1->co+p2->co;
			temp->next=p1;
			p1=p1->next;
			p2=p2->next;
			temp=temp->next;
		}
		else if(p1->power > p2->power)
		{
			temp->next=p1;
			p1=p1->next;
			temp=temp->next;
		}
		else
		{
			temp->next=p2;
			p2=p2->next;
			temp=temp->next;
		}
	}
	if(p1!=NULL)
	temp->next=p1;
	if(p2!=NULL)
	temp->next=p2;
	
	temp=dummy->next;
	struct node *temp2=temp;
	while(temp2->next)
	{
		printf(" %d x^%d + ",temp2->co,temp2->power);
		temp2=temp2->next;
	}
	printf(" %d x^%d\n",temp2->co,temp2->power);
	return temp;
}
void display(struct node *head)
{	
	struct node *temp=head;
	while(temp->next)
	{
		printf(" %d x^%d\n",temp->co,temp->power);
		temp=temp->next;
	}
}
void main()
{
	int op;
	struct node *p1=NULL;
	struct node *p2=NULL;
	struct node *head=NULL;
	do{
		printf("1 insert\n2 insert\n3 add\n4 display\n");
		printf("\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:p1=insert(p1);
			break;
			case 2:p2=insert(p2);
			break;
			case 3:head=add(p1,p2);	
			break;
			case 4:display(head);
		}
	}while(op!=5);
}
