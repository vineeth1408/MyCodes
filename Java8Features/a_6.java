package Java8Features;
// how to work with default methods in multiple inheritance
interface i2{
	public default void square(int x) {
		System.out.println("square= "+(x*x));
	}
}
interface i3{ // to overcome the same name ambiguity method overriding is preferred
	public default void square(int x)
	{
		System.out.println("cube= "+(x*x*x));
	}
}
class class1 implements i2,i3
{
	public void square(int x)
	{
		System.out.println("Square Overidden= "+(x*x));
		i3.super.square(100); // super method in interface
		i2.super.square(1000);// super method in interface
	}
}
public class a_6 {

	public static void main(String[] args) {
		class1 obj = new class1();
		obj.square(10);
	}

}
