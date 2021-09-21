// Write an application that uses String method charAt to reverse the string. 
import java.util.*;
public class week4_7{
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		String s1= in.nextLine();
		// StringBuffer s =new StringBuffer("vineeth");
		// System.out.println(s.reverse());
		String reverse="";
		for(int i=s1.length()-1;i>=0;i--){
			reverse=reverse+s1.charAt(i);
		}
		System.out.println(reverse);
	}
}