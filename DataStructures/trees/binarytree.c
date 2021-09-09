#include<stdio.h>
#include<stdlib.h>
struct treenode
{
	int ele;
	struct treenode *left;
	struct treenode *right;
};
struct que
{
	struct treenode *a[100];
	int f,r,n;
};
struct stack
{
	struct treenode *a[20];
	int top;
};
struct treenode* insert(struct treenode*,int);
void display(struct treenode*);
void enque(struct que **,struct treenode *);
struct treenode* deque(struct que**);
int find(struct treenode*,int );
int even(struct treenode*);
int count(struct treenode*);
int odd(struct treenode*);
void prime(struct treenode*);
int max(struct treenode*);
struct treenode* min(struct treenode*);
struct treenode* delete(struct treenode*,int);
struct treenode* findparent(struct treenode*,struct treenode*);
int height(struct treenode*);
struct treenode* deepnode(struct treenode *);
int no_of_leaf_nodes(struct treenode *);
int total_sum(struct treenode*);
struct treenode* mirror(struct treenode *);
void reverse(struct treenode*);
void inorder(struct treenode*);
int max_in_recursion(struct treenode*);
int min_in_recursion(struct treenode*);
void sum_levels(struct treenode*);
void delete_tree(struct treenode*);
void main()
{
	struct treenode *root=NULL;
	int op,k;
	do{
		printf("choose option\n1 INSERT\t2 DISLPAY \t3 FIND\t4 EVEN\t5 COUNT\t6 ODD\t7 PRIME\t8 MAX\t9 MIN\t10 DELETE\t11 HEIGHT\n12 DEEP NODE\n13 NO OF LEAF NODES AND SUM\n14 TOTAL_SUM\n15 MIRROR\n16 REVERSE\n17 INORDER\n18 MAX IN RECURSION\n19 MIN IN RECURSION\n20 SUM OF LEVELS\n21 DELETE A BINARY TREE\n");
		printf("\n");		
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("enter element\n");
				scanf("%d",&k);
				root=insert(root,k);
			break;
			case 2:display(root);
			break;
			case 3:printf("Enter element to find\n");
				scanf("%d",&k);
				k=find(root,k);
				if(k==1)
				printf("found\n");
				else
				printf("not found\n");
			break;
			case 4:even(root);
			break;
			case 5:k=count(root);
				printf("nodes=%d\n",k);
			break;
			case 6:odd(root);
			break;
			case 7:prime(root);
			break;
			case 8:k=max(root);
				printf("max=%d\n",k);
			break;
			case 9:root=min(root);
				printf("min=%d\n",root->ele);
			break;
			case 10:printf("enter the element to delete\n");
				scanf("%d",&k);
				root=delete(root,k);
			break;
			case 11:k=height(root);
				printf("%d\n",k);
			break;
			case 12:root=deepnode(root);
				printf("%d\n",root->ele);
			break;
			case 13:k=no_of_leaf_nodes(root);
				printf("%d\n",k);
			break;
			case 14:k=total_sum(root);
				printf("%d\n",k);
				break;
			case 15:root=mirror(root);
			break;
			case 16:reverse(root);
			break;
			case 17:inorder(root);
			break;
			case 18:k=max_in_recursion(root);
				printf("%d",k);
				break;
			case 19:k=min_in_recursion(root);
				printf("%d",k);
				break;
			case 20:sum_levels(root);
				break;
			case 21:delete_tree(root);
				break;
		}
	}while(op!=22);
}

struct treenode* insert(struct treenode *root,int ele)
{
	struct treenode *newnode,*temp1;
	newnode=(struct treenode*)malloc(sizeof(struct treenode));  //newnode=newnode and temp1 for traversing
	newnode->ele=ele;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	root=newnode;
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=10;
		enque(&q,root);
		while(q->f!=q->r)
		{
			temp1=deque(&q);
			if(temp1->left!=NULL)
			{
				enque(&q,temp1->left);
			}
			elseA
			{
				break;
			}
			if(temp1->right!=NULL)
			{
				enque(&q,temp1->right);
			}	
			else
			{
				break;
			}
		}
			
		if(temp1->left==NULL)
		{
			temp1->left=newnode;
		}		
		else
		{	
			temp1->right=newnode;
		}
	}
return root;
}
void enque(struct que **q,struct treenode *newnode)
{
	(*q)->r++;
	(*q)->a[(*q)->r]=newnode;
}
struct treenode* deque(struct que **q)
{	
	(*q)->f++;
	struct treenode *newnode=(*q)->a[(*q)->f];
	return newnode;
}
void display(struct treenode *root)
{	
	struct treenode *newnode;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		printf("%d ",newnode->ele);
			
		if(newnode->left!=NULL)
		{
			enque(&q,newnode->left);
		}
		if(newnode->right!=NULL)
		{
			enque(&q,newnode->right);
		}
	}
	printf("printing done\n");	
	}
}
int find(struct treenode *root,int k)
{
	struct treenode *newnode;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele==k)
		 return 1;
		else
		{ 
			if(newnode->left!=NULL)
			{
				enque(&q,newnode->left);
			}
			if(newnode->right!=NULL)
			{
				enque(&q,newnode->right);
			}
		}
	}
	}
}
int even(struct treenode *root)
{
	struct treenode *newnode;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele%2==0)
		{
			printf("%d ",newnode->ele);
		}
			if(newnode->left!=NULL)
			{	
				enque(&q,newnode->left);
			}
			if(newnode->right!=NULL)
			{
				enque(&q,newnode->right);
			}
	}

	}
}
int count(struct treenode *root)
{
	struct treenode *newnode;
	int c=0;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	c++;
		newnode=deque(&q);
		if(newnode->left!=NULL)
		enque(&q,newnode->left);
		if(newnode->right!=NULL)
		enque(&q,newnode->right);
	}
	}
return c;
}
int odd(struct treenode *root)
{
	struct treenode *newnode;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele%2!=0)
		{
			printf("%d ",newnode->ele);
		}
		if(newnode->left!=NULL)
		{	
			enque(&q,newnode->left);
		}
		if(newnode->right!=NULL)
		{
			enque(&q,newnode->right);
		}
	}

	}
}
void prime(struct treenode* root)
{
	struct treenode *newnode;
	int i,c=0;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele)
		{
			for(i=1;i<=(newnode->ele);i++)
			{
			if(newnode->ele%i==0)
				{
					c++;
				}
			}
			if(c==2)
			printf("%d\t",newnode->ele);
		}
			if(newnode->left!=NULL)
			{	
				enque(&q,newnode->left);
			}
			if(newnode->right!=NULL)
			{
				enque(&q,newnode->right);
			}
		c=0;
	}
	printf("\n");
	}
}
int max(struct treenode *root)
{
	struct treenode *newnode;
	int k=1;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele)
		{
			if(newnode->ele > k)
			k=newnode->ele;
		}
		if(newnode->left!=NULL)
		{	
			enque(&q,newnode->left);
		}
		if(newnode->right!=NULL)
		{
			enque(&q,newnode->right);
		}
	}
	return k;
	}		
}
struct treenode* min(struct treenode *root)
{
	struct treenode *newnode;
	struct treenode *min=root;
	if(root==NULL)
	printf("no nodes\n");
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
	while(q->f!=q->r)
	{	
		newnode=deque(&q);
		if(newnode->ele)
		{
			if(newnode->ele < min->ele)
			min->ele=newnode->ele;
		}
		if(newnode->left!=NULL)
		{	
			enque(&q,newnode->left);
		}
		if(newnode->right!=NULL)
		{
			enque(&q,newnode->right);
		}
	}
	return min;
	}		
}

struct treenode* findparent(struct treenode *root,struct treenode *temp1)
{	
	struct treenode* newnode;
	struct que *q;
	
	q=(struct que*)malloc(sizeof(struct que));
	q->f=-1;
	q->r=-1;
	q->n=100;
	enque(&q,root);
	while(q->r!=q->f)
	{
		newnode=deque(&q);
		if(newnode->left==temp1)
			return newnode;
		if(newnode->left!=NULL)
			enque(&q,newnode->left);
		if(newnode->right==temp1)
			return newnode;
		if(newnode->right!=NULL)
			enque(&q,newnode->right);
	}
}
struct treenode* delete(struct treenode *root,int k)
{
	int flag=0;
	struct treenode *newnode,*temp1,*parent;
	if(root==NULL)
		printf("no nodes\n");
	else
	{	
		struct que *q;	
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
		while(q->f!=q->r)
		{
			newnode=deque(&q);
			if(newnode->ele==k && flag==0)
			{	
				flag=1;
				temp1=newnode;
			}
			if(newnode->left!=NULL)
			{
				enque(&q,newnode->left);
			}
			if(newnode->right!=NULL)
			{
				enque(&q,newnode->right);
			}
		}	
		if(flag==1)
		{
			printf("hello world%d\n\n\n",newnode->ele);
			parent=findparent(root,newnode);
			temp1->ele=newnode->ele;
			if(parent->left==newnode)
			{
				parent->left=NULL;
			}
			else
			{
				parent->right=NULL;
			}	
		}
		else
		printf("not found\n");
	}
return root;
}

int height(struct treenode *root)
{
	if(root==NULL)
	return 0;
	else
	return (1+height(root->left));
}
int isempty(struct que *q)
{
	if(q->f==q->r)
	return 1;
	else
	return 0;
}

struct treenode* deepnode(struct treenode *root)
{	struct treenode *newnode;
	if(root==NULL)
	return NULL;
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		enque(&q,root);
		while(!isempty(q))
		{
			newnode=deque(&q);        
			if(newnode->left)
			enque(&q,newnode->left);
			if(newnode->right)
			enque(&q,newnode->right);
		}
	}
return newnode;
}

int no_of_leaf_nodes(struct treenode *root)
{
	struct treenode* newnode;
	int sum=0,c=0;
	if(root==NULL)
	return 0;
	else
	{
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;
		
		enque(&q,root);
		while(q->f!=q->r)
		{
			newnode=deque(&q);
			if(!newnode->left && !newnode->right)   // for full nodes if(root->left!=NULL and root->right!=NULL)
							//half nodes same as this if(root->left!=NULL && root->right==NULL || vice versa)
			{	
				sum=sum+newnode->ele;
				c++;
				
			} 
			else
			{	
				if(newnode->left!=NULL)
				enque(&q,newnode->left);
				if(newnode->left!=NULL);
				enque(&q,newnode->right);
			}
		}
	}
		printf("leaf node=%d\n",c);
return sum;
	}

int total_sum(struct treenode* root)
{
	if(root==NULL)
	return 0;
	else
	return (root->ele+total_sum(root->left)+total_sum(root->right));
}
struct treenode* mirror(struct treenode*root)
{
	struct treenode *newnode;
	if(root!=NULL)
	{
	mirror(root->left);
	mirror(root->right);
		
		newnode=root->left;
		root->left=root->right;
		root->right=newnode;
	}
return root;
}
void push(struct stack *s,struct treenode* newnode)
{
	s->top++;
	s->a[s->top]=newnode;
}
struct treenode* pop(struct stack *s)
{
	s->top--;
	return s->a[s->top+1];
}
void reverse(struct treenode* root)
{	
	int c=0;
	int height=3;
	struct treenode *newnode,*temp1;
	if(root==NULL)
	printf("nothing\n");
	else
	{
		struct stack *s;
		s=(struct stack*)malloc(sizeof(struct stack));
		s->top=-1;

		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;
		q->r=-1;
		q->n=100;

		enque(&q,root);
		while(q->f!=q->r)
		{
			newnode=deque(&q);
			if(newnode->right!=NULL)
			enque(&q,newnode->right);
			if(newnode->left!=NULL)
			enque(&q,newnode->left);
			push(s,newnode);
		}
		while(s->top!=-1)
		{
			temp1=pop(s);
			
			printf("%d",temp1->ele);
		 }	
	}
}
void inorder(struct treenode *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d",root->ele);
		inorder(root->right);
	}
}
int max_in_recursion(struct treenode*root)
{
	static int data=1;
	if(root)
	{
		max_in_recursion(root->left);
		if(root->ele>data)
			data=root->ele;
		max_in_recursion(root->right);	
	}
	else
	return data;
}
int min_in_recursion(struct treenode *root)
{	
	
	/*if(root)
	{
	 
		min_in_recursion(root->left);
		if(root->ele<int k)
			k=root->ele;
		min_in_recursion(root->right);	
	}
	else
	return 0;*/
}
void sum_levels(struct treenode*root)
{	
	int sum=0;
	if(root==NULL)
	printf("no nodes\n");
	else
	{	struct treenode*temp;
		struct que *q;
		q=(struct que*)malloc(sizeof(struct que));
		q->f=-1;q->r=-1;q->n=10;
		enque(&q,root);
		enque(&q,NULL);
		while(q->f!=q->r)
		{
			temp=deque(&q);
			if(temp==NULL)
			{	
				//printf("%d\n",sum);
				if(q->f==q->r)          //same used to count the levels amnd also height of a tree
				break;
					//maximum level sum priting comparing max->sum >temp->sum
				printf("\n");
				enque(&q,NULL);
				sum=0;
			}
			if(temp!=NULL)
			{	sum=sum+temp->ele;
			printf("%d ",temp->ele);
				if(temp->left!=NULL)
				enque(&q,temp->left);
				if(temp->right!=NULL)
				enque(&q,temp->right);
			}
		}
	}
}
void delete_tree(struct treenode *root)
{
	if(root==NULL)
	return;
	delete_tree(root->left);
	delete_tree(root->right); //post order traversal deletion
	free(root);
}
// deepest node is the last node after traversing all the levels

