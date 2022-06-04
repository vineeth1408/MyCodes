package Java8Features;
//how many ways we can able to provide implementation for interface from jdk 1.8
//four approaches
// 1. by writing separate classes
// 2. by writing anonymous inner class
// 3. by writing lambda expression
// 4. by writing method references
// interface designed for roles/specifications -> abstract methods
// implementaions/logic -> concrete methods -->class
// interface rules are given to application developers and third party vendor organizations
interface i10{
	public abstract void m1();
	public abstract void m2();
}
class class10 implements i10{ // forcibility concept here class must and should provide for all the methods in interfaces
	public void m1()
	{
		System.out.println("M1-method");
	}
	public void m2()
	{
		System.out.println("M2-method");
	}
}
public class a_10 {

	public static void main(String[] args) {
		i10 obj = new class10();
		obj.m1();
		obj.m2();
		// this is one way to provide implementation to interface
	}

}
