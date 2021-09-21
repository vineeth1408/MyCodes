/*Write an application that declares 5 integers, determines and prints the largest and
smallest in the group*/
import java.util.*;
public class week1_6{
	public static void main(String[] bg){
		 int a=1,b=2,c=3,d=4,e=5;
		 int t1,min,max;
		 t1=(a<b) ? (a<c ? a:b) : (b<c ? b :c) ;
		min=(t1<d) ? (t1<e ? t1:d) : (d<e ? d:e);
		
		System.out.println("min= "+min);
		 t1=(a>b) ? (a>c ? a:b) : (b>c ? b :c) ;
		max=(t1>d) ? (t1>e ? t1:d) : (d>e ? d:e);
		System.out.println("max= "+max); 
		// int n,max=1,min=1;

		/*Scanner in = new Scanner(System.in);
		for(int i=0;i<5;i++){
			n=in.nextInt();
			if(max < n){
				max=n;
			}
			else{
				min=n;
			}
		}
		System.out.println("mmax= "+max);
		System.out.println("min= "+min); 
		// int x[]=new int[];
		int x[]={1,2,3,4,5};
		int max=x[0];
		int min=x[0];
		for(int i=0;i<x.length;i++){
			if(max < x[i]){
				max=x[i];
			}
			else{
				min=x[i];
			}
		}
		System.out.println("mmax= "+max);
		System.out.println("min= "+min);
		*/

	}
}