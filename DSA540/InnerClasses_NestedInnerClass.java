package DSA540;

public class InnerClasses_NestedInnerClass {

	public static void main(String[] args) {
		
		outer.inner obj = new outer().new inner(); //object for inner show method
		obj.show();
		outer obj1 = new outer(); // object for inner show method
		obj1.show();
	}

}

class outer{
	public void show()
	{
		System.out.println("Outer show method");
	}
	class inner{
		inner obj = new inner();
		public void show() // methods should be public otherwise an't access
		{
			System.out.println("Inner Show method");
		}
	}
}