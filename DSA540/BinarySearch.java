package DSA540;

public class BinarySearch {

	public static void main(String[] args) {
		int a[]= {1,2,3,4,5};
		System.out.println(iterative(a,0,4,1));
		
		System.out.println("recursion= "+recursion(a,0,4,5));

	}
	public static int iterative(int a[],int low,int high,int key)
	{
		while(high>=low) {
			int mid=(low+high)/2;
			if(a[mid]==key) {
				return mid;
			}
			else if (a[mid]<key) {
				low=mid+1;
			}
			else {
				high=mid-1;
			}
		}
		return -1;
	}
	public static int recursion(int a[],int low,int high,int key)
	{
		if (high>=low) {
			int mid=(low+high)/2;
			if(a[mid]==key)
				return mid;
			if(a[mid]<key)
				return recursion(a,mid+1,high,key);
			return recursion(a,low,mid-1,key);
		}
		return -1;
	}

}
