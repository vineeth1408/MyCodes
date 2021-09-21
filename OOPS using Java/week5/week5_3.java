/*Write a JAVA program for the following a. Call by value b. Call by object */
import java.util.*;
public class week5_3{
	int data =50;
	void change(int num) {
		nums = num+100;
	}
	public static void main(String args[]){
		// Scanner in = new Scanner(System.in);
		// int n= in.nextInt();
		// number obj = new number(n);
		week5_3 obj = new week5_3();
		System.out.println("CALL BY VALUE");
		System.out.println("Before Increment= "+obj.data);
		obj.change(500);
		System.out.println("After Increment= "+obj.data);
		// System.out.println("CALL BY REFERENCE");
		// System.out.println("Before Increment= "+obj.n);
		// obj.inc(obj);
		// obj.inc(n);
		// System.out.println("After Increment= "+obj.n);
	}
	public static void inc(int n){
		n++;
	}
}

class number{
	static int n;
	number(int n){
		this.n=n;
	}
	 static void inc(number n){
	 	n.n++;
	}
	void inc(int n){
		this.n++;

	}
}