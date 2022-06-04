package LAB;
import java.util.*;
public class week1_5_Palindrome {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int temp=n;
		int r=0;
		while(n>0) {
			r=r*10+(n%10); 
			n=n/10;
		}
		if(r==temp)
			System.out.println("Pal");
		System.out.println("Enter string to know whether it is palindrome");
		String s  = sc.next();
		StringPalindrome(s);

	}
	public static void StringPalindrome(String s) {
		String n ="";
		for(int i=s.length()-1;i>=0;i--) {
			n=n+s.charAt(i);
		}
		if(s.equals(n)) {
			System.out.println("Palaindrome");
		}
	}

}
