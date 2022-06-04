package LAB;

public class static_keyword {
	static int data;
	static {
		data=50;
		int b=40;
	}
	public static void main(String[] args) {
		System.out.println(static_keyword.data+" "+b);
		me();
	}
	public static void me() {
		
	}
}
