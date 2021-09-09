#include<stdio.h>
#include<string.h>
#define max 10
int count1=0;
int top=-1;
char a[100];
int count2=0;
char push(char );
void pop(char);
void main()
{
	
	int i;
	
	printf("Enter any expression \n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='('||a[i]=='{'||a[i]=='[')
		push(a[i]);
	}
}
char push(char c)
{
if(top==(max-1))
printf("stack is full\n");
else
{
	top++;
	a[top]=c;
	count++;
}
}
