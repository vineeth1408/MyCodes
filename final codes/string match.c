#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],sub[100];
	int i,j,l=0,m,k,loc,c;
	printf("enter string 1\n");
	gets(str);
	printf("enter test string2\n");
	//scanf("%s",sub);
	gets(sub);
	for(i=0;i<=strlen(str)-strlen(sub);i++)
	{	
		for(j=0; j<strlen(str);j++)
		{
			if(str[i+j]!=sub[j])
			break;
		}
		if(j==strlen(sub))
		{
			
			printf("found=%d\n",i);
		}
	}
	//if(l==1)
	//printf("found string at %d\n",loc);
	//else
	//printf("not found\n");
}

