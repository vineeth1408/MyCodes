#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int c=0;
struct node* insert(struct node *third)
{
	int ele;
	printf("Enter element to add\n");
	scanf("%d",&ele);
	struct node *temp,*n;
	n=(struct node*)malloc(sizeof(struct node));
	temp=third;
	temp->next=n;
	n->data=ele;
	n->next=NULL;
	c++;
	return n;
}
void main()
{
	struct node *head,*second,*third;
        int op,ele;
	head=(struct node*)malloc(sizeof(struct node));
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;

	second->data=2;
	second->next=third;

	third->data=3;
	third->next=NULL;
	do{	
	printf("1 for insert:\n");	
	scanf("%d",&op);	
	
	switch(op)
	{
		case 1: 
			
			third=insert(third);
			
			
		break;
	}
}while(op!=2);
printf("%d",c);
}
