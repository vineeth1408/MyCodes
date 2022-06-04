package DSA540;
import java.util.*;
// 6. Given two arrays a[] and b[] of size n and m respectively.
// The task is to find union between these two arrays.
public class UnionOfTwoArray_6 {

	public static void main(String[] args) {
		int a[]= {1,2,3,4,5};
		int b[]= {1,2,3};
		Vect(a,b);
		SetMethod(a,b);
		Intersection(a,b);
		// Time Complexity: O(n+m) linear time complexity
		// Second method: insert all in one set and search using binary search
		// and update the array O(n long n+ m log m)
	}
	public static void Intersection(int a[],int b[]) {
		System.out.println("INTERSECTION");
		for(int i=0;i<a.length;i++) {
			for(int j=0;j<b.length;j++) {
				if(a[i]==b[j]) {
					System.out.print(a[i]+" ");
				}
			}
		}
	}
	public static void Vect(int a[],int b[] ){
		
		Vector<Integer> v = new Vector<Integer>();
		for(int i=0;i<a.length;i++) {
			if(!v.contains(a[i])) {
				v.add(a[i]);
			}
		}
		for(int i=0;i<b.length;i++) {
			if(!v.contains(b[i])) {
				v.add(b[i]);
			}
		}
		System.out.println("USING VECTOR COLLECTIONS ");
		System.out.println(v);
	}
	public static void SetMethod(int a[],int b[]) {
		
	System.out.println("USING COLLECTIONs SET");
		Set<Integer> set = new HashSet<Integer>();
		for(int i=0;i<a.length;i++) {
			    set.add(a[i]);
			}
		for(int i=0;i<b.length;i++) {
			set.add(b[i]);
		}
		System.out.println(set);
	}	
}
