/*Create an Interface payable with method getAmount ().Calculate the amount to be
paid to Invoice and Employee by implementing Interface.  */
import java.util.*;

interface Payable{
	public double getAmount();
}

class Invoice implements Payable{
	double quantity;
	double priceperitem;
	Invoice(double quantity,double priceperitem){
		this.quantity=quantity;
		this.priceperitem=priceperitem;
	}
	public double getAmount(){
		return quantity * priceperitem;
	}
}
class Employee implements Payable{
	String name;
	double salary;
	String designation,address,contact;
	Employee(String name,double salary,String address,String designation,String contact){
		this.name=name;
		this.salary=salary;
		this.address=address;
		this.designation=designation;
		this.contact=contact;
	}

	public double getAmount(){
		return salary;
	}
}
class week7_3{
	public static void main(String args[]){
		System.out.println("Invoice details");
		Invoice obj = new Invoice(2,125);
		System.out.println("Quantity: "+obj.quantity+"\nPrice Per Item:"+obj.priceperitem+"\nAmount: "+obj.getAmount());
		System.out.println("\nEmployee Details");
		Employee emp= new Employee("Varun",10000,"Warangal","Professor","123456789");
		System.out.println("Name: "+emp.name+"\nsalary:"+emp.getAmount()+"\nAddress: "+emp.address+"\nDesignation:"+emp.designation+"\nContact: "+emp.contact);
	}
}