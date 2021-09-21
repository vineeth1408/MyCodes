/*Write an application that uses String method equals and equalsIgnoreCase to tests
any two string objects for equality.  */
import java.util.*;
public class week4_2{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		String s1= in.next();
		// in.nextLine();
		String s2= in.next();
		if(s1.equals(s2) || s1.equalsIgnoreCase(s2)){
			System.out.println("Strings are equal");

		}
		else{
			System.out.println("Strings are not equal");
		}

	}
}