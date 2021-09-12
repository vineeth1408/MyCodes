#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
      FILE *fp,*fq;
      char ch[2]="y",name[100];
      int i=0,c,k;
      struct employee
      {
	      long long int salary,phone;
	      int experience;
	      char empid[100],empname[100],designation[100],qualification[100],research[100],address[100];
      }e;
      fp=fopen("employee.txt","rb+");
      fq=fopen("new.txt","wb+");
      if(fp==NULL||fq==NULL)
      {
	      printf("Error\n");
	      exit(1);
      }
      tag:
      printf("-------------------------MENU--------------------------------\n");
      printf("     1-VIEW RECORD\n     2-ADD RECORD\n     3-DELETE RECORD\n     4-MODIFY RECORD\n     5-EXIT\n");
      printf("Enter your choice\n");
      scanf("%d",&c);
      i=0;
      strcpy(ch,"y");
      switch(c)
      {
      		case 1:rewind(fp);
      		      printf("view one person record press(1) or press (2)for all records\n");
      		      scanf("%d",&c);
      		      if(c==2)
      		      {
      		      		while(fread(&e,sizeof(e),1,fp)==1)
      		      	        {
      		      	        	printf("EMPLOYEE ID:%s\n",e.empid);
      		      	        	printf("EMPLOYEE NAME:%s\n",e.empname);
      		      	        	printf("EMPLOYEE DESIGNATION:%s\n",e.designation);
      		      	        	printf("EMPLOYEE QUALIFICATION:%s\n",e.qualification);
      		      	        	printf("EMPLOYEE RESEARCH:%s\n",e.research);
      		      	        	printf("EMPLOYEE ADDRESS:%s\n",e.address);
      		      	        	printf("EMPLOYEE SALARY:%lld\n",e.salary);
      		      	        	printf("EMPLOYEE MOBILE NUMBER:%lld\n",e.phone);
      		      	        	printf("EMPLOYEE EXPERIENCE:%d\n",e.experience);
      		      	        }
      		      }
      		      else
      		      {	     	printf("Enter name of employee: \n");
      		                scanf("%s",name);	
      		      	        while(fread(&e,sizeof(e),1,fp)==1)
      		      	        {
      		      	             if(strcmp(name,e.empname)==0)
      		      	             {
      		      	               
      		      	                printf("EMPLOYEE ID:%s\n",e.empid);
      		      	        	printf("EMPLOYEE NAME:%s\n",e.empname);
      		      	        	printf("EMPLOYEE DESIGNATION:%s\n",e.designation);
      		      	        	printf("EMPLOYEE QUALIFICATION:%s\n",e.qualification);
      		      	        	printf("EMPLOYEE RESEARCH:%s\n",e.research);
      		      	        	printf("EMPLOYEE ADDRESS:%s\n",e.address);
      		      	        	printf("EMPLOYEE SALARY:%lld\n",e.salary);
      		      	        	printf("EMPLOYEE MOBILE NUMBER:%lld\n",e.phone);
      		      	        	printf("EMPLOYEE EXPERIENCE:%d\n",e.experience); 
      		      	               	break;
      		      	             }
      		      	         }
      		      }
      		   break;
      		   case 2:fseek(fp,0,SEEK_END);
      		          while(strcmp(ch,"y")==0)
      		          {
      		                        printf("enter details of employee\n");	
      		      	        	printf("ID:");
      		      	        	scanf("%s",e.empid);
      		      	        	printf("name:");
      		      	        	scanf("%s",e.empname);
      		      	        	printf("Designation:");
      		      	        	scanf("%s",e.designation);
      		      	        	printf("Qualification:");
      		      	        	scanf("%s",e.qualification);
      		      	        	printf("salary:");
      		      	        	scanf("%lld",&e.salary);
      		      	        	printf("experience (in years):");
      		      	        	printf("Research work:");
      		      	        	scanf("%s",e.research);
      		      	        	printf("address:");
      		      	        	scanf("%s",e.address);
      		      	        	printf("phone no:");
      		      	        	scanf("%lld",&e.phone);
      		      	        	fwrite(&e,sizeof(e),1,fp);
      		      	        	printf("Add another record pess (y/n):");
      		      	        	fflush(stdin);
      		      	        	scanf("%s",ch);
      		      	}
      		  break;
      		  case 3:rewind(fp);
      		         printf("Delete one employee record press (1)/to delete all press(2):\n");
      		         scanf("%d",&c);
      		         if(c==2)   	    	
      		      	 {
      		      	          remove("employee.txt");
      		      	 }
      		      	 else
      		      	 {
      		      	           tag2:
      		      	           printf("Enter name of the employee to delete:\n");       	
      		      	           scanf("%s",name);
      		      	           while(fread(&e,sizeof(e),1,fp)==1)
      		      	           {
      		      	                 if(strcmp(name,e.empname)==0)
      		      	                 continue;
      		      	                 fwrite(&e,sizeof(e),1,fq);
      		      	           }
      		      	           remove("employee.txt");
      		      	           rename("new.txt","employee.txt");
      		      	           printf("record deleted\n");
      		      	           fclose(fp);
      		      	           fclose(fp);
      		      	           fp=fopen("employee.txt","rb+");
      		      	           fp=fopen("new.txt","wb+");
      		      	           printf("Delete another record(y/n)\n");
      		      	           scanf("%s",ch);
      		      	           if(strcmp(ch,"y")==0)
      		      	           goto tag2;
      		      	 }
      		    break;
      		    case 4:tag3:
      		           rewind(fp);
      		           printf("Enter name\n");
      		           scanf("%s",name);
      		           while(fread(&e,sizeof(e),1,fp)==1)
      		           {	
      		           	       
      		      		  if(strcmp(name,e.empname)==0)
      		      		  { 
      		      		  	fseek(fp,-sizeof(e),SEEK_CUR);
      		      		  	printf("updater record\n");
      		      		  	printf("ID:");
      		      		  	scanf("%s",e.empid);
      		      	        	printf("name:");
      		      	        	scanf("%s",e.empname);
      		      	        	printf("Designation:");
      		      	        	scanf("%s",e.designation);
      		      	        	printf("Qualification:");
      		      	        	scanf("%s",e.qualification);
      		      	        	printf("salary:");
      		      	        	scanf("%lld",&e.salary);
      		      	        	printf("experience (in years):");
      		      	        	printf("Research work:");
      		      	        	scanf("%s",e.research);
      		      	        	printf("address:");
      		      	        	scanf("%s",e.address);
      		      	        	printf("phone no:");
      		      	        	scanf("%lld",&e.phone);
      		      	        	fwrite(&e,sizeof(e),1,fp);
      		      	        	fflush(stdin);
      		      	        	break;
      		      	          }
      		      	   }
      		      	   printf("modify another record(y/n)?\n");
      		      	   scanf("%s",ch);
      		      	   if(strcmp(ch,"y")==0)
      		      	   goto tag3;
      		     break;
      		     case 5:fclose(fp);
      		            fclose(fq);
      		            printf("Exit successful\n");
      		            exit(1);
      		     break;
      		     default:printf("Somethung went wrong oops error\n chesk service\n");
      		     
      		      
       }
       goto tag;
       fclose(fp);
       fclose(fq);
}  
      		                 	
      		      		  		                	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
      		      	        	
                      
