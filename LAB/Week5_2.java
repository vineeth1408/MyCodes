package LAB;
import java.util.*;
public class Week5_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double radius = sc.nextDouble();
		System.out.println("Area of circle : "+circleArea(radius));
		System.out.println("Area of circle : "+circlePerimeter(radius));
		
	}
	public static double circleArea(double r) {
		return Math.PI*Math.pow(r, 2);
	}
	public static double circlePerimeter(double r) {
		return 3.14*2*r;
	}
}