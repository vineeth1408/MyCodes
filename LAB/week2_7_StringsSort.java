package LAB;
import java.util.*;
public class week2_7_StringsSort {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s[] =new String[5];
		for(int i=0;i<5;i++) {
			s[i]=sc.next();
		}
		String temp;
		for(int i=0;i<5;i++) {
			for(int j=0;j<5-i-1;j++) {
				if(s[j].compareTo(s[j+1])>0) {
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
			}
		}
		System.out.println(s[0]+" "+s[1]+" "+s[2]);

	}

}
