package LAB;
import java.util.*;
public class week4_3 {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		int count=0;
		char c = in.next().charAt(0);
		System.out.println(s.indexOf(c));
		for(int i=0;i<s.length();i++) {
			if(s.charAt(i)==c) {
				count++;
			}
		}
		System.out.println(count);

	}

}
