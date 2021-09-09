#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
struct node
{
	int f;
	char c;
	struct node *left,*right;
}temp,*h1,*h2,*h3;

int max(int a,int b)
{
	return (a>b)?a:b;
}
void heapify(struct node *h[],int n)
{
	int i,flag=0;
	while(flag)
	{
		flag=0;
		for(i=1;2*i<=n;i++)
		{
			if(2*i+1 > n)
			 {
			 	if(h[i]->f > h[2*i]->f)
			 	{
			 		flag=1;
			 		temp=*h[1];
			 		*h[i]=*h[2*i];
			 		*h[2*i]=temp;
				 }
			 }
			 else
			 {
			 	if(h[i]->f > h[2*i]->f || h[i]->f > h[2*i+1]->f)
			 	{
			 		flag=1;
			 		if( max( h[2*i]->f , h[2*i+1]->f )==h[2*i]->f)
			 		{
			 			temp=*h[i];
						 *h[i]=*h[2*i];
						 *h[2*i]=temp;	
					}
					else
					{
						temp=*h[i];
						 *h[i]=*h[2*i+1];
						 *h[2*i+1]=temp;
					}
				 }
			 }
		}
	}
}
void add(struct node *h[],struct node *nn,int *n)
{
	(*n)++;
	h[*n]=(struct node*)malloc(sizeof(struct node));
	*h[*n]=*nn;
	heapify(h,*n);
}
void inorder(struct node *root,int i,char ch[],int code[],int k)
{	
	
	if(root!=NULL)
	{	
		int j;
		if( root->left==NULL && root->right==NULL )
		{
			for(j=0;j<k;j++)
			{
				if(ch[j]==root->c)
				{	
					code[j]=i;
					break;
				}
			}
		}
		inorder(root->left,10*i+1,ch,code,k);
		inorder(root->right,10*i+0,ch,code,k);
	}
}
struct node* del(struct node *h[],int *m)
{
	temp=*h[1];
	*h[1]=*h[*m];
	*h[*m]=temp;
	(*m)--;
	
	heapify(h,*m);
	return h[(*m)+1];
}
void huffman(char ch[],char f[],int code[],int k)
{
	int j=k,i;
	struct node *h[100];
	for(i=1;i<=k;i++)
	{
		h[i]=(struct node*)malloc(sizeof(struct node));
		h[i]->c=ch[i-1];
		h[i]->f=f[i-1];
		h[i]->left=h[i]->right=NULL;		
	}
	heapify(h,k);
	while(k!=1)
	{
		h1=del(h,&k);
		h2=del(h,&k);
		h3=(struct node*)malloc(sizeof(struct node));
		h3->f = h1->f + h2->f;
		h3->left=h1;
		h3->right=h2;
		add(h,h3,&k);
	}
	inorder(h[1],1,ch,code,j);
}
void main()
{	
	int i,j,k=0;
	char CODE[100][100];
	char str[100],ch[100];
	int code[100],f[100];
	printf("enter string\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{	
		int c=0;
		for(j=0;j<i;j++)
		{
			if(str[i]==str[j])
			c++;
		}
		if(c==0)
		ch[k++]=str[i];
	}
	for(i=0;i<strlen(ch);i++)
	{	
		int c=0;
		for(j=0;j<strlen(str);j++)
		{
			if(ch[i]==str[j])
			c++;
		}
		f[i]=c;
	}
	
	huffman(ch,f,code,k);
	for(i=0;i<k;i++)
	{
		sprintf(CODE[i],"%d",code[i]);
	
		for(j=0;j<strlen(CODE[i]);j++)
		CODE[i][j]=CODE[i][j+1];
	}
	printf("\nchar\tfreq\tcode\n");
	for(i=0;i<k;i++)
	printf("%c\t%d\t%s\n",ch[i],f[i],CODE[i]);
	
	printf("encoded string\n");
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<k;j++)
		{
			if(str[i]==ch[j])
			{
				printf("%s ",CODE[j]);
				break;
			}
		}
	}
}
