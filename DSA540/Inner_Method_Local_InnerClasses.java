package DSA540;

public class Inner_Method_Local_InnerClasses {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		outers obj = new outers();
		obj.outermethod();
		
	}

}
class outers{
	void outermethod() {
		System.out.println("Inside Outer Method");
		int x=98; // accessing this variable is not possible in jdk 1.7 but now possible jdk 1.8
		// class 2 inner class
		// method local inner class
		class inner{
			void innermethod()
			{
				System.out.println("Inside inner Method with value="+x);
			}
		}
		inner y = new inner();
		y.innermethod();
	}
}
