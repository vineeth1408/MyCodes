package DSA540;

import java.util.Arrays;

public class CountOccurancesOfAnagrams {
	public static int NO_OF_CHARS=256;
	public static void main(String[] args) {
		String text= "forxxorfxdofr";
		String pat = "for";
		int res=0;
		int N=text.length();
		int n=pat.length();
		for(int i=0;i<=N-n;i++) {
			String s = text.substring(i,i+n);
			if(areanagrams(pat,s))
				res++;
		}
		System.out.println(res);
		System.out.println("TWO STRINGS ANAGRAM OR NOT");
		char string1[]=("geeksforgeeks").toCharArray();
		char string2[]=("forgeeksgeeks").toCharArray();
		if(count(string1,string2))
			System.out.println("ANAGRAMS");
		else
			System.out.println("NOT");
		
	}
	public static boolean areanagrams(String text,String pat) {
		char []s1 = text.toCharArray();
		char []s2 = pat.toCharArray();
		Arrays.sort(s1);
		Arrays.sort(s2);
		if(Arrays.equals(s1, s2))
			return true;
		else
			return false;		
	}
	public static boolean count(char s1[], char s2[])
	{
		if(s1.length !=s2.length)
			return false;
		int count1[] = new int[NO_OF_CHARS];
		Arrays.fill(count1, 0);
		int count2[] = new int[NO_OF_CHARS];
		Arrays.fill(count2, 0);
		for(int i=0; i<s1.length && i<s2.length;i++)
		{
			count1[s1[i]]++;
			count2[s2[i]]++;
		}
		
		for(int i=0;i<NO_OF_CHARS;i++) {
			if(count1[i]!=count2[i])
				return false;
		}
		return true;
	}
}
