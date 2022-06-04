#include<stdio.h>
 void combinationUtil(int arr[], int n, int r,int index, int data[], int i)
	{	
		int j;
		if (index == r) {
			for ( j = 0; j < r; j++)
				printf("%d",data[j]);
			printf("\n");
			return;
		}

		if (i >= n)
			return;
		data[index] = arr[i];
		combinationUtil(arr, n, r, index + 1,data, i + 1);
		combinationUtil(arr, n, r, index, data, i + 1);
	}

void printCombination(int arr[], int n, int r)
	{
		int data[100];
		combinationUtil(arr, n, r, 0, data, 0);
	}

	
void main(){
	int v_pens,s_pens,n_children,each_variety;
	scanf("%d%d%d",&v_pens,&s_pens,&n_children);
	int i,arr[100];
	for(i=0;i<v_pens;i++){
		scanf("%d",&arr[i]);
	}
		printCombination(arr, v_pens, s_pens);
}

	
	

