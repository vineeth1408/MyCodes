#include<stdio.h>
void main()
{
	int a[100],n,op,i;
	int r=0,f=0;
	printf("enter size\n");
	scanf("%d",&n);
	n=n+1;
	do{
		printf("1 enque\n2 deque\n3 display\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:if((r+1)%n==f)
					printf("queue is full\n");
					else
					{
						r++;
						r=r%n;
						printf("enter element\n");
						scanf("%d",&a[r]);
					}
				break;
			case 2:if(r==f)
					{
						printf("queue is empty\n");
					}
					else
					{
						f++;
						f=f%n;
						printf("removed=%d\n",a[f]);
					}
			break;
			case 3:if(f>r)
					{
						for(i=f+1;i<n;i++)
						printf("%d\t",a[i]);
						for(i=0;i<=r;i++)
						printf("%d\t",a[i]);
					}
					else if(f<r)
					{
						for(i=f+1;i<=r;i++)
						printf("%d",a[i]);
					}
			break;
		}
	}while(op!=4);
}
