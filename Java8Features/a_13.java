package Java8Features;
// lambda expressions in java 1.8
// anonymous function/unnamed function/anonymous expression
// every anonymous function is class object
// writing less code and perform more operations
// best suitable for collection framework objects
// (datatype paramenter, datatype parameter,.....) -> {Statements};
@FunctionalInterface
interface i13{
	public abstract void m1();
}
interface i133{
	public abstract void m2(int x);
}
public class a_13 {
	public static void main(String[] args) {
		i13 obj = new i13() {
			@Override
			public void m1()
			{
				System.out.println("m1-anonymous");
			}
		};
		obj.m1();
		i13 obj1 = ()->{System.out.println("m1-lambda");};
		obj1.m1();
		System.out.println(obj1.hashCode());
		
		i133 obj2 = (x) ->{System.out.println("x: "+x);};
		obj2.m2(123);
	}
	
}
