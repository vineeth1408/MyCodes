#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	struct treenode *left;
	int ele;
	struct treenode *right;
};
struct treenode* insert(struct treenode*);
void display(struct treenode*);
void max(struct treenode*);
void min(struct treenode*);
void search(struct treenode*);
void inorder(struct treenode*);
void preorder(struct treenode*);
void postorder(struct treenode*);
void find(struct treenode*);
struct treenode* delete(struct treenode*,int);
void main()
{
	struct treenode *root=NULL;
	int op,k;
	do{
		printf("Enter option\n1 INSERT\n2 DISPALY\n3 MAX\n4 MIN\n5 SEARCH\n6 IN-ORDER\n7 PRE-ORDER\n8 POST-ORDER\n9 FIND\n10 DELETE\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:root=insert(root);
			break;
			case 2:display(root);
			break;
			case 3:max(root);
			break;
			case 4:min(root);
			break;
			case 5:search(root);
			break;
			case 6:inorder(root);
			break;
			case 7:preorder(root);
			break;
			case 8:postorder(root);
			break;
			case 9:find(root);
			break;
			case 10:printf("enter element to delete\n");
				scanf("%d",&k);
			root=delete(root,k);
			break;
		}
	}while(op!=11);
}
struct treenode* insert(struct treenode* root)
{
	struct treenode *temp,*newnode;
	int ele;
	newnode=(struct treenode*)malloc(sizeof(struct treenode));
	temp=root;
	printf("Enter element\n");
	scanf("%d",&ele);
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->ele=ele;
	if(root==NULL)
	root=newnode;
	else
	{
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
				{
					temp=temp->left;
				}
			}
			else
			{
				if(temp->right==NULL)
				{
					temp->right=newnode;
					break;
				}
				else
				{
					temp=temp->right;
				}
			}
		}
	}
return root;
}
void display(struct treenode *root)
{
	struct treenode *temp;
	temp=root;
	if(root==NULL)
	printf("nothing to display\n");
	else
	{
		while(1)
		{	
			printf("%d\t",temp->ele);
			if(temp->left==NULL&&temp->right==NULL)
			{
				break;
			}
			if(temp->left!=NULL)
			temp=temp->left;
			if(temp->right!=NULL)
			temp=temp->right;	
		}
		printf("\n");
	}
}
void max(struct treenode *root)
{
	struct treenode*temp;
	temp=root;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		while(1)
		{
			if(temp->right!=NULL)
			temp=temp->right;
			else
			{
				printf("max=%d\n",temp->ele);
				break;
			}
		}
	}
}
void min(struct treenode *root)
{
	struct treenode*temp;
	temp=root;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		while(1)
		{
			if(temp->left!=NULL)
			temp=temp->left;
			else
			{
				printf("min=%d\n",temp->ele);
				break;
			}
		}
	}
}
void search(struct treenode*root)
{
	if(root==NULL)
	printf("not found\n");
	else
	{
		struct treenode *temp;	
		temp=root;
		int k;
		printf("Enter element to find\n");
		scanf("%d",&k);
		while(1)
		{	if(temp->ele==k)
			{	printf("element found\n");
				printf("\n");
				break;
			}
			if(temp->left==NULL && temp->right==NULL)
			{
				break;
			}
			if(temp->left!=NULL)
			temp=temp->left;
			if(temp->right!=NULL)
			temp=temp->right;
		}
	}
}
void inorder(struct treenode*root)
{
	if(root!=NULL)
	{

		inorder(root->left);
		printf("%d",root->ele);
		inorder(root->right);
	}
}
void preorder(struct treenode*root)
{
	if(root!=NULL)
	{

		printf("%d",root->ele);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct treenode *root)
{
	if(root!=NULL)
	{

		postorder(root->left);
		postorder(root->right);
		printf("%d",root->ele);
	}
}
void find(struct treenode *root)
{
	struct treenode *temp;
	int k,flag=0;
	temp=root;
	if(root==NULL)
	printf("no\n");
	else
	{	printf("enter element to find\n");
		scanf("%d",&k);
		while(1)
		{
			if(temp->ele==k)
			{
				flag=1;
				break;
			}
			if(temp->ele>k)
			{
				if(temp->left==NULL)
				{
					break;
				}
				else
				temp=temp->left;
			}
			else
			{
				if(temp->right==NULL)
				{
					break;
				}
				else
				temp=temp->right;
			}
		}	
	}
	if(flag==1)
	printf("found\n");
	else
	printf("not found\n");
}
struct treenode* delete(struct treenode *root,int key)
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
			struct treenode *temp=root->right;
			free(root);
			return temp;	
		}
		else if(root->right==NULL)
		{
			struct treenode *temp=root->left;
			free(root);
			return temp;
		}
		struct treenode *temp1=root->right;
		while(temp1 && temp1->left!=NULL)
		temp1=temp1->left;
		
		root->ele=temp1->ele;

		root->right=delete(root->right,temp1->ele);
	}
		
return root;
}






















