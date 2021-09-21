/*Write a Program to create your own package. Package should have more than two
classes. write a Program that uses the classes from the package. */
import animals.dog;
import animals.cat;
import animals.lion;

public class week8_1{
	public static void main(String args[]){
		System.out.println("Week8_1 class ");
		lion obj = new lion();
		obj.print();
		cat obj1=new cat();
		obj1.print();
		dog obj2= new dog();
		obj2.print();

	}
}