package Java8Features;
// static methods in interface from JDK 1.8
interface i4{
//	public default void m1()
//	{
//		System.out.println("Default method");
//	}
//	public abstract void m2();
	public static void m3()
	{
		System.out.println("Static m3");
	}
}
//class class3 implements i4{
//	@Override  //we cannot override static methods
//	public static void m3() {
//		System.out.println("Vineeth");
//	}
//}
//class class2 implements i4{
//	void m2()
//	{
//		System.out.println("M-2");
//		m1();
//	}
//}

public class a_8 {

	public static void main(String[] args) {
		// i4.m1();// illegal
		//class2 obj = new class2();
		//obj.m2();
//		i4 obj = new i4() {
//			@Override
//			public void m2() {
//				System.out.println("Anonymous-M2");
//				m1();
//			}
//		};
//		obj.m2();
//		i4.m3();
	}

}
