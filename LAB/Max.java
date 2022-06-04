package LAB;
import java.util.*;
public class Max {

	public static void main(String[] args) {
		Scanner sc  = new Scanner(System.in);
		int n = sc.nextInt();
		int a[]= new int[n];
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
		int m = sc.nextInt();
		int b[] = new int[m];
		for(int i=0;i<m;i++) {
			b[i]=sc.nextInt();
		}
		Maxvalue(n,a,m,b);
		for(int j=0;j<m;j++) {
			System.out.println(a[j]);
		}
	}
	public static void Maxvalue(int n,int a[],int m,int b[]) {
		int max;
		for(int i=0;i<m;i++) {
			max=0;
			for(int j=i;j<n;j++)
			{
				if(max< a[i]) {
					max=a[i];
				}
			}
			max=freq(max,i,n,a);
			a[i]=max;
		}
	}
	public static int freq(int max,int i,int n,int a[]) {
		int c=0;
			
			for(int j=i;j<n;j++)
			{
			if(max==a[i]) 
				c++;
			}
			return c;
	}

}
