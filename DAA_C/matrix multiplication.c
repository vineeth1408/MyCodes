#include<stdio.h>
void main()
{
	int a[100][100],c[100][100];
	int b[100][100];
	int i,j,r1,c1,r2,c2,k;
	printf("enter 1st matrix rows\n");
	scanf("%d",&r1);
	printf("enter 1st matrix column\n");
	scanf("%d",&c1);
	
	printf("enter 2nd matrix row\n");
	scanf("%d",&r2);
	printf("enter 2nd matrix colums\n");
	scanf("%d",&c2);
	if(c1==r2)
	{
	printf("enter values in matrix 1\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter values in matrix 2\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
					scanf("%d",&b[i][j]);
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{	
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("matrix mult is not possible\n");
	
}
