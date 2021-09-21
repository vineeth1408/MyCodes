/* Derive sub-classes of ContractEmployee namely HourlyEmployee & WeeklyEmployee
with information number of hours & wages per hour, number of weeks & wages per
week respectively & method calculateWages() to calculate their monthly salary. Also
override getDesig () method depending on the type of contract employee. */
import java.util.*;

class Employee {
	public String firstName, lastName;

	public String getFirstName() {
		return this.firstName;
	}

	public String getLastName() {
		return this.lastName;
	}
}

class ContractEmployee extends Employee {
	String department, designation;
	double salary;

	public String getFullName() {
		return super.firstName+" "+super.lastName;
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

	public void setDesignation(String designation) {
		this.designation = designation;
	}
}

class RegularEmployee extends Employee {
	String department, designation;
	double salary;

	public String getFullName() {
		return super.firstName+" "+super.lastName;
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

	public void setDesignation(String designation) {
		this.designation = designation;
	}
}

class HourlyEmployee extends ContractEmployee {
	double numberOfHours, wagesPerHour;

	public double calculateWages() {
		return numberOfHours*wagesPerHour;
	}

	public String getDesignation() {
		return super.designation;
	}
}

class WeeklyEmployee extends ContractEmployee {
	double numberOfWeeks, wagesPerWeek;

	public double calculateWages() {
		return numberOfWeeks*wagesPerWeek;
	}

	public String getDesignation() {
		return super.designation;
	}
}

class week6_4 {
	public static void main(String[] args) {
		HourlyEmployee he = new HourlyEmployee();

		he.firstName = "Tom";
		he.lastName = "Cruise";
		he.setDepartment("HR Manager");
		he.setDesignation("CEO");
		he.salary = 1000000;
		he.numberOfHours = 1200;
		he.wagesPerHour = 1500;

		System.out.println("Hourly employee details: ");
		System.out.println("Full name: "+he.getFullName());
		System.out.println("Department: "+he.getDepartment());
		System.out.println("Designation: "+he.getDesignation());
		System.out.println("Wage: "+he.calculateWages()+"\n");

		WeeklyEmployee we = new WeeklyEmployee();

		we.firstName = "Jack";
		we.lastName = "Sparrow";
		we.setDepartment("Navy");
		we.setDesignation("Captain");
		we.salary = 30050;
		we.numberOfWeeks = 1240;
		we.wagesPerWeek = 120;

		System.out.println("Weekly employee details: ");
		System.out.println("Full name: "+we.getFullName());
		System.out.println("Department: "+we.getDepartment());
		System.out.println("Designation: "+we.getDesignation());
		System.out.println("Wage: "+we.calculateWages());
	}
}