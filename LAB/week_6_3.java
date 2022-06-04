/* Write an application to create a super class Employee with information first name & last name and methods getFirstName(), getLastName()
  derive  the sub-classes ContractEmployee and RegularEmployee with the information about department, designation & method displayFullName()
  , getDepartment, getDesig() to print the salary and to set department name & designation of the corresponding sub-class objects respectively.    */
package LAB;

public class week_6_3 {

	public static void main(String[] args) {
		ContractEmployee c = new ContractEmployee();
		c.setFirstName("steve");
		c.setLastName("Jobs");
		c.SetDepartment("sales");
		c.SetDesig("ceo");
		c.SetSalary(1500000);
		System.out.println("First Name : "+c.getFirstName());
		System.out.println("Last Name : "+c.getLastName());
		System.out.println("Department : "+c.getDepartment());
		System.out.println("Designation : "+c.getDesig());
		System.out.println("Salary : "+c.getSalary());
		
		
		RegularEmployee e = new RegularEmployee();
		
		e.setFirstName("steve");
		e.setLastName("Jobs");
		e.SetDepartment("sales");
		e.SetDesig("ceo");
		e.SetSalary(1500000);
		System.out.println("First Name : "+e.getFirstName());
		System.out.println("Last Name : "+e.getLastName());
		System.out.println("Department : "+e.getDepartment());
		System.out.println("Designation : "+e.getDesig());
		System.out.println("Salary : "+e.getSalary());
		
		
		

	}

}

class Employees{
	public String first_name;
	public String last_name;
	
	public String getFirstName() {
		return this.first_name;
	}
	public String getLastName() {
		return this.last_name;
	}
	public void setFirstName(String firstName) {
		this.first_name=firstName;
	}
	public void setLastName(String LastName) {
		this.last_name=LastName;
	}
	
}
class ContractEmployee extends Employees{
	String department;
	String designation;
	double salary;
	public void  SetDepartment(String dpt) {
		this.department=dpt;
	}
	public void SetDesig(String design) {
		this.designation = design;
	}
	public void SetSalary(double sal) {
		this.salary=sal;
	}
	public void  displayFullName() {
		System.out.println(getFirstName()+" "+getLastName()); 
	}
	
	public String getDepartment() {
		return this.department;
	}
	public String getDesig() {
		return this.designation;
	}
	public double getSalary() {
		return this.salary;
	}
	
}
class RegularEmployee extends Employees{
	String department;
	String designation;
	double salary;
	public void  SetDepartment(String dpt) {
		this.department=dpt;
	}
	public void SetDesig(String design) {
		this.designation = design;
	}
	public void SetSalary(double sal) {
		this.salary=sal;
	}
	public void  displayFullName() {
		System.out.println(getFirstName()+" "+getLastName()); 
	}
	
	public String getDepartment() {
		return this.department;
	}
	public String getDesig() {
		return this.designation;
	}
	public double getSalary() {
		return this.salary;
	}
}