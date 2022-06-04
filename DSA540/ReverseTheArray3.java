package DSA540;
import java.util.*;
//0. Reverse the array 3
public class ReverseTheArray3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a[] = {1,2,3,4,5};
		int start=0;
		int end=a.length-1;
		reverse(a,start,end);
		System.out.println("Normal while loop ="+Arrays.toString(a)); // reverses the array in Time Complexity:-O(n)
		// RecursiveReverse(a,start,end);
		// System.out.println("Recursive ="+Arrays.toString(a)); //Recursively reverses the array in Time Complexity:-O(n)
		System.out.println("Enter upto K value to reverser the array");
		reverse(a,start,sc.nextInt());
		System.out.println("Normal while loop ="+Arrays.toString(a));
	}
	public static void reverse(int a[],int start,int end)
	{
		int temp;
		while(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
	}
	public static void RecursiveReverse(int a[],int start,int end)
	{
		int temp;
		if(start>=end)
			return;
		temp =a[start];
		a[start]=a[end];
		a[end]=temp;
		RecursiveReverse(a,start+1,end-1);
	}
}
