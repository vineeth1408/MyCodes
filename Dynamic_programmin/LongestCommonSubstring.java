package Dynamic_programmin;
import java.util.Scanner;

public class LongestCommonSubstring {

	static Integer dp[][][];
	static int cache[][];
	
	// Method1()- recursive solution(Top- down approach)
	// time complexity - O(3^(m+n))
	// space complexity - O(m+n)
	public static int LCSubStrM1(char[] X, char[] Y, int m, int n, int lcsCount) {
		if (m <= 0 || n <= 0)
			return lcsCount;
		
		int lcsCount1=lcsCount;
		if (X[m - 1] == Y[n - 1])
			lcsCount1 = LCSubStrM1(X, Y, m - 1, n - 1, lcsCount + 1);

		int lcsCount2 = LCSubStrM1(X, Y, m, n - 1, 0);
		int lcsCount3 = LCSubStrM1(X, Y, m - 1, n, 0);

		return Math.max(lcsCount1, Math.max(lcsCount2, lcsCount3));
	}

	
	// Method2A1()- recursive solution with memoization (Top-down approach caching on method level)
	public static int LCSubStrM2A1(char[] X, char[] Y, int m, int n, int lcsCount, Integer[][][] dp) {
		if (m <= 0 || n <= 0)
			return lcsCount;

		if (dp[m][n][lcsCount] != null)
			return dp[m][n][lcsCount];

		int lcsCount1=lcsCount;
		if (X[m - 1] == Y[n - 1])
			lcsCount1 = LCSubStrM2A1(X, Y, m - 1, n - 1, lcsCount + 1, dp);

		int lcsCount2 = LCSubStrM2A1(X, Y, m, n - 1, 0, dp);
		int lcsCount3 = LCSubStrM2A1(X, Y, m - 1, n, 0, dp);

		return dp[m][n][lcsCount] = Math.max(lcsCount1, Math.max(lcsCount2, lcsCount3));
	}

	// Method2A2()- recursive solution with memoization (Top-down approach caching on global level)
	public static int LCSubStrM2A2(char[] X, char[] Y, int m, int n, int lcsCount) {
		if (m <= 0 || n <= 0)
			return lcsCount;

		if (dp[m][n][lcsCount] != null)
			return dp[m][n][lcsCount];

		int lcsCount1=lcsCount;
		if (X[m - 1] == Y[n - 1])
			lcsCount1 = LCSubStrM2A2(X, Y, m - 1, n - 1, lcsCount + 1);

		int lcsCount2 = LCSubStrM2A2(X, Y, m, n - 1, 0);
		int lcsCount3 = LCSubStrM2A2(X, Y, m - 1, n, 0);

		return dp[m][n][lcsCount] = Math.max(lcsCount1, Math.max(lcsCount2, lcsCount3));
	}

	// Method3()- DP solution(Bottom up approach)
	// time complexity - O(m*n)
	// space complexity - O(m*n)
	public static int LCSubStrA3(char[] X, char[] Y, int m, int n) {
		int memo[][] = new int[m + 1][n + 1];
		int result = 0;

		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == 0 || j == 0) {
					memo[i][j] = 0;
				} else if (X[i - 1] == Y[j - 1]) {
					memo[i][j] = memo[i - 1][j - 1] + 1;
					result = Math.max(result, memo[i][j]);
				} else {
					memo[i][j] = 0;
				}
			}
		}
		cache = memo;
		return result;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String X = sc.next();
		String Y = sc.next();
		
		long m1ExecutionTime=method1(X.toCharArray(), Y.toCharArray(), X.length(), Y.length());
		long m2A1ExecutionTime=method2A1(X.toCharArray(), Y.toCharArray(), X.length(), Y.length());
		long m2A2ExecutionTime=method2A2(X.toCharArray(), Y.toCharArray(), X.length(), Y.length());
		long m3ExecutionTime=method3(X.toCharArray(), Y.toCharArray(), X.length(), Y.length());
		
		System.out.println("\nAlgorithms                                                    | Execution Time ");
		System.out.println("-------------------------------------------------------------------------------");
		System.out.println("Recursive solution                                            |"+m1ExecutionTime +" ns");
		System.out.println("Top-down with memoization solution caching on method level    |"+m2A1ExecutionTime +" ns");
		System.out.println("Top-down with memoization solution caching on global level    |"+m2A2ExecutionTime +" ns");
		System.out.println("DP Bottom-up approach solution                                |"+m3ExecutionTime +" ns");
		
		displayMemo(cache);
		sc.close();
	}

	public static long method1(char[] X, char[] Y, int m, int n) {
		long startTime = 0, endTime = 0;
		startTime = System.nanoTime();
		System.out.println("Recursive solution :LCSubStrM1()");
		System.out.println("output :" + LCSubStrM1(X, Y, m, n, 0));
		endTime = System.nanoTime();
		return  endTime - startTime;
	}

	public static long  method2A1(char[] X, char[] Y, int m, int n) {
		long startTime = 0, endTime = 0;
		startTime = System.nanoTime();
		int maxLcsCount = Math.max(m, n);
		dp = new Integer[m + 1][n + 1][maxLcsCount + 1];
		System.out.println("Top-down with memoization solution caching on method level :LCSubStrM2A1()");
		System.out.println("output :" + LCSubStrM2A1(X, Y, m, n, 0,dp));
		endTime = System.nanoTime();
		return endTime - startTime;
	}
	
	public static long method2A2(char[] X, char[] Y, int m, int n) {
		long startTime = 0, endTime = 0;
		startTime = System.nanoTime();
		int maxLcsCount = Math.max(m, n);
		dp = new Integer[m + 1][n + 1][maxLcsCount + 1];
		System.out.println("Top-down with memoization solution caching on global level :LCSubStrM2A2()");
		System.out.println("output :" + LCSubStrM2A2(X, Y, m, n, 0));
		endTime = System.nanoTime();
		return  endTime - startTime;
	}

	public static long method3(char[] X, char[] Y, int m, int n) {
		long startTime = 0, endTime = 0;
		startTime = System.nanoTime();
		System.out.println("DP Bottom-up approach solution :LCSubStrA3()");
		System.out.println("output :" + LCSubStrA3(X, Y, m, n));
		endTime = System.nanoTime();
		return  endTime - startTime;

	}

	private static void displayMemo(int[][] memo) {
		if (memo == null) {
			System.out.println("Table is empty");
			return;
		}
		int rowSize = memo.length;
		int colSize = memo[0].length;
		System.out.println("\nmemo table entry after using bottom-up approach:-\n");
		for (int row = 0; row < rowSize; row++) {
			for (int col = 0; col < colSize; col++) {
				System.out.print(String.format("%03d ", memo[row][col]));
			}
			System.out.println();
		}
		System.out.println();
	}
}