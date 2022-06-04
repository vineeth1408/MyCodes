package DSA540;
// 1. Min and max in an array
public class MinMaxInArray_2 {

	public static void main(String[] args) {
		// Brute force is sort the array and print first and last element in an array
		// Time complexity : O(n log n);
		int a[]= {2,5,1,1,3,4};
		int max,min;
		if(a.length==1) {
			max=a[0];
			min=a[0];
		}
		// halt the program by returning
		// In this method, the total number of comparisons is
		// 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case. 
		if(a[0]>a[1]) {
			max=a[0];
			min=a[1];
		}
		else{
			max=a[1];
			min=a[0];
		}
		for(int i=2;i<a.length-1;i++) {
			if(a[i]>max) {
				max=a[i];
			}
			if(a[i]<min) {
				min=a[i];
			}
		}
		System.out.println("Min ="+min+"\n"+"Max= "+max);

	}

}
