package DSA540;

public class SelectionSort {

	public static void main(String[] args) {
		int a[]= {5,4,3,2,1,10};
		int min_index;
		for(int i=0;i<a.length;i++)
		{
			min_index=i;
			for(int j=i+1;j<a.length;j++) {
				if(a[j]<a[min_index]) {
					min_index=a[j];
				}
			}
			a[i]=a[i]+a[min_index]-(a[min_index]=a[i]);
		}
		for(int i=0;i<a.length;i++)
		{
			System.out.print(a[i]+" ");
		}
	}
}
