package DSA540;

public class QuickSort {

	public static void main(String[] args) {
		int a[]= {5,4,3,2,1};
		quick(a,0,a.length-1);
		for(int i=0;i<a.length;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
	public static void quick(int a[],int low,int high)
	{
		if(low<high)
		{
			int p=partition(a,low,high);
			quick(a,low,p-1);
			quick(a,p+1,high);
		}
	}
	public static int partition(int a[],int low,int high)
	{
		int pivot=a[high];
		int i=(low-1);
		for(int j=low;j<=high-1;j++)
		{
			if(a[j]<pivot)
			{
				i++;
				a[i]=a[i]+a[j]-(a[j]=a[i]);
			}
		}
		a[i+1]=a[i+1]+a[high]-(a[high]=a[i+1]);
		return (i+1);
	}

}
