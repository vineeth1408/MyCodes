/* Write an application that finds the substring from any given string using substring
 method and startsWith & endsWith methods. */
import java.util.*;
public class week4_8{
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int choice=1;

		while(choice==1){
			System.out.println("PRESS 1:- INPUT 2:- EXIT");
		choice = in.nextInt();
		in.nextLine();
		
		switch(choice){
		case 1:
				String s1= in.nextLine();
				String s2=in.nextLine();
				if(s1.startsWith(s2)){
					System.out.println("string starting with "+s2);
				}
				else if(s1.endsWith(s2)){
					System.out.println("string ending with "+s2);
				}
				else if(s1.contains(s2)){
					System.out.println("substring "+s2+" present in Main string");	
				}
				else{
					System.out.println("NOT PRESENT IN THE GIVEN STRING");	
				}
			break;
		case 2:
		break;
	}}

	}
}