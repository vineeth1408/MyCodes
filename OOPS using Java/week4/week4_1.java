/*Write an application that uses String method compareTo to compare two strings
defined by the user.  */
import java.util.*;
public class week4_1{
	public static void main(String args[]){

		Scanner in= new Scanner(System.in);
		String s1=in.nextLine();
		String s2=in.nextLine();

		if(s1.compareTo(s2)==0){
			System.out.println("Two strings are Equal");

		}
		else{
			System.out.println("Strings are not Equal");
		}

	}
}