/*Write a java program to multiply two given matrices. */
import java.util.*;
public class week2_5{
	public static void main(String apple[]){
		
		int n;
		Scanner in =new Scanner(System.in);
		System.out.println("enter size\n");
		n=in.nextInt();
		int [][]a = new int[n][n]; // int size is 4 bytes
		System.out.println("enter values in a\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
					a[i][j]=in.nextInt();
			}
		}
		System.out.println("enter values in b\n");
		int [][]b = new int[n][n]; // int size is 4 bytes
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
					b[i][j]=in.nextInt();
			}
		}

		int [][]c = new int[n][n]; // int size is 4 bytes
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				c[i][j]=0;
				for(int k=0;k<n;k++)
				{

					c[i][j]=c[i][j]+ (a[i][k]*b[k][j]);
				}
			}
		}
		System.out.println("\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
					System.out.print(c[i][j]+" ");
			}
				System.out.println(" ");
		}
		
}}
//  r1 c1 = r2 c2 
if(c1==r2)