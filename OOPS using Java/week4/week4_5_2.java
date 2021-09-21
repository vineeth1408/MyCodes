/*Write a Java program to print all vowels in given string and count number of
vowels and consonants present in given string */
import java.util.*;
public class week4_5_2{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		String a = in.nextLine();
		int c=0,c1=0;
		Vector<Character> v = new Vector<Character>();
		v.add('a');
		v.add('e');
		v.add('i');
		v.add('o');
		v.add('u');
		//StringBuffer a=new StringBuffer("vineeth");
		for(int i=0;i<a.length();i++){
			if(v.contains(a.charAt(i))){
				c++;
			}
		}
		System.out.println("vowels= "+c);	
	}
}
