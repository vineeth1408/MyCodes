#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int ele;
	struct node *right;

};
int max(int a,int b)
{
	return (a>b)?a:b;
}
struct que
{
	struct node *a[100];
	int r,f,n;	
};

void enque(struct que*q,struct node *temp)
{
	q->r++;
	q->a[q->r]=temp;
}

struct node* deque(struct que *q)
{	
	q->f++;
	struct node *newnode=q->a[q->f];
	return newnode;
}

struct node* insert(struct node* root)
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->left=NULL;
	newnode->right=NULL;
	printf("enter element\n");
	scanf("%d",&newnode->ele);
	
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		struct que *q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=10;
		enque(q,root);
		while(q->f!=q->r)
		{
			temp=deque(q);
			if(temp->left!=NULL)
			enque(q,temp->left);
			else
			break;
			if(temp->right!=NULL)
			enque(q,temp->right);
			else
			break;	
		}
		if(temp->left==NULL)
		temp->left=newnode;
		else
		temp->right=newnode;
	}
return root;
}

void display(struct node *root)
{	
	struct node *newnode;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(q);
		printf("%d ",newnode->ele);
			
		if(newnode->left!=NULL)
		{
			enque(q,newnode->left);
		}
		if(newnode->right!=NULL)
		{
			enque(q,newnode->right);
		}
	}
	printf("printing done\n");	
	}
}

struct node*  heapify(struct node *root)
{
	struct node *temp;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		int flag=1;
	while(flag)
 	{	
 		flag=0;
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(q,root);
		while(q->f!=q->r)
		{	
			
			temp=deque(q);
			if(temp->ele)
			{	printf("working\n");
			  if(temp->left && temp->right)    //not equals to NULL
				{
					if(temp->ele < temp->left->ele || temp->ele < temp->right->ele)
				 	       {
						if(max(temp->left->ele,temp->right->ele)==temp->left->ele)
							{	
								temp->ele=temp->ele + temp->left->ele-(temp->left->ele=temp->ele);
								flag=1;
							}
						else
							{
								temp->ele=temp->ele + temp->right->ele-(temp->right->ele=temp->ele);
								flag=1;
							}
						
						}
				}
			 else if(temp->left)
				{
					if(temp->ele < temp->left->ele)
						{	
							temp->ele=temp->ele + temp->left->ele-(temp->left->ele=temp->ele);
							flag=1;
						}
					else
						break;
				}
			else
				break;
					
			}
			if(temp->left!=NULL)
			{	
				enque(q,temp->left);
			}
			if(temp->right!=NULL)
			{
				enque(q,temp->right);
			}
			
		}
		
	}
	
 }
return root;
}

struct node* delete(struct node *root)
{
	struct node *newnode,*temp=root;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->left=NULL;
	newnode->right=NULL;
	printf("enter element\n");
	scanf("%d",&newnode->ele);
	struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(q,root);
	while(q->f!=q->r)
	{
		if(temp->left!=NULL)
		temp=temp->left;
		else
		temp=temp->right;
	}
	if(temp->left==NULL)
	temp->left=newnode;rg
	else
	temp->right=newnode;
}

void main()
{
	struct node *root=NULL;
	int op;
	while(1)
	{
		printf("1 insert 2 heap 3 dispaly 4 exit 5 insert after heapify\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:root=insert(root);
				break;
			case 2:root=heapify(root);
				break;
			case 3:display(root);
				break;
			case 4:exit(1);	
			break;
			case 5:root=delete(root);
			break;
			
		}
	}
}

