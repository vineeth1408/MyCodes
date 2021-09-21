/*Write an application that uses String method indexOf to determine the total
number of occurrences of any given alphabet in a defined text.  */
import java.util.*;
public class week4_3{
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);

		String s1= in.nextLine();
		// in.nextLine();
		int count=0;
		char c= in.next().charAt(0);
		


		// for(int i=index;i<s1.length();i++){
		// 	if(s1.charAt(i)==s1.charAt(s1.indexOf(c))){
		// 		count++;
		// 	}
		// 	// if(s1.charAt(i)==c){
		// 		// count++;
		// 	//}
		// }
		count=0;
		int start=0;
		
		for(;;){
			int index = s1.indexOf(c,start);
			if(index>=0){
				count=count+1;
				start = index+1;
			}
			else
			break;
		}
		System.out.println("count= "+count);

	}
}