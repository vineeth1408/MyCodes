#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	FILE *f,*fn;                //File pointer f and fn,datatype FILE
	f=fopen("Employee.txt","rb+");
	if(f==NULL)
	{
		f=fopen("Employee.txt","wb+");
		if(f==NULL)
		{
			puts("Can't open file");
			exit(0);
		}
	}
	struct emp
	{
		int id;
		char n[20];
		char d[20];                             //Structure
		char q[20];
		float sal;
		int exp;
		char w[20];
		char city[20];
		long ph;
	}e;
	char c='y', name[20];
	int ch;
	do
	{
		printf("\nChoose option\n1.Add a record\n2.Display\n3.Modify record\n4.Delete a record\n5.exit\n");  //Menu
		scanf("%d",&ch);
		switch(ch)             //SWitch case for selecting particular case either it is 1 or 2 or 3 or 4 like...
		{
			case 1:
					fseek(f,0,SEEK_END);   //move the pointer to the end of the file
					c='y';
					while(c=='y')
					{
					printf("Enter id, name, designation, qualification, salary, experience, research work, city, phno\n");
					scanf("%d %s %s %s %f %d %s %s %ld",&e.id,e.n,e.d,e.q,&e.sal,&e.exp,e.w,e.city,&e.ph);
					fwrite(&e,sizeof(e),1,f);
					printf("Do u want add another record (y/n)\n");
					scanf(" %c",&c);
					}
					break;
			case 2:
					rewind(f);
					while(fread(&e,sizeof(e),1,f))
						printf("%d  %s  %s  %s  %f  %d  %s  %s  %ld\n",e.id,e.n,e.d,e.q,e.sal,e.exp,e.w,e.city,e.ph);
					break;
			case 3:
					c='y';
					while(c=='y')					
					{
						printf("Enter emp name to modify\n");
						scanf(" %s",name);
						rewind(f);   //move the pointer to the beginning of the file
						while(fread(&e,sizeof(e),1,f))		
						{
							if(strcmp(e.n,name)==0)
							{
								printf("Enter id,name,designation,qualification,salary,experience,researchwork,city,phno\n");
								scanf("%d %s %s %s %f %d %s %s %ld",&e.id,e.n,e.d,e.q,&e.sal,&e.exp,e.w,e.city,&e.ph);
								fseek(f,-sizeof(e),SEEK_CUR);      //movespointer back by sizeof(e) bytes from current position.
								fwrite(&e,sizeof(e),1,f);
							}
							break;
						}	
						printf("Do u want modify another record (y/n)\n");
						scanf("%c",&c);	
					}
					break;
			case 4:
					c='y';
					while(c=='y')
					{
						printf("Enter emp name to delete\n");
						scanf(" %s",name);
						fn=fopen("New.txt","wb");
						rewind(f);                 //move the pointer to the beginning of the file
						while(fread(&e,sizeof(e),1,f))	
						{
							if(strcmp(e.n,name)!=0)
								fwrite(&e,sizeof(e),1,fn);
						}
						fclose(f);
						fclose(fn);
						remove("Employee.txt");
						rename("New.txt","Employee.txt");
						f=fopen("Employee.txt","rb+");
						printf("Do u want to delete another record (y/n)\n");
						scanf(" %c",&c);
					}
					break;
			case 5:
					fclose(f);
					puts("Thank you");
					break;
			default:
					puts("Invalid");
					break;
		}
	}while(ch!=5);
}
