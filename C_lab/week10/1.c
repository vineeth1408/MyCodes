//write a c program to maintain n records of a student;...

 #include<stdio.h>
#include<string.h>
struct student{
  int rn;
  int marks;
  char name[100];
  char grade;
};
 int main( )
{
char b[10];
int n,i;
 printf("enter no.of students\n");
  scanf("%d",&n);
struct student std[100];

  for(i=0;i<n;i++)
 {
   printf("Enter student %d details\n",i+1);
  printf("ROLL NUMBER OF %d STUDENT: ",i+1);
  scanf("%d",&std[i].rn);
  printf("MARKS OF %d STUDENT: ",i+1);
  scanf("%d",&std[i].marks);
  printf("NAME OF  %d STUDENT: ",i+1);
 scanf("%s",std[i].name);
 printf("GRADE OF %d STUDENT: ",i+1);
 scanf("%s",&std[i].grade);
 
 printf("\n");
 }
 printf("Enter name of the student ");
    scanf("%s",b);
    
    for(i=0;i<n;i++)
{
    if(strcmp(b,std[i].name)==0)
      {    printf("%d%c%d\n",std[i].marks,std[i].grade,std[i].rn);
          break;
      }
}
}         
 

