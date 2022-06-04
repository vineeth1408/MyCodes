package Java8Features;

interface name
{
	public abstract void m1(); 
	// we cannot write private default methods
	// it should always public
	// public default or default both same
	public default void m2() {
		System.out.println("Default method in M2-Interface");
	}
	public default void m2(int x)
	{
		System.out.println("Method overloading in Interface");
	}
	// can we overload the default methods ? Yes 
	// we cannot override the default methods when it is default but we can easily 
	// override using public default void m2()
}
class vineeth implements name{
	public void m1()
	{
		System.out.println("M1-Vineeth");
	}
	@Override
	public void m2() // overridden methods cannot be defualt
	{
		System.out.println("override in class Vineeth");
	}
}
class mini implements name
{
	public void m1()
	{
		System.out.println("M1-mini");
	}
	@Override
	public void m2()
	{
		System.out.println("Override in class Mini");
	}
}

public class Default_Method_4 {
	public static void main(String[] args)
	{
		name obj = new vineeth();
		obj.m1();
		obj.m2();
		obj= new mini();
		obj.m1();
		obj.m2(100);
	}
}
