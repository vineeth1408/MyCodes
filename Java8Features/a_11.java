package Java8Features;
// how to provide implementation using lambda expression to an interface
// lambda unnamed 
// this was introduced to develop functional programming in java
// lamda is one anonymous function only provide implementation for functional interfaces
// lamda is a type of object without any name
// lamda is best suitable for collection frameworks and iterations in stream API
@FunctionalInterface
interface i11{
	public abstract void m1();
}
public class a_11 {
	public static void main(String[] args) {
		i11 obj = new i11() {
			@Override
			public void m1() {
				System.out.println("M1-Anonymous");
			}
		};
		obj.m1();
		
		i11 obj1= ()-> System.out.println("N1-Lambdas");
		obj1.m1(); // lambdas don't generate any class files
	}
}
