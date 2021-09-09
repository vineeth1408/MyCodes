#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct tbt
{
	struct tbt *left;
	struct tbt *right;
	int ele;
	bool l_thread;
	bool r_thread;
};
struct que
{
	struct tbt *a[10];
	int f,r;
};
void enque(struct que *q,struct tbt *temp)
{
	q->r++;
	q->a[q->r]=temp;
}
struct tbt* deque(struct que *q)
{	q->f++;
	struct tbt* newnode;
	newnode=q->a[q->f];
	return newnode;
}
struct tbt* insert(struct tbt*,int);
void inorder(struct tbt*);
void preorder(struct tbt*);
void postorder(struct tbt*);
void levelorder(struct tbt*);
struct tbt* max(struct tbt*);
struct tbt* min(struct tbt*);
int count(struct tbt*);
int find(struct tbt*,int);
void prime(struct tbt*);
struct tbt* delete(struct tbt*,int);
void main()
{	
	struct tbt *root=NULL;
	struct tbt *root1;
	int op,k;
	do{	printf("\n");
		printf("1 insert\n2 in-order\n3 pre-order\n4 post-order\n5 level-order\n6 count\n7 max\n8 min\n9 find\n10 prime\n11 delete\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("enter element to insert:");
				scanf("%d",&k);
				root=insert(root,k);
				printf("\n");
			break;
			case 2:inorder(root);
				break;
			case 3:preorder(root);
				break;
			case 4:postorder(root);
				break;
			case 5:levelorder(root);
			break;
			case 6:k=count(root);
				printf("count=%d\n",k);
			break;
			case 7:root1=max(root);
				printf("max=%d\n",root1->ele);
			break;
			case 8:root1=min(root);
				printf("min=%d\n",root1->ele);
			break;
			case 9:printf("enter element to find:");
				scanf("%d",&k);
				k=find(root,k);
				if(k==1)
				printf("found\n");
				else
				printf("not found\n");
			break;
			case 10:prime(root);
			break;
			case 11:printf("enter element to delete\n");
				scanf("%d",&k);
				root=delete(root,k);
			break;
		}
	}while(op!=12);
}
struct tbt* insert(struct tbt *root,int ele)
{
	struct tbt* newnode;
	newnode=(struct tbt*)malloc(sizeof(struct tbt));
	newnode->l_thread=true;
	newnode->r_thread=true;
	newnode->ele=ele;
	if(root==NULL)
	{
		root=newnode;
		newnode->right=newnode->left=NULL;
	}
	else
	{
		struct tbt *temp=root;
		while(1)
		{
			if(temp->ele > ele)
			{	
				if(temp->l_thread==false)
				{
					temp=temp->left;
				}
				else
				{	
					newnode->right=temp;
					newnode->left=temp->left;
					temp->left=newnode;
					temp->l_thread=false;
					break;
				}	
			}
			else
			{	
				if(temp->r_thread==false)
				{
					temp=temp->right;
				}
				else
				{	
					newnode->left=temp;
					newnode->right=temp->right;
					temp->right=newnode;
					temp->r_thread=false;
					break;
				}	
			}
		}
		
	}
return root;
}
void inorder(struct tbt *root)
{
	if(root)
	{
		if(!root->l_thread)
		     inorder(root->left);
		printf("%d ",root->ele);
		if(!root->r_thread)
			inorder(root->right);
		     
	}
}
void preorder(struct tbt *root)
{
	if(root)
	{	
		printf("%d ",root->ele);
		if(!root->l_thread)
		     preorder(root->left);
		if(!root->r_thread)
			preorder(root->right);
	}
}
void postorder(struct tbt *root)
{
	if(root)
	{	
		if(!root->l_thread)
			postorder(root->left);
		if(!root->r_thread)
			postorder(root->right);
		printf("%d ",root->ele);
	}

}
 
void levelorder(struct tbt* root)
{
	if(root==NULL)
	printf("nothing\n");
	else
	{
		struct tbt *temp;
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		enque(q,root);
		while(q->f!=q->r)
		{
			temp=deque(q);
			printf("%d\t",temp->ele);
			if(temp->l_thread!=true)
			enque(q,temp->left);
			if(temp->r_thread!=true)
			enque(q,temp->right);
		}
		
	}
}
int count(struct tbt *root)
{
	 static int c=0;
	if(root!=NULL)
	{
		if(root->l_thread!=true)
		count(root->left);
		c++;
		if(root->r_thread!=true)
		count(root->right);
	}
return c;
}
struct tbt* max(struct tbt *root)
{	
	if(root==NULL)
		printf("no elements\n");
	else
	{
		while(root->r_thread==false)
		{
			root=root->right;
		}
	}
return root;
}

struct tbt* min(struct tbt *root)
{	
	if(root==NULL)
		printf("no elements\n");
	else
	{
		while(root->l_thread==false)
		{
			root=root->left;
		}
	}
return root;
}
int find(struct tbt *root,int k)
{
	if(root!=NULL)
	{
		if(!root->l_thread)
		find(root->left,k);
		if(k==root->ele)
		return 1;
		if(!root->r_thread)
		find(root->right,k);
	}
}
void prime(struct tbt *root)
{
	if(root)
	{
		if(!root->l_thread)
		prime(root->left);
		if(root->ele)
		{	int c=1;
			int k=0;
			while(c<=root->ele)
			{
				if(root->ele%c==0)
				{
					k++;
				}
				c++;
			}
			if(k==2)
			printf("%d\t",root->ele);
		}
		if(!root->r_thread)
		prime(root->right);	
	}
}	
struct tbt* delete(struct tbt* root,int key)
{	struct tbt* temp=root;
	struct tbt *parent=temp,*temp1;
	int k;
	int flag=0;
	while(temp->ele!=key)
	{	
		parent=temp;
		if(temp->ele >key)
		temp=temp->left;
		else
		temp=temp->right;
	}
	if(temp->l_thread==true && temp->r_thread==true)   //has no child leaf node
	{
		if(root==temp)
		root=NULL;
	
	       else
	       { 
	       		if(parent->ele < temp->ele)     //know whether the leaf node is on right
			{
				parent->right=temp->right;
				parent->r_thread=true;
				free(temp);
			}
			else
			{
				parent->left=temp->left;
				parent->l_thread=true;
				free(temp);
			}
		}
	}
	else if(temp->r_thread==true)    //has only one child and it is on left
	{	
		temp1=temp->left;
		while(temp1->r_thread!=true)
		{
			temp1=temp1->right;
		}
		if(temp==root)
		{
			root=temp->left;
			temp1->right=NULL;
		}
		else
		{
			if(parent->left==temp)
			{
				parent->left=temp->left;
				temp1->right=temp->right;
			}
			else
			{
				parent->right=temp->left;
				temp1->right=temp->right;
			}
		}
		free(temp);
	}
	else if(temp->l_thread==true)     //has only one child and it is on right
	{
		temp1=temp->right;
		while(temp1->l_thread!=true)
		{
			temp1=temp1->left;
		}
		if(temp==root)
		{
			root=temp->right;
			temp1->left=NULL;
		}
		else
		{
			if(parent->right==temp)
			{
				parent->right=temp->right;
				temp1->left=temp->left;
			}
			else
			{
				parent->left=temp->right;
				temp1->left=temp->left;
			}
		}
		free(temp);	
	}
	else if(temp->l_thread!=true && temp->r_thread!=true)
	{
		temp1=temp->right;
		while(temp1->l_thread!=true)
		temp1=temp1->left;
		
		k=temp->ele;
		root=delete(root,temp1->ele);
		temp->ele=k;
		free(temp1);
	}
return root;	
}
		
	
	
