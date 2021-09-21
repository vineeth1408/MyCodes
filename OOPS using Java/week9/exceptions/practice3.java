
public class practice3{

	static void one(){
			two();
	}
	static void two(){
			 try{
		 	int x=2/0;
		 }
		 catch (Exception e){
		 	throw e;
		 }
		// throw new Exception("Two() Exception");

	}

	public static void main(String[] args) {
		try{
			one();
		}
		catch (Exception e){
			System.out.println("Exception in Main "+e);
		}

	}
}