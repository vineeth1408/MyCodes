/*Write a program that shows that the order of the catch blocks is important. If you try to
catch a superclass exception type before a subclass type, the compiler should generate
errors.  */
public class week9_2{
	
	public static void main(String[] args) {
		try{
			throw new InterruptedException("InterruptedException");
		}
		catch(InterruptedException ie){
			System.out.println(ie.getMessage());
		}
		catch(Exception e){
			System.out.println("Exception");
		}
		
	}
}
// Following code throws Error
// public static void main(String[] args) {
// 		try{
// 			throw new InterruptedException("InterruptedException");
// 		}
// 		catch(Exception e){
// 			System.out.println("Exception");
// 		}
// 		catch(InterruptedException ie){
// 			System.out.println(ie.getMessage());
// 		}
// 	}
// }
