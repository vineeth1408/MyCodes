/*Write a Java program to give an example for command line arguments. */
import java.util.*;
public class week2_7{
	public static void main(String args[]){
		int sum=0;
		for(int i=0;i<args.length;i++){
			sum+=Integer.parseInt(args[i]);
			System.out.println(args[i]);
		}
		System.out.println(sum);
	}
}