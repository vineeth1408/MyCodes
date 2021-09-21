/*Write a Java program to print all vowels in given string and count number of
vowels and consonants present in given string */
import java.util.*;
public class week4_5{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int c=0;
		//StringBuffer a=new StringBuffer("vineeth");
		String a=in.next();
		for(int i=0;i<a.length();i++){
			if(a.charAt(i)=='a' || a.charAt(i)=='e' || a.charAt(i)=='i' || a.charAt(i)=='o' || a.charAt(i)=='u'){
				c++;
				System.out.print(a.charAt(i)+" ");
			}
		}
		System.out.println("\n");
		System.out.println("vowels= "+c);
		System.out.println("consonants= "+(a.length()-c));
		
	}
	

}
