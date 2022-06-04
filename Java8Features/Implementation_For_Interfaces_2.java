package Java8Features;
// How many ways we can provide implementation for interfaces from java 8?
// ans:- by writing anonymous inner classes
// anonymous inner class - giving quick implememtaion to interfaces
// for anonymous inner classes we get separate .class file
public class Implementation_For_Interfaces_2 {
	public static void main(String [] args)
	{
		test t = new test()
				{
					public void m1()
					{
						System.out.println("M1-interface absract method");
					}
				};
				t.m1();
	}
}

interface test{
	public abstract void m1();
}
// making anonymous inner class to implement an interface
// there are 4 ways to implemnt an interface
// TYPE -1 by using normal implement class
// TYPE -2 by using anonymous inner classes
// TYPE -3 by lambda
// TYPE -4 by method references