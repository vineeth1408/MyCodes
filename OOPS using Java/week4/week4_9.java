/*Write an application that changes any given string with uppercase letters, displays
it, changes it back to lowercase letters and displays it*/
import java.util.*;
public class week4_9{
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		String s1= in.nextLine();		
		System.out.println(s1.toUpperCase());
		System.out.println(s1.toLowerCase());

	}
}