#include<stdio.h>
struct cricket
{
int jersey;
char name[100];

};
void main()
{
struct cricket x[3];
struct cricket *p;
p=x;
int i,n;
for(i=0;i<3;i++)
{ 
   printf("Enter jersey of %d person: \n",i+1);
   scanf("%d",&x[i].jersey);
   printf("Enter player %d name: \n",i+1);
   scanf("%s",x[i].name);
  
   printf("\n");
   }
   printf("Enter jersey number\n");
   scanf("%d",&n);
   for(i=0;i<3;i++)
   {
    if(n==x[i].jersey)
   
   { 
   printf("%s\n",p->name);
     
     }
     }
     }
