package DSA540;

import java.util.Arrays;

// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
public class Sort012_4 {

	public static void main(String[] args) {
		// 
		int a[]= {0,2,1,2,0};
		int c0=0,c1=0,c2=0;
        for(int i=0;i<a.length;i++){
            if(a[i]==0) c0++;
            else if(a[i]==1) c1++;
            else c2++;
        }
        int k=0;
        for(int i=0;i<c0;i++){
            a[k++]=0;
        }
        for(int i=0;i<c1;i++){
            a[k++]=1;
        }
        for(int i=0;i<c2;i++){
            a[k++]=2;
        }
        
        for(int i=0;i<5;i++)
        System.out.print(a[i]+" ");
        
        int low=0,temp=0;
		int mid=0;
		int high=a.length-1;
		while(mid<=high) {
			switch(a[mid]) {
			case 0:{
				temp=a[low];
				a[low]=a[mid];
				a[mid]=temp;
				low++;
				mid++;
				break;
			}
			case 1:{
				mid++;
				break;
			}
			case 2:{
				temp=a[high];
				a[high]=a[mid];
				a[mid]=temp;
				high--;
				break;
			}
		}
    }
	System.out.println(Arrays.toString(a));
}
}

