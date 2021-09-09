#include<stdio.h>
#include<stdlib.h>
struct student
{
	int marks;
	char name[10];
	int id;
};
struct que
{
	struct student s[10];
	int f,r;
};
int isfull(struct que q,int n)
{
	if(q.r==(n)-1)
	return 1;
	else
	return 0;
}
int isempty(struct que q,int n)
{
	if(q.r==q.f)
	return 1;
	else
	return 0;
}
struct que enque(struct que q,struct student s,int n)
{
	if(q.r==(n)-1)
	printf("que is full\n");
	else
	{	
		(q.r)++;
		q.s[(q.r)]=s;
	}
return q;
}
struct que deque(struct que q,struct student s)
{
	if(q.f==-1&&q.r==-1)
	printf("que is empty\n");
	else
	{	int i;
		printf("%d %s %d\n",q.s->marks,q.s->name,q.s->id);
		for(i=(q.f)+1;i<=q.r;i++)
		{
			q.s[i]=q.s[i+1];	
		}
		(q.r)--;
	}
return q;
}
void display(struct que q,struct student s)
{	int i;
	if(q.f==q.r)
	printf("que is empty\n");
	else
	{
		for(i=0;i<=q.r;i++)
		{
			printf("%d ",q.s[i].marks);
			printf("%s ",q.s[i].name);
			printf("%d ",q.s[i].id);
			printf("\n");
		}
	}
}
void main()
{
	struct que q;
	struct student s;
	q.f=-1;
	q.r=-1;
	int op,n;
		printf("enter size\n");
		scanf("%d",&n);
	do{
		printf("enter choice\n1 enque\n2 deque \n3 display\n4 exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: if(isfull(q,n))
				printf("que is full\n");
				else
				{
					printf("enter details of student\n1 marks 2 name 3 id\n");
					scanf("%d%s%d",&s.marks,s.name,&s.id);
					q=enque(q,s,n);
				}
			break;
			case 2:if(isempty(q,n))
				printf("que is empty\n");
				else
				q=deque(q,s);
			break;
			case 3:display(q,s);
			break;
			case 4:exit(0);
			break;
			default:printf("enter valid option\n");
		}
	}while(op!=4);
}
