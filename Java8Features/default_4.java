package Java8Features;

interface apple
{
	public default void m1()
	{
		System.out.println("Default-method in M1");
	}
}
abstract class mango implements apple{
	public abstract void m1();// default methods can be converted to abstract classes
	// public default void m2() {} // default methods can not be written in abstract classes
	// in classes also we cannot write default classes
	// only in interfaces we can write default methods
}
public class default_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
