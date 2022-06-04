package Java8Features;
// can we override java.lang.Object class methods as default methods in interface ?
// no we cannot
// java.lang.objrct is super class for all the classes
interface i1
{
	//public default String toString() // we cannot override 
	//{
		// the method signature is not an object of java.lang.Object class
		// then we cannot override default 
		// if it is normal default method we can override
	//}
	public default String m1()
	{
		return "vineeth";
	}
}
class poo implements i1{
	
}
public class a_5 {
	public static void main(String[] args) {
	i1 obj = new poo();
		System.out.println(obj.m1());	
	}
}