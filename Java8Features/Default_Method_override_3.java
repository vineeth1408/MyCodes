package Java8Features;

interface p{
	public default void m1()
	{
		System.out.println("Def-Meth M1");
	}
	public default void m3()
	{
		System.out.println("Def-Meth M3");
	}
}
interface q{
	public default void m2()
	{
		System.out.println("Def-Meth in M2");
	}
	public default void m3()
	{
		System.out.println("Def-Meth M3");
	}
	
}
class an implements p,q{
	@Override
	public void m1()
	{
		System.out.println("An class M1");
	}
	public void m2()
	{
		System.out.println("An class M2");
	}
	public void m3()
	{
		System.out.println("An class M3");
	}
}
public class Default_Method_override_3 {

	public static void main(String[] args) {
		an obj = new an();
		obj.m1();
		obj.m2();
		obj.m3();
	}

}

// default methods can be overloaded and overridden