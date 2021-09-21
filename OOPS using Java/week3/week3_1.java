/*Write a program to display details of the required employee based on his Id. The
details of employee includes, Emp_name, Emp_age, Emp_gender, Emp_designation,
Emp_salary, Emp_Address etc., */
import java.io.*;
import java.util.*;
public class week3_1{
	public static void main(String args[]) throws IOException{
		employee e[]=new employee[10];
		Scanner in = new Scanner(System.in);
		int i=0;
		while(true){
				System.out.println("ENTER EMPLOYEE DETAILS");
				System.out.println("ENTER EMPLOYEE ID");
				int emp_id = Integer.parseInt(in.nextLine());
				System.out.println("ENTER EMPLOYEE NAME");
				String emp_name=in.nextLine();
				System.out.println("ENTER EMPLOYEE SALARY");
				long emp_salary = Long.parseLong(in.nextLine());
				System.out.println("ENTER EMPLOYEE AGE");
				int emp_age = Integer.parseInt(in.nextLine());
				System.out.println("ENTER EMPLOYEE ADDRESS");
				String emp_address=in.nextLine();
				System.out.println("ENTER EMPLOYEE GENDER");
				String emp_gender=in.nextLine();
				System.out.println("ENTER EMPLOYEE DESIGNATION");
				String emp_designation=in.nextLine();
				e[i] = new employee(emp_age, emp_id, emp_salary, emp_name, emp_gender,emp_designation, emp_address);
				i++;
				System.out.println(i);
				System.out.println("PRESS 1:- ENTER NEW EMPLOYEE 2:- STOP");
				int temp= Integer.parseInt(in.nextLine());
		if(temp!=1){
		break;
		}
	}
		System.out.println("Employee Details: \n-------------------");
		System.out.println("ENTER THE ID TO DISPLAY THE RECORD:");
		
		int id=in.nextInt();
		for(int j=0;j<i;j++){
			if(id==e[j].emp_id){
				e[j].display();
			}
		}

	}
}

class employee{
	int emp_age;
	int emp_id;
	String emp_name;
	String emp_gender;
	long emp_salary;
	String emp_designation;
	String emp_address;

	employee(int emp_age,int emp_id,long emp_salary,String emp_name,String emp_gender,String emp_designation, String emp_address){
		this.emp_age=emp_age;
		this.emp_id=emp_id;
		this.emp_name=emp_name;
		this.emp_gender=emp_gender;
		this.emp_salary=emp_salary;
		this.emp_address=emp_address;
		this.emp_designation=emp_designation;
	}
	void display(){
		System.out.println("ID: "+this.emp_id + " Name: "+this.emp_name + " Designation: " +this.emp_designation +" Salary:" +this.emp_salary + " Age: " +this.emp_age + " Gender: " +this.emp_gender);
		System.out.println("\n");
	}

}