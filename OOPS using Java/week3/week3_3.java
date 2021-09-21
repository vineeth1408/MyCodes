/*Write java program that inputs 5 numbers, each between 10 and 100 inclusive. As
each number is read display it only if it’s not a duplicate of any number already read
display the complete set of unique values input after the user enters each new value */
import java.util.*;
public class week3_3{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int n;
		Vector<Integer> v = new Vector<Integer>();
		for(int i=0;i<5;i++){
			n=in.nextInt();
			if(n>=10 && n<=100){
				if(v.contains(n)){
					System.out.println(v);
					i--;
				}
				else{
					v.add(n);
					System.out.println(v);
				}
				
			}
			else{
				System.out.println("Enter valid number");
				i--;
				}
			}
			
			
	}
}