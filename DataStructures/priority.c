#include<stdio.h>
void main()
{
	int a[100],i,j,op,ele,m;
	int n=-1;
	printf("enter size\n");
	scanf("%d",&m);
	while(1)
	{
		printf("1 insert\n2 deque \n3 display\n");
		scanf("%d",&op);
		switch(op)
		{
				case 1: printf("enter element \n");
						scanf("%d",&ele);
						if(n==m-1)
						printf("que is full\n");
						else if(n==-1)
						{
							n++;
							a[n]=ele;
						}
						else
						{
							for(i=n;i>=0;i--)
							{	
								if(a[i] > ele)
								{
										a[i+1]=a[i];
										
								}
								else
								break;   	
							}
							a[i+1]=ele;
							n++;
						}
					break;
				case 2:if(n==-1)
						printf("que is empty\n");
						else
						{	
							printf("removed=%d\n",a[n]);
							n--;
						}
				break;
				case 3:for(i=0;i<=n;i++)
						printf("%d\t",a[i]);
				break;
		}
	}    
}
