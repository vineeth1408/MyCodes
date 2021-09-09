#include<stdio.h>
#include<stdlib.h>
struct node
{
int ele;
struct node *next;
};
struct node*insert(struct node *);
void evenp(struct node*);
void oddp(struct node*);
void display(struct node*);
void main()
{
int n,opt;
struct node *head=NULL;
printf("enter the size");
scanf("%d",&n);
do
{
printf("1.insert\n 2.evenp\n 3.oddp\n 4.display\n 5.exit");
scanf("%d",&opt);
switch(opt)
{
case 1:
head=insert(head);
break;
case 2:
 evenp(head);
 break;
 case 3:
 oddp(head);
 break;
 case 4:
 display(head);
 break;
 case 5:
 exit(0);
 break;
 }
 }while(opt!=5);
 }
 struct node*insert(struct node *head)
 {
int e;
struct node*temp=head,*temp1;
temp1=(struct node*)malloc(sizeof(struct node));
printf("enter the element");
scanf("%d",&e);
temp1->ele=e;
printf("%d",temp1->ele);
temp1->next=NULL;
if(head==NULL)
{
head=temp1;
return(head);
}
else
{
temp1->next=temp;
head=temp1;
return(head);
}
}
void evenp(struct node*head)
{
int c=0;
struct node *temp=head;
while(temp!=NULL)
{
c++;
   if(c%2==0)
   {
   printf("%d\t",temp->ele);
   }
   temp=temp->next;
}
}
void oddp(struct node *head)
{
int c=0;
struct node *temp=head;
while(temp!=NULL)
{
c++;
   if(c%2==1)
   {
   	printf("%d\t",temp->ele);
   }
	   temp=temp->next;
   }
}
void display(struct node *head)
{
 while(head!=NULL)
 {
	printf("%d\t",head->ele);
	head=head->next;
 }
}
 



