package DSA540;
import java.util.*;
public class Storage {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		count(n);
	}
	public static void count(int n)
	{
		int breadth,corner,side,inner,flag=0;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				breadth=n/i;//columns
				if(i<=breadth)
				{
					corner=4;
					side=2*(i+breadth)-corner;
					int k= 2*breadth-corner+2*i-corner;
					inner = n-corner-k;
					System.out.println(corner+" "+k+" "+inner);
				}
			}
		}
	}

}
