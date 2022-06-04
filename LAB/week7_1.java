package LAB;
import java.util.*;
public class week7_1 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		square squareobj = new square();
		squareobj.side=sc.nextDouble();
		System.out.println("Area of square "+squareobj.getArea());
		
		circles circleobj = new circles();
		circleobj.radius=sc.nextDouble();
		System.out.println("Area of cube "+circleobj.getArea()); 
		System.out.println("Volume of cube "+circleobj.getVolume()); 
		

	}

}
abstract class shape{
	protected double getArea() {
		return 0.0d;
	}
	protected double getVolume() {
		return 0.0d;
	}
}
class square extends shape{
	double side;
	public double getArea() {
		return Math.pow(this.side,2);
	}
}

class rectange extends shape{
	
	
}
class circles extends shape {
	double radius;
	public double getArea() {
		return Math.PI * Math.pow(radius, 2);
	}
	public double getVolume() {
		return 2*Math.PI*radius;
	}
}
