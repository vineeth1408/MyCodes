/*Write a Java program to sort given list of numbers.
 */
import java.util.*;
public class week2_1{
	public static void main(String apple[]){
		
		 // int size is 4 bytes
		int n;
		Scanner in =new Scanner(System.in);
		n=in.nextInt();
		int []a = new int[n];
		for(int i=0;i<n;i++){

			a[i]=in.nextInt();
		}
		for(int i=0;i<a.length;i++){
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j] > a[j+1])
				{
					a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);
				}
			}
		}
		// System.out.println(Arrays.toString(a));
		for(int i=0;i<a.length;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
}