#include<stdio.h>
#include<String.h>
void main()
{
	char str[100],C[100];
	int k=0,i,j;
	printf("enter string\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{	
		int c=0;
		for( j=0;j<i;j++)
		{
			if(str[i]==str[j])
			c++;
		}
		if(c==0)
		C[k++]=str[i];
	}
	printf("%s",C);
	int freq[100];
	for(i=0;i<strlen(C);i++)
	{	
		int c=0;
		for(j=0;j<strlen(str);j++)
		{
			if(C[i]==str[j])
			{
				c++;
			}
		}
		freq[i]=c;
	}
	printf("\n");
	for(i=0;i<strlen(C);i++)
	printf("%d",freq[i]);
}
