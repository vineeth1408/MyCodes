package DSA540;

public class Inner_class { // outer class
	void outermethod()
	{
		System.out.println("Outer Method");
	}
	class Ineer{
		public static void main(String[] args) // class not found exception
		{
			System.out.println("Inside inner class main method");
		}
	}
}
