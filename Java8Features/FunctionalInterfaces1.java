package Java8Features;
// functional interfaces already there n java 1.7 but added more features in java 1.8
// An interface which only allows one abstract method
// from 1.8 we can write more then one static and more then one default methods
// we can write java.lang.Object Class method
// mainly used for functional programming in java and also to develop lambda expression and to develop method interfaces
@FunctionalInterface // annotation
// Interfaces has 3 types
// type 1 market interface type 2 functional interface type 3 non-functional interface
//T-1 an interface which has no method is marker interface which is used to make our object specialized to perform some operations like serializations
//T-2 functional interface only one abstract method
//T-3 other than functional interfaces
interface ii{
	public abstract void m1();
	//public abstract void m2();
	public default void m2()
	{
		System.out.println("M2-default");
	}
	public default void m3()
	{
		System.out.println("M3-default");
	}
	public static void m4()
	{
		System.out.println("M4-static");
	}
	public static void m5()
	{
		System.out.println("M5-static");
	}
}
public class FunctionalInterfaces1 implements ii{
	public void m1() {
		System.out.println("M1-TEST-CLASS");
	}
	public static void main(String[] args) {
		ii.m4();
	ii.m5();
		FunctionalInterfaces1 obj = new FunctionalInterfaces1();  // normal class object creation
		ii obj1 = new FunctionalInterfaces1(); //loosely coupling creating object based on interface
		obj.m1();
		obj1.m2();
		obj1.m1();
	}
}
