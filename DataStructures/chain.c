#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int ele;
	struct node *next;
};
void insert(struct node **head,int ele)
{	
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->ele=ele;
	new->next=NULL;
	if((*head)==NULL)
	(*head)=new;
	else
	{	
		new->next=(*head);  // or u can add after keeping while loop
		(*head)=new;
	}
}

void dis(struct node *a) {
	struct node *n=a;
	while(n!=NULL) {
		printf("%d->",n->ele);
		n=n->next;
	}
	printf("\n");
}

void display(struct node *a[])
{	
	int i;
	for(i=0;i<10;i++) {
		
		dis(a[i]);
	}
}
bool find(struct node *head,int ele)
{
	if(head==NULL)
	return false;
	else
	{
		while(head!=NULL)
		{
			if(head->ele==ele)
			return true;
			head=head->next;
		}
	}
}
void main()
{
	struct node *a[10];
	for(int i=0;i<10;i++)
		a[i]=NULL;
	int op,ele;
	
	do{
		printf("1 for insert\n2 display\n3 finding\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:printf("enter element\n");
				scanf("%d",&ele);
				insert(&a[ele%10],ele);
			break;
			case 2:display(a);
				printf("\n");
			break;
			case 3:printf("enter element\n");
				scanf("%d",&ele);
				if(find(a[ele%10],ele))
				printf("found\n");
				else
				printf("not found\n");
			break;
		}
	}while(op!=4);
}
