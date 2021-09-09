#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
	return (a>b)?a:b;
}
int lcs(char *s1,char *s2,int m,int n)
{
	if(m==0 || n==0)
	return 0;
	if(s1[m-1]==s2[n-1])
	 return 1+lcs(s1,s2,m-1,n-1);
	else
	return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
}
void main()
{
	char s1[100],s2[100];
	printf("enter string 1\n");
	scanf("%s",s1);
	printf("enter string 2\n");
	scanf("%s",s2);
	
	printf("longest common subsequence=%d\n",lcs(s1,s2,strlen(s1),strlen(s2)));
}
