package DSA540;
import java.util.*;
// Time complexity: O(N^2) 
// Auxiliary Space: O(N^2)
// minimum number of insertions to make palindrome same as lcs
public class MinimumInsertionsToMakePalindrome {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "geeks";
		System.out.println(minlcs(s));
	}
	public static int minlcs(String ss1) {
		StringBuffer sb = new StringBuffer(ss1);
		sb.reverse();
		String ss2 = sb.toString();
		
		char s1[]=ss1.toCharArray();
		char s2[]=ss2.toCharArray();
		return (s1.length - LCSvalue(s1,s2,s1.length,s2.length));
	}
	public static int LCSvalue(char x[], char y[],int m,int n)
	{
		int memo[][] = new int[m+1][n+1];
		for(int i=0;i<=m;i++) {
			for(int j=0;j<=n;j++) {
				if(i==0 || j==0) {
					memo[i][j]=0;
				}
				else if(x[i-1]==y[j-1]) { // if it is a string then x.charAt(i-1)==y.charAt(j-1)
					memo[i][j]=memo[i-1][j-1]+1;
				}
				else
				{
					memo[i][j] = Math.max(memo[i-1][j], memo[i][j-1]);
				}
			}
		}
		return memo[m][n];
	}
}
