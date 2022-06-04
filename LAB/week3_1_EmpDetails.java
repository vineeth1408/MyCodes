package LAB;
import java.io.*;
import java.util.*;
public class week3_1_EmpDetails {
	public static void main(String[] args) throws IOException{
		Scanner sc = new Scanner(System.in);
		int n =sc.nextInt();
		Employee e[] = new Employee[n];
		int i=0;
		while(true) {
			System.out.println("ENTER EMPLOYEE DETAILS");
			System.out.println("ENTER EMPLOYEE ID");
			String emp_id = sc.next();
			System.out.println("ENTER EMPLOYEE NAME");
			String emp_name = sc.next();
			e[i] = new Employee(emp_id,emp_name);
			i++;
			System.out.println("1 ADD 2 EXIT");
			int k = sc.nextInt();
			if(k==2)
				break;
		}
		System.out.println("ENTER EMPLOYEE ID TO DISPLAY");
		String s = sc.next();
		for(int j=0;j<4;j++) {
			if(s.compareTo(e[j].emp_id)==0) {
				e[j].display();
				break;
			}
		}

	}

}
class Employee {
	String emp_id;
	String emp_name;
	Employee(String emp_id,String emp_name) {
		this.emp_id=emp_id;
		this.emp_name=emp_name;
	}
	void display() {
		System.out.println("ID: "+this.emp_id + " Name: "+this.emp_name);
	}
}
