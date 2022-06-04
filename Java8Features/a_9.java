package Java8Features;
// functional interfaces in java 1.8
// java.lang.object class abstract classes can be written in functional interfaces
// second method should be in java.lang.Object
@FunctionalInterface
interface i6{
	public abstract void m1();
	//public abstract void m2();
	public abstract String toString(); // in the background the implementation is there
	public abstract int hashCode();
}
// class class7 extends java.lang.Object implements i6 same works
class class7 implements i6{ // extends java.lang.Object automatically there
	public void m1() 
	{
		System.out.println("M1-Method");
	}
	@Override
	public String toString()
	{
		return "String Implementation";
	}
	@Override
	public int hashCode()
	{
		return 123;
	}
}
public class a_9 {
	public static void main(String[] args) {
		i6 obj = new class7();
		obj.m1();
		System.out.println(obj.hashCode());
		System.out.println(obj.toString());
	}
}
