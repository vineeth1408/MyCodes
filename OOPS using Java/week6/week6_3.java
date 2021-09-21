/*Write an application to create a super class Employee with information first name &
last name and methods getFirstName(), getLastName() derive the sub-classes
ContractEmployee and RegularEmployee with the information about department,
designation & method displayFullName() , getDepartment(), getDesig() to print the
salary and to set department name & designation of the corresponding sub-class objects
respectively.  */
import java.util.*;
public class week6_3{
	public static void main(String args[]){
		ContractEmployee c =new ContractEmployee();
		c.firstname="gogu";
		c.lastname="vineeth";
		c.setDepartment("CSE");
		c.salary=10000;
		c.setDesignation("Student");	
		System.out.println("Contract employee details: ");
		System.out.println("Full name: "+c.getFullName());
		System.out.println("Department: "+c.getDepartment());
		System.out.println("Designation: "+c.getDesignation()+"\n");

		RegularEmployee r = new RegularEmployee();
		r.firstname = "Jack";
		r.lastname = "Sparrow";
		r.setDepartment("Navy");
		r.setDesignation("Captain");
		r.salary = 30050;
		System.out.println("Regular employee details: ");
		System.out.println("Full name: "+r.getFullName());
		System.out.println("Department: "+r.getDepartment());
		System.out.println("Designation: "+r.getDesignation());

	}
}

class Employee{

	public String firstname;
	public String lastname;
	public String getFirstname(){
		return this.firstname;
	}
	public String getLastname(){
		return this.lastname;
	}
}

class ContractEmployee extends Employee{
	String department,designation;
	double salary;

	public String getFullName() {
		return super.firstname+" "+super.lastname;
	}

	public String getDepartment() {
		return this.department;
	}

	public String getDesignation() {
		return this.designation;
	}

	public double getSalary() {
		return this.salary;
	}

	public void setDepartment(String department) {
		this.department = department;
	}
	//a=a+b ///  a=(a+b)-(b=a);
	//b=(a+b)-b;
	//
	public void setDesignation(String designation) {
		this.designation = designation;
	}

} 
class RegularEmployee extends Employee{
	String department, designation;
	double salary;

	public String getFullName() {
		return super.firstname+" "+super.lastname;
	}

	public String getDepartment() {
		return this.department;
	}

	public String getDesignation() {
		return this.designation;
	}

	public double getSalary() {
		return this.salary;
	}
	super().super().y
	public void setDepartment(String department) {
		this.department = department;
	}

	public void setDesignation(String designation) {
		this.designation = designation;
	}

}