#include<stdio.h>
int board[10];
int count=0;

void print(int n)
{
	int i,j;
	printf("count= %d\n",count++);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(board[i]==j)
			printf("Q\t");
			else
			printf("-\t");
		}
		printf("\n");
	}
}
int place(int pos)
{
	int i;
	for(i=1;i<pos;i++)
	{
		if((board[i]==board[pos]) || (abs(board[i]-board[pos])==abs(i-pos)))
		return 0;
	}
	return 1;
}
void queen(int n)
{
	int row=1;
	board[row]=0;
	while(row!=0)
	{
		do{
			board[row]++;
		}while(row<=n && !place(row));
		if(board[row]<=n)
		{
			if(row==n)
			print(n);
			else
			board[++row]=0;
			
		}
		else
		row--;
	}
}
void main()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	queen(n);
}
