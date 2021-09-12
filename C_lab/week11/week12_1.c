#include<stdio.h>
void main()
{
	FILE *f;             //file Pointer like normal pointer.Note:when perform on Files FILE datatype compulsary
	f=fopen("Employee.txt","w");    //file name:Employee.txt,and mode of file read or write,here wrinting purpose "W"
	char ch='y';
	struct emp
	{
		int id;
		char n[20];
		char d[20];
		char q[20];                      //Structure
		float sal;
		int exp;
		char w[20];
		char city[20];
		long ph;
	}e;
	while(ch=='y')
	{
		printf("Enter id, name, designation, qualification, salary, experience, research work, city, phno\n");
		scanf("%d %s %s %s %f %d %s %s %ld",&e.id,e.n,e.d,e.q,&e.sal,&e.exp,e.w,e.city,&e.ph);
//		fprintf(f,"%d %s %s %s %f %d %s %s %ld\n",e.id,e.n,e.d,e.q,e.sal,e.exp,e.w,e.city,e.ph);  //inserting records into a file
fwrite(&e,sizeof(e),1,f);		
		printf("Add another emp details: y/n\n");
		scanf(" %c",&ch);
	}
	fclose(f);              //File closing
}

