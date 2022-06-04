// A Dynamic Programming based solution for 0-1 Knapsack problem 
#include<stdio.h> 

// A utility function that returns maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 

// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int capacity, int wt[], int val[], int n) 
{ 
int i, w;
		int cache[n + 1][capacity + 1];

		// Build table cache[][] in bottom up manner
		for (i = 0; i <= n; i++) {
			for (w = 0; w <= capacity; w++) {
				if (i == 0 || w == 0)
					cache[i][w] = 0;
				else if (wt[i - 1] > w)
					cache[i][w] = cache[i - 1][w];
				else
					cache[i][w] = max(val[i - 1] + cache[i - 1][w - wt[i - 1]],cache[i - 1][w]);
			}
		}
		
		return cache[n][capacity];
//	 i=n,j=capacity;
	
//	while(i && j>=0)
//	{
//		if( table[i][j]!=table[i-1][j] )
//		{
//			printf("\n%d=1\t",i);
//			i=i-1;
//			j=j-wt[i];
//			
//		}
//		else
//		{	
//			printf("\n%d=0\t",i);
//			i--;
//		}		
		
//	}


} 
int main() 
{ 
	int val[100],i;
	int wt[100];
	int capacity,n;
	printf("enter no.of items\n");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("enter weight(%d) and price(%d)\n",i,i);
		scanf("%d%d",&wt[i],&val[i]);
	}
	 
	printf("enter capacity\n");
	scanf("%d",&capacity);

	printf("max=%d\n", knapSack(capacity, wt, val, n)); 

	return 0; 
} 

