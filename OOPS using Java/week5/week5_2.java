/*Write an application that prompts the user for the radius of a circle and uses a method
called circleArea to calculate the area of the circle and uses a method circlePerimeter to
calculate the perimeter of the circle. */
import java.util.*;
public class week5_2{
	public static void main(String args[]){
		System.out.println("Enter radius");
		Scanner in=new Scanner(System.in);
		double radius= in.nextDouble();
		// double radius= Double.valueof(in.next());
		System.out.println("Area of circle "+ circleArea(radius));
		System.out.println("Perimeter of circle "+ circlePerimeter(radius));
	}

	public static double circleArea(double r){
		return Math.PI*Math.pow(r,2);
	}
	public static double circlePerimeter(double r){
		return 2*Math.PI*r;
	}
}