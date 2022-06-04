package DSA540;

public class MergeSort {

	public static void main(String[] args) {
		int a[]= {5,4,3,2,1};
		merge(a,0,4);
		for(int i=0;i<5;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
	public static void merge(int a[],int start,int end)
	{
		if(start<end)
		{
			int mid=(start+end)/2;
			merge(a,start,mid);
			merge(a,mid+1,end);
			mergesort(a,start,mid,end);
		}
	}
	public static void mergesort(int a[],int start,int mid,int end)
	{
		int i,j,k=0;
		int b[] = new int[100];
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
				k++;
				i++;
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
}
