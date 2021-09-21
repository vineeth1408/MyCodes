/* Write Java program for the following
a. Example for this operator and the use of this keyword.
b. Example for super keyword.
c. Example for static variables and methods.*/
class TestParent {
	int y;

	TestParent(int y) {
		this.y = y;
	}
}

class TestChild extends TestParent {
	int x;
	static int z;

	TestChild(int x, int y) {
		super(y);
		super.y++;
		this.x = x;
	}

	public static void setZ(int k) {
		z = k;
	}
}

class week5_5 {
	public static void main(String[] args) {
		TestChild t = new TestChild(10, 15);
		TestChild.z = 20;
		System.out.print("x: "+t.x+", y: "+t.y+", z: "+TestChild.z);
		TestChild.setZ(25);
		System.out.println(", z: "+TestChild.z);
	}
}