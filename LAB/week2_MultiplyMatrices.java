package LAB;
import java.util.*;
public class week2_MultiplyMatrices {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		int [][]a = new int[n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				a[i][j] = sc.nextInt();
			}
		}
		int [][]b = new int [n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				b[i][j] = sc.nextInt();
			}
		}
		System.out.println("MULTIPLICATION");
		int [][]c = new int[n][n];
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				c[i][j]=0;
				for(int k=0;k<n;k++) {
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.println(c[i][j]);
			}
		}

	}

}
