/*Write a java program to find prime factors of given number */
import java.util.Scanner;
public class week1_4{
	public static void main(String apple[]){
		Scanner in = new Scanner(System.in);
		int n,i,j,c=0;
		n=in.nextInt();
		for(i=2;i<=n;i++){
			while(n%i==0){
				System.out.print(i+" ");
				n=n/i;
			}

		}	
	}
}