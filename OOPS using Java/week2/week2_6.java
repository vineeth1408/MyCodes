/*Write a java program for sorting a given list of names. */
import java.util.*;
public class week2_6{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		String str[]=new String[5];
		String a = "vineeth";
		char c[] = a.toCharArray();
		System.out.println(c[0]);
		for(int i=0;i<5;i++){
		
			 str[i]=in.next();
			
		}

		String temp;
		for(int i=0;i<5;i++){
			for(int j=0;j<5-i-1;j++){
				if(str[j].compareTo(str[j+1])>0){
					temp=str[j];
					str[j]=str[j+1];
					str[j+1]=temp;
				}
			}
		}
		System.out.println("\n");
		for(int i=0;i<5;i++){
			System.out.print(str[i]+" ");
		}


	}
}