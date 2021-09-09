// A Dynamic Programming based solution for 0-1 Knapsack problem 
#include<stdio.h> 

// A utility function that returns maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 

// Returns the maximum value that can be put in a knapsack of capacity W 
int knapSack(int capacity, int wt[], int val[], int n) 
{ 
int i, j; 
int table[n+1][capacity+1]; 

// Build table K[][] in bottom up manner 
for (i = 0; i <= n; i++) 
{ 
	for (j = 0; j <= capacity; j++) 
	{ 
		if (i==0 || j==0) 
			table[i][j] = 0;
			 
		else if (wt[i-1] <= j) 
				table[i][j] = max(val[i-1] + table[i-1][j-wt[i-1]], table[i-1][j]); 
		else
				table[i][j] = table[i-1][j]; 
	} 
} 

	 i=n,j=capacity;
	
	while(i && j>=0)
	{
		if( table[i][j]!=table[i-1][j] )
		{
			printf("\n%d=1\t",i);
			i=i-1;
			j=j-wt[i];
			
		}
		else
		{	
			printf("\n%d=0\t",i);
			i--;
		}		
		
	}

return table[n][capacity];
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

