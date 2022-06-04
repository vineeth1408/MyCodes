package LAB;

public class week5_3 {
	int data =50;
	void change(int data) {
		data = data+100;
	}
	public static void main(String[] args) {
		// data obj = new data();
		week5_3 obj = new week5_3();
		System.out.println("CALL BY VALUE");
		System.out.println("BEFORE CHANGE "+obj.data);
		obj.change(500);
		System.out.println("AFTER CHANGE "+obj.data);
		
		System.out.println("CALL BY REFERENCE");
		
//		System.out.println(	"BEFORE CHANGE "+obj.data);
//		obj.reference(obj);
//		System.out.println("AFTER CHANGE "+obj.data);
//		

	}

}
//class data{
//	int data=50;
//	void change(int data) {
//		data=data+100;
//	}
//	void reference(data obj) {
//		obj.data = obj.data+100;
//	}
//}
