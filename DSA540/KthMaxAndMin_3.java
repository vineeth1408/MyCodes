package DSA540;
//3. Find the "Kth" max and min element of an array
import java.util.*;
public class KthMaxAndMin_3 {

	public static void main(String[] args) {
		// Brute Force Approach
		// Sort and print the Kth element so Time Complexity=O(n logn)
		// or max heap or min heap approach
		// sort Time Complexity is O(n+k logn)
		// best approach is Partition approach best O(n) and worst O(n^2)
		PriorityQueue<Integer> pQueue = new PriorityQueue<Integer>();
		pQueue.add(1);
		pQueue.add(2);
		pQueue.add(10);
		pQueue.add(4);
		pQueue.add(5);
		pQueue.add(6);
		int i=6,k=3;
		int ans=0;
		while(!pQueue.isEmpty()) {
			if(i==k) {
				ans=pQueue.peek(); // retries the head but does not removes;
				break;
			}
			i--;
			pQueue.poll();// removes head element
		}
		System.out.println(ans);
		
	}

}
