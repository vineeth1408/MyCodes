#include<stdio.h>
#include<stdlib.h>
static int c=0;
struct node
{
	int ele;
	struct node *left;
	struct node *right;
};
struct node * insert(struct node *root)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter element to insert\n");
	scanf("%d",&newnode->ele);
	newnode->left=NULL;
	newnode->right=NULL;
	
	struct node *temp=root;
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
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->ele);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root!=NULL)
	{	
		printf("%d",root->ele);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->ele);
	}
}
int search(struct node *root,int key)
{	
	if(root!=NULL)
	{
		if(root->ele==key)
		{
			c=1;
			return;	
		}
		search(root->left,key);
		search(root->right,key);
	}
}
struct node * delete(struct node *root,int key)
{
	if(root==NULL)
	return root;
	
	if(key < root->ele)
	root->left=delete(root->left,key);
	
	else if(key > root->ele)
	root->right=delete(root->right,key);
	
	else
	{
		if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		struct node *temp=root->right;
		while(temp && temp->left!=NULL)
		temp=temp->left;
		
		root->ele=temp->ele;
		root->right=delete(root->right,temp->ele);	
	}
	return root;
}
void main()
{
	struct node *root=NULL;
	int op,k;
	do{	
		printf("\n");
		printf("1 insert\t2 inorder\t3 preorder\t4 post order\t5 search\t6 delete\t7 exit\n");
		printf("\n");
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
			case 5:
				printf("enter element to search\n");
				scanf("%d",&k);
				c=0;
				search(root,k);
				if(c==1)
				printf("found\n");
				else
				printf("not found\n");
			break;
			case 6:
				printf("enter element to delete\n");
				scanf("%d",&k);
				root=delete(root,k);
			break;
		}
	}while(op!=7);
}
