package LAB;
import java.util.*;
public class week5_2_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		circle obj = new circle();
		obj.radius = sc.nextInt();
		System.out.println("GET AREA "+obj.getArea());
		System.out.println("GET PERIMETER "+obj.getPerimeter());

	}

}

class circle{
	double radius;
	double getArea() {
		return Math.PI*Math.pow(radius, 2);
	}
	double getPerimeter() {
		return Math.PI *2 *radius;
	}
}