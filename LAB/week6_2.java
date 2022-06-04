package LAB;

public class week6_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		child obj = new child();
		parent obj1 = new parent();
		// obj1.print();
		obj.print();
		obj.add(1, 2);
		obj.add(1, 2,3);

	}

}
class parent{
	void print() {
		System.out.println("Parent");
	}
}
class child extends parent{
	void print() {
		System.out.println("Method overriding");
	}
	int add(int a,int b) {
		System.out.println("2 arguments");
		return a+b;
	}
	int add(int a,int b,int c) {
		System.out.println("3 arguments");
		return a+b+c;
	}
}