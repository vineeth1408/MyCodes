/* Write a Java program to implement calculator operations
*/
import java.util.Scanner;
public class week1_3{
	public static void main(String apple[])
	{	
		boolean i=true;
		while(i){
		Scanner in = new Scanner(System.in);
		double a,b;
		char option;
		System.out.println("ENTER VALUE 1\n");
		a=in.nextDouble();
		System.out.println("ENTER VALUE 2\n");
		b=in.nextDouble();
		System.out.println("ENTER OPERATIOR TO CALUCULATE\n");
		option= in.next().charAt(0);

		switch(option){
			case '+':{
			System.out.println("SUM= " +(a+b));}
			break;

			case '-':
			System.out.println("SUM= " +(a-b));
			break;

			case '*':
			System.out.println("SUM= " +(a*b));
			break;

			case '/':
			System.out.println("SUM= " +(a/b));
			break;

			default : System.out.println("INVALID OPERATIOR\n");
		}
		System.out.println("PRESS 1: TO CALCULATE AGAIN \t 2: EXIT\n");
		int k;
		k=in.nextInt();
		i=(k==1)?true:false;
		
	}
	}
}