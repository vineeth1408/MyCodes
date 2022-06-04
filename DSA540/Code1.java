package DSA540;
import java.util.*;
public class Code1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		method(a,b);
	}
	public static void method(int a,int b)
	{
		for(int i=a+1;i<b;i++)
		{
			if(isprime(i))
			{
				if(isprime(sumofdigits(i)))
				{
					System.out.println(i);
				}
			}
		}
	}
	public static int sumofdigits(int n)
	{
		int sum=0;
		while(n>0 || sum>9)
		{
			if(n==0)
			{
				n=sum;
				sum=0;
			}
			sum+=n%10;
			n/=10;
		}
		return sum;
	}
	public static boolean isprime(int n)
	{
		boolean flag=false;
		if(n==1)
			return false;
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0) {
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			return true;
		}
		else
		{	
			return false;
		}
	}
}
