#include<stdio.h>
#include<stdbool.h>
void insert(int a[],int ele,int n,int m) //m is a prime number less then n
{	
	int pos,i=1;
	do{
		pos=((ele%n)+i*(ele%m))%n;
		if( i==n|| pos >n)
		{
			printf("insert not possible\n");
			break;
		}
		i++;
	}while(a[pos]!=-1);
	a[pos]=ele;
	
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
void main()
{
	int a[100],i,j,k,c,ele,m,op,l;
	printf("enter size\n");
	int n;
	scanf("%d",&n);
	l=n;
	for(n;n>0;n--)
	{		c=0;
		for(j=1;j<=n;j++)
		{
			if(n%j==0)
			  c++;
		}
		if(c==2)
		{
			k=n;
			break;
		}
	}
	n=l;
	for(i=0;i<n;i++)
	a[i]=-1;
	printf("enter hash value\n");
	scanf("%d",&m);
	
	do{
		printf("1 insert\n2 dispaly\n3 find\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: printf("enter element\n");
				scanf("%d",&ele);
				insert(a,ele,m,k);
			break;
			case 2:display(a,n);
			break;
		}
	}while(op!=3);
}
