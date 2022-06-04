package Collections;

public class ConstructorChaining {
	ConstructorChaining()
	{	
		this("String");
		System.out.println("without argument constructor");
	}
	ConstructorChaining(String s)
	{
		System.out.println("Calling a construcot of a class inside another constructor"+s);
	}
	
	public static void main(String[] args) {
		ConstructorChaining obj = new ConstructorChaining();
	}
}
