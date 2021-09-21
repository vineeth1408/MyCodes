/*Write a java program to find whether given number is Palindrome or not */
import java.util.Scanner;
public class week1_5{
	public static void main(String a[]){
		Scanner in = new Scanner(System.in);
		int n,temp,rem=0;
		n=in.nextInt();
		temp=n;
		while(n>0){
			rem = rem*10 +(n%10);
			n=n/10;
		}
		if(rem==temp){
			System.out.println("palindrome\n");
		}
		else
		{
			System.out.println("not palindrome\n");	
		}
	} 
}