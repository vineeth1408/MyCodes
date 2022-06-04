//count triplets that sum to a given value 
package DSA540;

import java.util.Arrays;

public class TripletSum {

	public static void main(String[] args) {
		int a[] = {1,2,3,4,5};
		bruteforce(a,10); // O(n^3)
		setapproach(a,10); // O(n^2) un ordered set
		sortingapproach(a,10);// o(n^2) but constant time
	}
	public static void bruteforce(int a[],int n)
	{
		for(int i=0;i<a.length;i++)
		{
			for(int j=i+1;j<a.length;j++)
			{
				for(int k=j+1;k<a.length;k++)
				{
					if(a[i]+a[j]+a[k]==n) 
					{
						System.out.print(a[i]+" "+a[j]+" "+a[k]);
					}
				}
				System.out.println();
			}
		}
		// 1 2 3 | 1 2 4 | 1 2 5 | 1 2 6
		// 1 3 4 | 1 3 5 | 1 3 6|
		// 1 4 5 | 1 4 6
		// 1 5 6
	}
	public static void setapproach(int a[],int n)
	{
		
	}
	public static void sortingapproach(int a[],int key)
	{
		Arrays.sort(a);
		int n=a.length;
		for(int i=0;i<n-2;i++)
		{
			int l=i+1;
			int r=n-1;
			while(l<r)
			{
				if(a[i]+a[l]+a[r]==key)
				{
					System.out.println(a[i]+" "+a[l]+" "+a[r]);
					break;
				}
				else if(a[i]+a[l]+a[r]<key)
				{
					l++;
				}
				else
				{
					r--;
				}
			}
		}
	}
	// 1 2 3 4 5  
	// i=1,l=2,r=5 STEP-1
	// i=1,l=3,r=5 STEP-2  l++;
	// i=1 l=4 r=5
}
