// Write an application that finds the length of a given string. 
import java.util.*;
public class week4_6{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int c=0;
		String a=in.nextLine();
		//StringBuffer a=new StringBuffer("vineeth");
		char ch[]= a.toCharArray();
		// System.out.println(a.length());
		for(char k:ch ){
			c++;
		}
		System.out.println(c);
	}
	

}
