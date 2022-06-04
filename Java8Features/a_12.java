package Java8Features;
// Are functional interfaces participate in inheritance ? yes
// they participate in inheritance but only maintains one abstract method
// whether it is parent method or its own method
interface i12{
	public abstract void m1();
}
@FunctionalInterface
interface i122 extends i12{
	// public abstract void m2();
}
public class a_12 {

	public static void main(String[] args) {
		System.out.println("EXECUTED");
		i122 obj = new i122() {
			@Override
			public void m1()
			{
				System.out.println("M1- Anonymous");
			}
		};
		obj.m1();
	}

}
