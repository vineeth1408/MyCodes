#include<stdio.h>
struct student
{
char name[10];
int rn;
int marks;
};
int main()
{
  int n,i;
  printf("Enter the number of students\n");
  scanf("%d",&n);
  struct student std[n];
 struct student *p;
   p=std;
   for(i=0;i<n;i++)
   {
   printf("Enter the details of %d student: \n",i+1);
   printf("Enter name: \n");
   scanf(" %s",std[i].name);
   printf("Enter roll no: \n");
   scanf("%d",&std[i].rn);
   printf("Enter marks: \n");
   scanf("%d",&std[i].marks);
   }
   
   printf("\n");
  for(i=0;i<n;i++)
    {  
  printf("%s\n%d\n%d\n",p->name,p->rn,p->marks);
    p++;
    }
} 
    
   
