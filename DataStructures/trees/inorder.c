#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	struct treenode *left;
	int ele;
	struct treenode *right;	
};
struct stack
{
	struct treenode *a[10];
	int top;
};
struct treenode* insert(struct treenode *root)
{	
	int ele;
	struct treenode *temp,*newnode;
	newnode=(struct treenode*)malloc(sizeof(struct treenode));
	newnode->left=NULL;
	newnode->right=NULL;
	printf("enter element\n");
	scanf("%d",&ele);
	newnode->ele=ele;
	if(root==NULL)
	root=newnode;
	else
	{	temp=root;
		while(1)
		{
			if(temp->ele > ele)
				{
					if(temp->left==NULL)
					{	
						temp->left=newnode;
						break;
					}	
					else
					temp=temp->left;
				}
			else
			{
				if(temp->right==NULL)
				{
					temp->right=newnode;
					break;
				}				
				else
				temp=temp->right;
			}
			
		}
	}
return root;
}
void inorder(struct treenode *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->ele);
		inorder(root->right);
	}
}

void push(struct stack **s,struct treenode *temp)
{
	(*s)->top++;
	(*s)->a[(*s)->top]=temp;
}

struct treenode* pop(struct stack **s)
{
	(*s)->top--;
	struct treenode *newnode=(*s)->a[(*s)->top+1];
	return newnode;
}

int isempty(struct stack **s)
{
	if((*s)->top==-1)
	return 1;
	else
	return 0;
}
void inorder_without_recursion(struct treenode *root)
{
	int end=0;
	struct treenode *current=root;
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	while(end!=1)
	{
		if(current)
		{
			push(&s,current);
			current=current->left;
		}
		if(current==NULL)
		{
			if(isempty(&s)!=1)
			{
				current=pop(&s);
				printf("%d\t",current->ele);
				current=current->right;
			}
			else
			end=1;
		}
	}
}
void preorder(struct treenode* root)
{
	if(root)
	{
		printf("%d\t",root->ele);
		preorder(root->left);
		preorder(root->right);
	}
}
void preorder_without_recursion(struct treenode *root)
{
	struct treenode *current=root;
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	int end=0;
	while(end!=1)
	{
		if(current)
		{
				printf("%d\t",current->ele);
				push(&s,current);
				current=current->left;
		}
		if(current==NULL)
		{
				if(!isempty(&s))
				{
					current=pop(&s);
					current=current->right;
				}				
				else
				end=1;
		}
	}
}
void postorder(struct treenode *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->ele);
	}
}
void postorder_without_recursion(struct treenode *root)
{
	struct treenode *current=root;
	struct treenode *temp=root;
	struct stack *s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	int end=0;
	while(end!=1)
	{
		if(current->left!=NULL)
		{
			push(&s,current);
			current=current->left;		
		}
		else
		{
			push(&s,current);
			current=current->right;	
		}
		
	}
}
void main()
{	
	struct treenode*root=NULL;
	int op;
	do{	printf("\n");
	printf("1 insert\n2 inorder with recursion\n3 inorder without recursion\n4 preorder\n5 pre-order without recursion\n6 post-order with recursion\n7 post-order without recursion\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:root=insert(root);
		break;
		case 2:inorder(root);
		break;
		case 3:inorder_without_recursion(root);
		break;
		case 4:preorder(root);
		break;
		case 5:preorder_without_recursion(root);
		break;
		case 6:postorder(root);
		break;
		case 7:postorder_without_recursion(root);
		break;	
	}

	}while(op!=8);
}
