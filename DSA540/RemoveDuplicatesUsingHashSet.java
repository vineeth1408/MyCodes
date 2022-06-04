package DSA540;
import java.util.*;
// remove duplicates from a given string
public class RemoveDuplicatesUsingHashSet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char a[] = "characters vineet".toCharArray();
		removeChar(a,a.length);
		String str[] = new String[4];
		str[0]="vineeth";
		//removeString(str);
	}
	public static void removeChar(char a[],int n)
	{
		LinkedHashSet<Character> s = new LinkedHashSet<>(n-1); //LinkedHashSet to keep in order
		for(Character x:a) {
			s.add(x);
		}
		for(Character x:s) {
			System.out.print(x);
		}
	}
	public static void removeString(String str) {
		Vector<String> v = new Vector<>();
		for(int i=0;i<str.length();i++) {
			//if(!v.contains(str[i])) {
				
			}
		}
	
}