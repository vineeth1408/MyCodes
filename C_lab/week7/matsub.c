#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,r1,c1,r2,c2;
printf("Give the order of first matrix\n");
scanf("%d%d",&r1,&c1);
printf("Give the order of second matrix\n");
scanf("%d%d",&r2,&c2);
printf("Enter %d elements for the first matrix",r1*c1);
for(i=1;i<=r1;i++)
 {
  for(j=1;j<=c1;j++)
   scanf("%d \t",&a[i][j]);
 } 
   printf("Enter %d elements for the second matrix",r2*c2);
for(i=1;i<=r2;i++)
{
for (j=1;j<=c2;j++)
scanf("%d \t",&b[i][j]);
}
      if(r1==r2&&c1==c2)
       {
       for(i=1;i<=r1;i++)
        {
        for(j=1;j<=c1;j++)
         {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d \t",c[i][j]);
        }
        }
        printf("\n");
        }else 
        printf("Matrices can't be added");
        }
