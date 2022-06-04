package LAB;
import java.util.*;
public class calculator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int num1=0,num2=0,answer=0;
		
		for(int i=0;i<s.length();i++) 
		{
			if(s.charAt(i)>='0' && s.charAt(i)<='9') 
				num1 = (num1*10) + (s.charAt(i)-'0');
			
			
			if(s.charAt(i)=='/' || s.charAt(i)=='*' || s.charAt(i)=='+' || s.charAt(i)=='-') {
				for(int j=i+1;j<s.length();j++) 
				{	
					if(s.charAt(i)>='0' && s.charAt(i)<='9') 
					num2 = (num2*10) +(s.charAt(j)-'0');
				}
				if(s.charAt(i)=='+') {
					answer=(num1+num2);
				}
				else if(s.charAt(i)=='/') {
					answer = (num1/num2);
				}
				else if(s.charAt(i)=='*') {
					answer = (num1*num2);
				}
				else if(s.charAt(i)=='-') {
					answer = (num1-num2);
				}
				break;
			}
		}
		System.out.println(answer);
	}

}
