/*  Write a Java program to implement binary search.*/
import java.util.*;
public class week2_3{
	public static void main(String apple[]){
		int n;
		Scanner in =new Scanner(System.in);
		System.out.println("enter size\n");
		n=in.nextInt();
		int []a = new int[n]; // int size is 4 bytes
		for(int i=0;i<n;i++){

			a[i]=in.nextInt();
		}
		Arrays.sort(a);

		int key,i,low=0,high=a.length,mid;
		System.out.println("enter key to find\n");
		key=in.nextInt();
		int c=0;
		int location=0;

		while(low < high){

			mid=(low+high)/2;
			if(a[mid]==key){
				c=1;
				location=mid;
				break;
			}
			else if ( key > a[mid]){
				low=mid+1;
				high=high;
			}
			else
			{
				low=low;
				high=mid-1;
			}
		}
		if(c==1){
			System.out.println("found at= "+ location);
		}
		else
		{
			System.out.println("not found");	
		}

		System.out.println(Arrays.toString(a));
	}
}