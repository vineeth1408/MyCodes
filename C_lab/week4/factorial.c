#include<stdio.h>
void main()
{
long int j,g,factorial=1;
int k;
printf("Enter any number\n");
scanf("%d",&k);
for(g=1;g<=k;g++)
 
 {
 factorial=g*factorial;
 }
 
 printf("%d\n",factorial);
 }
