#include<stdio.h>
void insert(int a[100],int ele,int n)
{
	int pos;
		pos=(ele%n);
		int i=1;
		printf("pos=%d\n",pos);	
		if(a[pos]==-1)
		{
			a[pos]=ele;
		}
		else
		{
			while(a[pos]!=-1)
			{
				pos=(ele+i*i)%n;
				i++;
			}
			//printf("pos=%d\n",pos);
			a[pos]=ele;
		}
}
void display(int a[100],int n)
{	int i;
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
	printf("\n");
}
void search(int a[100],int ele,int n)
{
	int pos,i=1;
	pos=ele%n;
	int flag=0;
	while(a[pos]!=-1)
	{	
		if(a[pos]==ele)
		{
			flag=1;
			break;
		}
		i++;
		pos=(ele+i)%n;
	}
	if(flag==1)
	printf("element found\n");
	else
	printf("not found\n");
		
}
int isfull(int a[],int m)
{	
	int i=0;
	while(i<=m)
	{	
		if(a[i]==-1)
		return 0;
		i++;
	}
	return 1;
}
void delete(int a[],int ele,int m,int n)
{	
	int pos,i=0,flag=1;
	pos=ele%n;
	while(i<=m)
	{
		if(a[pos]==ele)
		{
		 	 a[pos]=-1;
		 	flag=0;
		 	 break;
		 }
		 i++;
		 pos=a[ele+i*i]%n;
	}
	if(flag==0)
	printf("deleted\n");
	else
	printf("not present\n");
}
void main()
{
	int n,i=1,ele,pos,op,m;
	int a[10];
	printf("enter size\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	a[i]=-1;
	printf("enter hash value:\n");
	scanf("%d",&n);
	do{
		
	printf("1 for insert\n2 for display\n3 for search\n4 delete\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:if(isfull(a,m))
			printf("hash table is full\n");
			else
			{
				printf("enter element\n");
				scanf("%d",&ele);
				insert(a,ele,n);
			}
		break;
		case 2:display(a,n);
		break;
		case 3:printf("enter element to search\n");
			scanf("%d",&ele);
			search(a,ele,n);
		break;
		case 4:printf("enter element to delete\n");
			scanf("%d",&ele);
			delete(a,ele,m,n);
		break;
	}
}while(op!=5);
}
