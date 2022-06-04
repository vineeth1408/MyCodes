package Dynamic_programmin;

/**
 * 
 * Problem Statement-
 * Given a set S of n items, each with its own value Vi and weight Wi for all 1 <=i <=  n
 * and a maximum knapsack capacity C, compute the maximum value of the items that you can carry.
 * You cannot take fractions of items.
 * 
 * [Tutorial](https://youtu.be/aL6cU5dWmWM)
 * 
 */

/**
 * 
 * @author Kanahaiya Gupta
 */
public class Knapsack {

	static int cache[][];
	static int val[];
	static int wt[];

	// Method1.Approach1()-recursive solution
	// time complexity - O(2^n)
	public static int solveKnapsackM1A1(int i, int C) {

		// Base Case
		if (i == 0 || C <= 0)
			return 0;

		// If weight of the ith item is more than Knapsack capacity, then
		// this item cannot be included in the optimal solution
		if (wt[i - 1] > C)
			return solveKnapsackM1A1(i - 1, C);

		// (1) ith item included/selected
		int ith_item_is_selected = val[i - 1] + solveKnapsackM1A1(i - 1, C - wt[i - 1]);

		// (2) not included
		int ith_item_is_not_selected = solveKnapsackM1A1(i - 1, C);

		// Return the maximum of two cases:
		// (1) ith item included/selected
		// (2) not included
		return Math.max(ith_item_is_selected, ith_item_is_not_selected);

	}

	// Method1.Approach2()-recursive solution with input passed as method argument
	// time complexity - O(2^n)
	public static int solveKnapsackM1A2(int wt[], int val[], int i, int C) {

		if (i == 0 || C <= 0)
			return 0;

		if (wt[i - 1] > C)
			return solveKnapsackM1A2(wt, val, i - 1, C);

		int ith_item_is_selected = val[i - 1] + solveKnapsackM1A2(wt, val, i - 1, C - wt[i - 1]);
		int ith_item_is_not_selected = solveKnapsackM1A2(wt, val, i - 1, C);

		return Math.max(ith_item_is_selected, ith_item_is_not_selected);

	}

	// Method2().Approach1- Top down approach (cache declaration is global)
	// time complexity - O(nC)
	// space complexity - O(nC)
	public static int solveKnapsackM2A1(int i, int C) {
		if (i == 0 || C == 0)
			return 0;

		if (cache[i][C] != 0)
			return cache[i][C];

		if (wt[i - 1] > C)
			return cache[i][C] = solveKnapsackM2A1(i - 1, C);

		int ith_item_is_selected = val[i - 1] + solveKnapsackM2A1(i - 1, C - wt[i - 1]);
		int ith_item_is_not_selected = solveKnapsackM2A1(i - 1, C);

		return cache[i][C] = Math.max(ith_item_is_selected, ith_item_is_not_selected);

	}

	// Method2().Approach2- Top down approach (cache is passed as the method
	// argument)
	// time complexity - O(nC)
	// space complexity - O(nC)
	public static int solveKnapsackM2A2(int i, int C, int cache[][]) {
		if (i == 0 || C == 0)
			return 0;

		if (cache[i][C] != 0)
			return cache[i][C];

		if (wt[i - 1] > C)
			return cache[i][C] = solveKnapsackM2A2(i - 1, C, cache);

		int ith_item_is_selected = val[i - 1] + solveKnapsackM2A2(i - 1, C - wt[i - 1], cache);
		int ith_item_is_not_selected = solveKnapsackM2A2(i - 1, C, cache);

		return cache[i][C] = Math.max(ith_item_is_selected, ith_item_is_not_selected);

	}

	// Method3()- Bottom up approach
	// time complexity - O(nC)
	// space complexity - O(nC)
	public static int solveKnapsackM3(int n, int C) {
		int i, w;
		int cache[][] = new int[n + 1][C + 1];

		// Build table cache[][] in bottom up manner
		for (i = 0; i <= n; i++) {
			for (w = 0; w <= C; w++) {
				if (i == 0 || w == 0)
					cache[i][w] = 0;
				else if (wt[i - 1] > w)
					cache[i][w] = cache[i - 1][w];
				else
					cache[i][w] = Math.max(val[i - 1] + cache[i - 1][w - wt[i - 1]],cache[i - 1][w]);
			}
		}
		printCache(cache);
		return cache[n][C];
	}

	public static void main(String[] args) {

//		val = new int[] { 10, 40, 30, 50 };
//		wt = new int[] { 5, 4, 6, 3 };
//		int C = 10;
//		int n = val.length;

//		val = new int[] { 60, 100, 120 };
//		wt = new int[] { 10, 20, 30 };
//		int C = 50;
//		int n = val.length;

		val = new int[] { 150, 300, 200 };
		wt = new int[] { 1, 4, 3 };
		int C = 4;
		int n = val.length;

		method1A1(n, C);
		method1A2(wt, val, n, C);
		method2A1(n, C);
		method2A2(n, C);
		method3(n, C);
	}

	public static void method1A1(int n, int C) {
		long startTime = 0, endTime = 0, executionTime = 0;
		startTime = System.nanoTime();
		System.out.println("recursive solution:solveKnapsackM1A1()");
		System.out.println("output :" + solveKnapsackM1A1(n, C));
		endTime = System.nanoTime();
		executionTime = endTime - startTime;
		System.out.println("executionTime :" + executionTime + " ns \n");
	}

	public static void method1A2(int[] wt, int[] val, int n, int C) {
		long startTime = 0, endTime = 0, executionTime = 0;
		startTime = System.nanoTime();
		System.out.println("recursive solution with all input as param:solveKnapsackM1A2()");
		System.out.println("output :" + solveKnapsackM1A2(wt, val, n, C));
		endTime = System.nanoTime();
		executionTime = endTime - startTime;
		System.out.println("executionTime :" + executionTime + " ns \n");
	}

	public static void method2A1(int n, int C) {
		long startTime = 0, endTime = 0, executionTime = 0;
		startTime = System.nanoTime();
		cache = new int[val.length + 1][C + 1];
		System.out.println("DP Top-Down solution(cache at global level) :solveKnapsackM2A1()");
		System.out.println("output :" + solveKnapsackM2A1(n, C));
		endTime = System.nanoTime();
		executionTime = endTime - startTime;
		System.out.println("executionTime :" + executionTime + " ns \n");
	}

	public static void method2A2(int n, int C) {
		long startTime = 0, endTime = 0, executionTime = 0;
		startTime = System.nanoTime();
		int[][] cache = new int[val.length + 1][C + 1];
		System.out.println("DP Top-Down solution(cache passed as an method argument): solveKnapsackM2A2()");
		System.out.println("output :" + solveKnapsackM2A2(n, C, cache));
		endTime = System.nanoTime();
		executionTime = endTime - startTime;
		System.out.println("executionTime :" + executionTime + " ns \n");
	}

	public static void method3(int n, int C) {
		long startTime = 0, endTime = 0, executionTime = 0;
		startTime = System.nanoTime();
		System.out.println("================================================================");
		System.out.println("Pure DP Bottom-up solution(without recursion) :solveKnapsackM3()");
		System.out.println("output :" + solveKnapsackM3(n, C));
		endTime = System.nanoTime();
		executionTime = endTime - startTime;
		System.out.println("executionTime :" + executionTime + " ns");
		System.out.println("================================================================");

	}

	private static void printCache(int[][] matrix) {
		int rowSize = matrix.length;
		int colSize = matrix[0].length;
		System.out.println("cache Table :-\n");
		for (int row = 0; row < rowSize; row++) {
			for (int col = 0; col < colSize; col++) {
				System.out.print(String.format("%03d ", matrix[row][col]));
			}
			System.out.println();
		}
		System.out.println();
	}

}
