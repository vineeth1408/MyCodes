package LAB;

public class week1_6MinMax {

	public static void main(String[] args) {
		int a=1,b=2,c=3,d=4,e=5;
		int min,max,temp;
		temp =(a>b)?(a>c?a:c):(b>c?b:c);
		min=(temp>d)?(temp>e?temp:d):(d>e?d:e);
		System.out.println(min);

	}

}
