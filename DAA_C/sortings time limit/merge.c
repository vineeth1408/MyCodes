#include<stdio.h>
#include<time.h>
int  merge(int [],int,int);
int  mergesort(int [],int,int,int);
 int main()
 {
 	int n,i,a[100000];
 	float t;
 	srand(time(0));
 	printf("enter the size of the array\n");
 	scanf("%d",&n);
 	printf("entre the elements in the array\n");
 	for(i=0;i<n;i++)
 	{
 		a[i]=rand();
 	}
 	t=clock();
 	merge(a,0,n-1);
 	t=(clock()-t)/CLOCKS_PER_SEC;
 	printf("time=%f\n",t);
 	for(i=0;i<n;i++)
 	{
 		printf(" %d ",a[i]);
 	}
 }
 int merge(int a[],int start,int end)
 {
 	int mid;
 	if(start<end)
 	{
 		mid=(start+end)/2;
 		merge(a,start,mid);
 		merge(a,mid+1,end);
 		mergesort(a,start,mid,end);
 	}
 }
int mergesort(int a[],int start,int mid,int end)
 {
 	int  i,j,k=0,b[100000];
 	if(start<end)
 	{
 		i=start;
 		j=mid+1;
 		while(i<=mid && j<=end)
 		{
 			if(a[i]<a[j])
 			{
 				b[k]=a[i];
 				k++;
 				i++;
 			}
 			else
 			{
 				b[k]=a[j];
 				k++;
 				j++;
 			}
 		}
 			while(i<=mid)
 			{
 				b[k]=a[i];
 				i++; 
 				k++;
 			}
 			while(j<=end)
 			{
 				b[k]=a[j];
 				k++;
 				j++;
 			}
 			
 			k=0;
 			for(i=start;i<=end;i++)
 			{
 				a[i]=b[k];
 				k++;
 			}
 		}
 }
 			
 							
