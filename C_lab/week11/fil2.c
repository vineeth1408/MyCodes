#include<stdio.h>
#include<stdlib.h>
void main()
{
 FILE *fp;
 char ch;
 int i,n;
 struct employee
 {
   long long int salary,phone;
   int experience;
   char empid[100],empname[100],designation[100],qualification[100],research[100],address[100];
 }e[1000];
 fp=fopen("emp.txt","w");
 if(fp==NULL)
    { 
       puts("file cannot be created");
       exit(1);
    }
    printf("No of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("enter details of %d employee: \n",i+1);
     //fprintf(fp,"Details of employee: %d\n",i+1);
     printf("Enter emplouyee id: \n");
     scanf("%s",e[i].empid);
     //fprintf(fp,"EMPLOYEE ID:%s\n",e[i].empid);
     printf("Employee name: \n");
     scanf("%s",e[i].empname);
     //fprintf(fp,"EMPLOYEE NAME:%s\n",e[i].empname);
     printf("Enter designation: \n");
     scanf("%s",e[i].designation);
     //fprintf(fp,"EMPLOYEE DESIGNATION:%s\n",e[i].designation);
     printf("Enter qualification: \n");
     scanf("%s",e[i].qualification);
     //fprintf(fp,"EMPLOYEE QUALIFICATION:%s\n",e[i].qualification);
     printf("Enter research work: \n");
     scanf("%s",e[i].research);
     //fprintf(fp,"EMPLOYEE RESEARCH:%s\n",e[i].research);
     printf("Enter address: \n");	
     scanf("%s",e[i].address);
     //fprintf(fp,"EMPLOYEE ADDRESS:%s\n",e[i].address);
     printf("Enter salary: \n");
     scanf("%lld",&e[i].salary);
     //fprintf(fp,"EMPLOYEE SALARY:%lld\n",e[i].salary);
     printf("Enter phone number: \n");
     scanf("%lld",&e[i].phone);
     //fprintf(fp,"EMPLOYEE MOBILE NUMBER:%lld\n",e[i].phone);
     printf("Enter Experience: \n");
     scanf("%d",&e[i].experience);
     //fprintf(fp,"EMPLOYEE EXPERIENCE:%d\n",e[i].experience);
     fwrite(&e,sizeof(e),1,fp);
     fflush(stdin);
     }
     fclose(fp);
     }
     
     
     
