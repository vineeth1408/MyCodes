package DSA540;
import java.util.*;
//5. Move all negative numbers to beginning and positive to end with constant extra space
public class MoveNegativeToLeftSide_5 {
	// Time complexity O(n)
	// Space Complexity: O(1)
	public static void main(String[] args) {
		int arr[] = {-12, 11, -13, -5,6, -7, 5, -3, 11};
		MoveToFront(arr);
		MoveToRear(arr);
	}
	public static void MoveToFront(int arr[]) {
		int boundary=-1;
		for(int i=0;i<arr.length;i++) {
				if(arr[i]<0) {
					boundary++;
				swap(arr,i,boundary);
			}
		}
		System.out.println("Move to FRONT");
		System.out.println(Arrays.toString(arr));
	}
	public static void MoveToRear(int arr[])
	{
		int boundary=arr.length;
		for(int i=arr.length-1;i>=0;i--) {
				if(arr[i]<0) {
					boundary--;
				swap(arr,i,boundary);
			}
		}
		System.out.println("Move to REAR");
		System.out.println(Arrays.toString(arr));

	}
	public static void swap(int a[],int i,int j) {
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
