#include<stdio.h>
void main()
{
int i,j,k,l;
printf("Enter any number:");
scanf("%d",&k);

  j=k/100;
printf("No of hundereds %d\n",j);
j=k%100;
j=j/10;  
printf("No of tens %d\n",j);
j=k%10;

printf("No of ones %d\n",j);
}
