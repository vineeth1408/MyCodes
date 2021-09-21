/*Write a Java program to implement linear search.
 */
import java.util.*;
public class week2_2{
	public static void main(String apple[]){
		int n;
		Scanner in =new Scanner(System.in);
		System.out.println("enter size\n");
		n=in.nextInt();
		int []a = new int[n]; // int size is 4 bytes
		for(int i=0;i<n;i++){

			a[i]=in.nextInt();
		}
		int key;
		int i;
		System.out.println("enter key to find\n");
		key=in.nextInt();
		for(i=0;i<a.length;i++){
			if(a[i]==key)
				{
					System.out.println("found at "+i);
					break;
				}
				
			}
		if(i==n){
					System.out.println("not found\n");
				}

		
		System.out.println(Arrays.toString(a));
	}
}