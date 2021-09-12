#include<stdio.h>
void main()
{
int a[10][10],c[10][10];
int i,j,c1,r1;
printf("Enter the order of matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter %d elememts in the matrix\n",r1*c1);
for(i=0;i<r1;i++)
 {
   for(j=0;j<c1;j++)
   {
     scanf("%d",&a[i][j]);
     c[i][j]=a[i][j];
   }
}
for(i=0;i<r1;i++)
{
     for(j=0;j<c1;j++)
    	{
     	printf("%d \t",c[j][i]);
     }
     printf("\n");
}
}
/*#include<stdio.h>
void main()
{
int a[10][10],b[10][10];
int i,j,c1,r1;
printf("Enter the order of matrix\n");
scanf("%d%d",&r1,&c1);
printf("enter %d elememts in the matrix\n",r1*c1);
for(i=0;i<r1;i++)
 {
   for(j=0;j<c1;j++)
   {
     scanf("%d",&a[i][j]);
     b[j][i]=a[i][j];
   }
}
for(i=0;i<r1;i++)
{
     for(j=0;j<c1;j++)
     { 
     	printf("%d \t",b[i][j]);
     }
     printf("\n");
       
}
}*/
       

       
