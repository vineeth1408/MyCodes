package LAB;
import java.util.*;
public class week1_3_calculator {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double a,b;
		char s;
		int k;
		boolean i=true;
		while(i){
			a=sc.nextDouble();
			b=sc.nextDouble();
			s=sc.next().charAt(0);
			switch(s) {
			case '+':System.out.println(a+b);
			break;
			case '-':System.out.println(a-b);
			break;
			case '*':System.out.println(a*b);
			break;
			case '/':System.out.println(a/b);
			break;
			default:System.out.println("Default");
			}
			System.out.println("1 calculate 2 exit");
				k=sc.nextInt();
				i=(k==1)?true:false;
		}

	}

}
