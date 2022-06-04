package NonAccessModifiers;

public class StaticKeyword {

	public static void main(String[] args) {

		student s1 = new student(1408,"Vineeth");
		student s2 = new student(1409,"Vineeth2");
		s1.display();
		s2.display();
	}

}
class student
{
	int rollno;
	String name;
	static String college="RGUKT"; // static variable
	student(int r, String s)
	{
		rollno=r;
		name=s;
	}
	void display()
	{
		System.out.println(rollno+" "+name+" "+college);
	}
}
