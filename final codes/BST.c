#include<stdio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *left;
	struct node *right;
};
struct node* insert(struct node *root)
{
	struct node *newnode=(struct node*) malloc(sizeof(struct node));
	newnode->left =NULL;
	newnode->right=NULL;
	printf("enter element \n");
	scanf("%d",&newnode->ele);
	
	struct node *temp=root;
	if(root==NULL)
	{
		root=newnode;
	}
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

void search(struct node *root,int key)
{
	if(root!=NULL)
	{
		if(root->ele==key)
		{
			printf("found\n");
			return ;
		}
		search(root->left,key);
		search(root->right,key);
	}
}
struct node * Delete(struct node *root,int key)
{
	if(root==NULL)
	return root;
	if(key < root->ele)
	root->left = Delete(root->left,key);
	else if(key > root->right)
	root->right = Delete(root->right,key);
	else
	{
		if(root->left==NULL)
		{
			struct node * temp =root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node * temp =root->left;
			free(root);
			return temp;
		}
		else
		{
			struct node *temp= root->right;
			while(temp &&
			 temp->left!=NULL)
			{
				temp=temp->left;
			}
			root->ele=temp->ele;
			root->right =Delete(root->right,key);
		}
	}
return root;
} 
void main()
{
	struct node *head=NULL;
	
	int op,key;
	do{
		printf("1 insert \t 2 delete \t 3 Inorder \t 4 Preorder \t 5 Postorder \t 6 Search \t 7 exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: head=insert(head);
			break;
			case 2:printf("enter key to delete\n");
			scanf("%d",&key); 
			head=Delete(head,key);
			break;
			case 3: inorder(head);
			break;
			case 4: preorder(head);
			break;
			case 5: postorder(head);
			break;
			case 6:printf("enter the key to search\n");
					scanf("%d",&key);
			 search(head,key);
			break;
			default: printf("invalid\n");
		}
	}while(op!=7);
}
