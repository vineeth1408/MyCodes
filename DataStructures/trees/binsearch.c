#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	struct treenode *left;
	int ele;
	struct treenode *right;
};
int maximum(int a,int b)
{
	return ((a>b)?a:b);
}
int search_recursion(struct treenode *root,int ele)
{
	if(root==NULL)
	return 0;
	else
	{
		if(ele==root->ele)
		return 1;
		else
		search_recursion(root->left,ele);
		search_recursion(root->right,ele);
	}
}
void deletetree(struct treenode *root)
{
	if(root==NULL)
	return;
	deletetree(root->left);
	deletetree(root->right);
	free(root);
	
}
int search(struct treenode *root,int ele)
{
	if(root)
	{
		search(root->left,ele);
		if(ele==root->ele)
		return 1;
		search(root->right,ele);
	}
}
int sum1(struct treenode *root)
{
	if(root==NULL)
	return ;
	return (root->ele+sum1(root->left)+sum1(root->right));
}
void succ(struct treenode *root)
{
	struct treenode *find;
	struct treenode *temp=root;
	int ele,op;
	printf("enter the element to find\n");
	scanf("%d",&ele);
	printf("1 for pre\n2 for successor\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:while(1)
				{
					if(temp->ele==ele)
					{
						find=temp;
						break;	
					}
					if( ele < temp->ele)
					{
						if(temp->left!=NULL)
						{
							temp=temp->left;
						}
					}
					else
					{
						if(temp->right!=NULL)
						{
							temp=temp->right;
						}
					}
				}
				struct treenode *temp2=find->left;
				while(temp2->right!=NULL)
				temp2=temp2->right;	
				
			printf("%d\n",temp2->ele);
			break;
			
			case 2:while(1)
				{
					if(temp->ele==ele)
					{
						find=temp;
						break;	
					}
					if( ele < temp->ele)
					{
						if(temp->left!=NULL)
						{
							temp=temp->left;
						}
					}
					else
					{
						if(temp->right!=NULL)
						{
							temp=temp->right;
						}
					}
				}
				struct treenode *temp3=find->right;
				while(temp3->left!=NULL)
				temp2=temp3->left;	
				
			printf("%d\n",temp3->ele);
			break;
		
	}
}
struct treenode* insert(struct treenode*);
void inorder(struct treenode*,int*);
void preorder(struct treenode*);
void postorder(struct treenode*);
void find(struct treenode*);
struct treenode* max(struct treenode*);
struct treenode* min(struct treenode*);
void sumofleafnodes(struct treenode*,int*);
int totalnodes(struct treenode*);
int height(struct treenode* root);
struct treenode* delete(struct treenode*,int);
void pre(struct treenode*,int );
void pre_suc(struct treenode *,struct treenode**,struct treenode**,int);
void inorder_pre(struct treenode *,struct treenode**,struct treenode**,int);
void main()
{	
	struct treenode *root=NULL;
	struct treenode *pre1=NULL;
	struct treenode *suc=NULL;
	
	int op,k,ele1,ele2;
	int sum=0;
	do{	printf("\n");
	printf("choose option\n1 insert\n2 inorder\n3 preorder\n4 postorder\n5 find\n6 max\n7 min\n9 exit\n8 sum of leaf nodes\n9 total nodes\n10 height\n11 searching using recursoin\n12 delete tree\n13 deep node\n13 delete using recursion\n14 predecessor\n15 using inorder pre and suc\n17 lca\n18 sum usig recursion\n19 suc\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:root=insert(root);
		break;
		case 2:inorder(root,&sum);
			printf("%d\n",sum);
			sum=0;
		break;
		case 3:preorder(root);
		break;
		case 4:postorder(root);
		break;
		case 5:find(root);
		break;
		case 6:root=max(root);
			printf("%d\n",root->ele);
		break;
		case 7:root=min(root);
			printf("%d\n",root->ele);
		break;
		case 8:sumofleafnodes(root,&sum);
		printf("%d\n",sum);
		break;
		case 9:k=totalnodes(root);
			printf("%d\n",k);
		break;
		case 10:k=height(root);
			printf("%d",k);
		case 11:printf("enter the element to foudn\n");
			scanf("%d",&k);
			k=search_recursion(root,k);
			if(k==1)
			printf("found\n");
			else
			printf("not found\n");
		case 12:deletetree(root);
		break;
		case 13:printf("enter the element to delete\n");
			scanf("%d",&k);
			root=delete(root,k);
		break;
		case 14:printf("enter the element\n");
			scanf("%d",&k);
			pre(root,k);
			break;
		case 15:printf("enter the element\n");
			scanf("%d",&k);
			pre_suc(root,&pre1,&suc,k);
			if(pre1!=NULL)
			printf("pre=%d\n",pre1->ele);
			else
			printf("no pre\n");
			if(suc!=NULL)
			printf("suc=%d\n",suc->ele);
			else
			printf("no suc");
			break;
		case 16:printf("enter the element\n");
			scanf("%d",&k);
			inorder_pre(root,&pre1,&suc,k);
			if(pre1!=NULL)
			printf("pre=%d\n",pre1->ele);
			else
			printf("no pre\n");
			if(suc!=NULL)
			printf("suc=%d\n",suc->ele);
			else
			printf("no suc");
			break;
		case 17:printf("enter element 1\n");
			scanf("%d",&ele1);
			printf("enter element 2\n");
			scanf("%d",&ele2);
			k=lca(root,ele1,ele2,k);
			printf("lca=%d\n",k);
		break;
		case 18:k=sum1(root);
			printf("%d\n",k);
		break;
		case 19:succ(root);
		break;
	}
	}while(op!=20);
}
struct treenode* insert(struct treenode* root)
{
	struct treenode *newnode,*temp;
	newnode=(struct treenode*)malloc(sizeof(struct treenode));
	newnode->right=NULL;
	newnode->left=NULL;
	temp=root;
	int ele;
	printf("enter element\n");
	scanf("%d",&ele);
	newnode->ele=ele;
	if(root==NULL)
	root=newnode;
	else
	{
		while(1)
		{
			if(temp->ele >ele)
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
void inorder(struct treenode *root,int *sum)
{
	if(root!=NULL)
	{
		inorder(root->left,sum);
		*sum=*sum+root->ele;
		inorder(root->right,sum);
	}
}
void preorder(struct treenode* root)
{
	if(root!=NULL)
	{	
		printf("%d\t",root->ele);
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
	printf("enter element to find\n");
	scanf("%d",&k);
	temp=root;
	while(1)
	{
		if(temp->ele > k)
		{
			if(temp->ele==k)
			{
				flag=1;
				break;
			}
			else
			temp=temp->left;
		}
		else
		{
			if(temp->ele==k)
			{
				flag=1;
				break;				
			}
			else
			temp=temp->right;
			
		}
	}
if(flag==1)
printf("found\n");
else
printf("not found\n");
}
struct treenode* max(struct treenode *root)
{	
	
	
		if(root->right==NULL||root==NULL)
		return root;
		else
		{		
			max(root->right);
		}
	
}
struct treenode* min(struct treenode *root)
{	
	
	
		if(root==NULL||root->left==NULL)
		return root;
		else
		min(root->left);
}

void sumofleafnodes(struct treenode *root,int *sum)
{
	if(root)
	{
		sumofleafnodes(root->left,sum);
		if(root->left==NULL && root->right==NULL)
		{
			*sum=*sum+root->ele;
		}
		sumofleafnodes(root->right,sum);
	}
}
int totalnodes(struct treenode *root)
{
	if(root==NULL)
	return 0;
	else
	return (totalnodes (root->left) + totalnodes(root->right) +1);
}	
int height(struct treenode* root)
{
	if(root==NULL)
	return 0;
	else
	return (1+maximum(height(root->left),height(root->right)));
	
}
struct treenode* delete(struct treenode* root,int key)
{
	if(root==NULL)
	return NULL;
	if(key <root->ele)
	root->left=delete(root->left,key);
	else if(key >root->ele)
	root->right=delete(root->right,key);
	else
	{
		if(root->left==NULL)
		{
			struct treenode* tem=root->right;
			free(root);
			return temp;
			
		}
		else if(root->right==NULL)
		{
			struct treenode* temp=root->left;
			free(root);
			return temp;
		}
		struct treenode*temp1=root->right;
		while(temp1&&temp1->left!=NULL)
		temp1=temp1->left;
		
		root->ele=temp1->ele;
		root->right=delete(root->right,temp1->ele);
	}	
return root;
}
void pre(struct treenode *root,int key)
{	
	struct treenode* temp1;
	if(root)	
	{
		pre(root->left,key);
		if(root->ele==key)
		{
			temp1=root->right;
			while(temp1 && temp1->left!=NULL)
			temp1=temp1->left;
			printf("%d",temp1->ele);
			
		}
		pre(root->right,key);
	}
}
void pre_suc(struct treenode *root,struct treenode **pre,struct treenode **suc,int key)
{	
	
	if(root==NULL)
	return ;
	if(root->ele ==key)
	{
		if(root->left!=NULL)
		{
			struct treenode* temp=root->left;
			while(temp->right!=NULL)
			temp=temp->right;
			
			(*pre)=temp;
		}
		if(root->right!=NULL)
		{
			struct treenode* temp=root->right;
			while(temp->left!=NULL)
			temp=temp->left;
			
			(*suc)=temp;	
		}
		return;	
	}
	if(root->ele >key)
	{
		(*suc)=root;
		pre_suc(root->left,pre,suc,key);
		
	}
	else
	{
		(*pre)=root;
		pre_suc(root->right,pre,suc,key);
	}
}
void inorder_pre(struct treenode *root,struct treenode **pre,struct treenode **suc,int key)
{
	if(root==NULL)
	return;
	inorder_pre(root->left,pre,suc,key);
	if(root && root->ele >key)
	{
		if((*suc)==NULL || (*suc) && (*suc)->ele > root->ele)
		(*suc)=root;
		else if(root && root->ele < key)
		(*pre)=root;
	}	
		inorder_pre(root->right,pre,suc,key);
}
int lca(struct treenode *root,int ele1,int ele2,int l)
{	
	
	if(root)
	{	if(search(root,ele1)&& search(root,ele2))
		{
			l=root->ele;
		}
		lca(root->left,ele1,ele2,l);
		lca(root->right,ele1,ele2,l);
	}
	return l;
}
