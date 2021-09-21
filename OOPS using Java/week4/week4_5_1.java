/*Write a Java program to print all vowels in given string and count number of
vowels and consonants present in given string */
import java.util.*;
public class week4_5_1{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		String a=in.nextLine();
		int vowel=0;
		for(int i=0;i<a.length();i++){
			if(isVowel(a.charAt(i))){
				vowel++;
			}
		}
		System.out.println("vowel= "+vowel+"\n"+"consonants"+(a.length()-vowel));
	}
		
public static boolean isVowel(char c){
			switch(c){
				case 'a': case 'e': case 'i' : case 'o' : case 'u' : return true;
				case 'A': case 'E': case 'I' : case 'O' : case 'U' : return true;
				default : return false;
			}
		}
	
}
	