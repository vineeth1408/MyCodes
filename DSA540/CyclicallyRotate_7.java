package DSA540;

import java.util.Arrays;

// Write a program to cyclically rotate an array by one.
public class CyclicallyRotate_7 {
	public static void main(String args[]) {
		int a[]= {1,2,3,4,5};
		int temp=a[5-1];
		for(int i=4;i>0;i--) {
			a[i]=a[i-1];
		}
		a[0]=temp;
		//rotate(a,0,1);
		System.out.println(Arrays.toString(a));
		String s="vineeth";
		String r="";
		int n =s.length();
		for(int i=s.length()-1;i>=0;i--)
		{
			r=r+s.charAt(i);
		}
		System.out.println(r);
	}

}