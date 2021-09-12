#include<stdio.h>
#include<string.h>
void main()
{
struct student 
{
 char name[100],id[10];
 
 int age;
 
}std[100],*p=std;



int i;
for(i=0;i<3;i++)
  
  {
  printf("Enter student %d details: \n",i+1);
  printf("Enter name of %d  student: ",i+1);
  scanf("%s",std[i].name);
  printf("Enter ID of %d student: \n",i+1);
  scanf("%s",std[i].id);
  printf("Enter age of %d student: \n",i+1);
  scanf("%d",&std[i].age);
  printf("\n");
  }
  for(i=0;i<3;i++)
    {
    printf("%s\n%s\n%d\n",p->name,p->id,p->age);
    p++;
    }
}
  
  
  
