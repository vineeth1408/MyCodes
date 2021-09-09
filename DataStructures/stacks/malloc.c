#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int age;
	char name[20];
	float salary;
};
void main()
{
struct emp *prt;

prt=(struct emp*)malloc(sizeof(struct emp));
printf("%d\n",prt);
printf("%d\n",sizeof(struct emp));
if(prt==NULL)
printf("out of memory");
else
{
 printf("Enter data:1.age,2.name,3.salary");
 scanf("%d%s%f",&prt->age,prt->name,&prt->salary);
}

printf("%d%s%f",prt->age,prt->name,prt->salary);
}



