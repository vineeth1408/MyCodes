interface payable{
	double getAmount();
}

class Invoice implements payable{
	double quantity;
	double priceperitem;
	Invoice(double quantity, double priceperitem){
		this.quantity = quantity;
		this.priceperitem = priceperitem;
	}
	public double getAmount(){
		return quantity *priceperitem;
	}
}
class Employee implements payable{
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
public class practice73{
	public static void main(String[] args) {
		Invoice obj = new Invoice(2,20);
		System.out.println(obj.getAmount());
		Employee obj1 = new Employee("vineeth",12345,"Mangapet","HR","9333");
		System.out.println(obj1.getAmount());
	}
}