package Java8Features;
// default methods introduced in java 1.8
// without doing modifications on implementation classes of interface, if we want add new service/logic 
// then we should write that logic in interface by using default methods
interface i{
	public abstract void m1();
	public abstract void m2();
}
interface j extends i // extending so it actually have 3 methods
{
	public abstract void m3();
}
// every abstract method is used in all implemented classes so to overcome this problem
// we use adapter class-its provide empty implementation for all the specifications in the interface
class A implements j // it actually having 3 methods
{
	public void m1()
	{
		System.out.println("M1-METHOD in A");
	}
	public void m2()
	{
		System.out.println("M2-METHOD in A");
	}
	public void m3()
	{
		System.out.println("M3-METHOD in A");
	}
}
class B implements j
{
	public void m1()
	{
		System.out.println("M1-METHOD in B");
	}
	public void m2()
	{
		System.out.println("M2-METHOD in B");
	}
	public void m3()
	{
		System.out.println("M3-METHOD in B");
	}
}

public class Default_Methods_In_Interface_3 {
	public static void main(String []a)
	{
		j obj = new A(); // loosley coupling and runtime polymorphism
		obj.m1();
		obj.m2();
		obj.m3();
		
		obj=new B(); // jvm concentrates on Memory allocation and all
		obj.m1();
		obj.m2();
		obj.m3();
	}
}