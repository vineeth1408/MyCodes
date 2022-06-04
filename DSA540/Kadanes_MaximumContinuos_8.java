package DSA540;

import java.util.Arrays;

// find Largest sum contiguous Subarray [V. IMP]
public class Kadanes_MaximumContinuos_8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a[] = {1,2,3,-2,5};
		Method1(a);
		Method2(a);
		Method3(a);
		Method4(a);
	}
	public static void Method1(int a[]) {
		// Brute Force Approach
		// Time complexity : O(n^3);
		int max=Integer.MIN_VALUE;
		for(int i=0;i<a.length;i++) {
			for(int j=i;j<a.length;j++) {
				int sum=0;
				for(int k=i;k<=j;k++) {
					sum=sum+a[k];
					System.out.print(a[k]+" ");
				}
				if(sum>max)
					max=sum;
				System.out.println();
			}
		}
		System.out.println("Brute Force ="+max);	
	}
	public static void Method2(int a[]) {
		// Time=O(n) Space=and O(1);
		int max_so_far =a[0];
		int curr_max = a[0];
		for(int i=1;i<5;i++) {
			curr_max = Math.max(a[i], curr_max+a[i]);
			max_so_far = Math.max(max_so_far, curr_max);
		}
		System.out.println("Kadanes's max= "+max_so_far);
	}
	public static void Method3(int a[]) {
		// prefix sum algorithm
		// O(n^2) space: O(n)
		int prefix[]= new int[a.length+1];
		prefix[0]=0;
		for(int i=1;i<=a.length;i++) {
			prefix[i]=prefix[i-1]+a[i-1];
		}
		int max=Integer.MIN_VALUE;
		for(int i=1;i<=a.length;i++) {
			for(int j=i;j<=a.length;j++) {
				int sum=prefix[j]-prefix[i-1];
				if(sum>max)
					max=sum;
			}
		}
		System.out.println("Max using Prefix sum="+max);
	}
	public static void Method4(int a[])
	{
		// prefix sum algorithm
		// calculate sum between given range
		for(int i=1;i<a.length;i++)
		{
			a[i]=a[i]+a[i-1];
		}
		System.out.println(Arrays.toString(a));
		// sum between range is A[0,J]=A[j];
		int i=0,j=4;
		System.out.println(a[j]);
		// if the range is between [i,j] then
		i=1;
		j=4;
		System.out.println(a[j]-a[i-1]);
	}
}
