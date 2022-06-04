package LAB;
import java.util.*;
public class week1_4_primeFactors {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=2;i<=n;i++) {
			while(n%i==0) {
				System.out.println(i+" ");
				n=n/i;
			}
		}

	}

}
