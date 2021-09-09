#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *left;
	struct node *right;
};
struct node * create()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter element to insert\n");
	scanf("%d",&newnode->ele);
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node * insert(struct node *root)
{
	struct node *newnode;
	struct node *temp=root;
	newnode=create();
	if(root==NULL)
	root=newnode;
	else
	{
		while(1)
		{
			if(newnode->ele < temp->ele)
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
void inorder(struct node *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d\t",root->ele);
		inorder(root->right);
	}
}

void preorder(struct node *root)
{
	if(root)
	{
		printf("%d\t",root->ele);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->ele);
	}
}
struct node * newnode(int ele)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->ele=ele;
	return newnode;
}
struct node *insert_rec(struct node *root,int ele)
{
	if(root==NULL)
	return newnode(ele);
	
	else if(ele < root->ele)
	root->left=insert_rec(root->left,ele);
	
	else
	root->right=insert_rec(root->right,ele);
return root;
}
void main()
{
	struct node *root=NULL;
	int op,ele;
	do{
		printf("1 insert\n2 in order\n3 pre order\n4 post order\n5 insert using recursion\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				root=insert(root);
			break;
			case 2:inorder(root);
			break;
			case 3:preorder(root);
			break;
			case 4:postorder(root);
			break;
			case 5:printf("enter element to insert\n");
					scanf("%d",&ele);
			root=insert_rec(root,ele);
			break;
		}
	}while(op!=6);
}
