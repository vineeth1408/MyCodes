/*Write a Java program to find Area and Circle of different shapes using polymorphism
concept */
import java.util.*;

public class week6_1{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int choice=1;
		
		while(choice!=4){
			 System.out.println("\nMENU\t1 - Circle\t2 - Square\t3 - Rectangle\t4 - Exit");
	     	 choice = Integer.parseInt(in.nextLine());
 
			switch(choice){

				case 1:System.out.print("Enter radius: ");
					   double radius = Double.valueOf(in.nextLine());
					   circle obj = new circle(radius);
					   System.out.println("Area of circle= "+obj.getArea()+ "\nperimeter= "+ obj.getPerimeter());
					   break;
				case 2:System.out.print("Enter side: ");
					   double side = Double.valueOf(in.nextLine());
					   square obj1 = new square(side);
					   System.out.println("Area of square= "+obj1.getArea()+ "\nperimeter= "+ obj1.getPerimeter());
					   break;
				case 3:System.out.print("Enter length: ");
					   double length = Double.valueOf(in.nextLine());
					   System.out.print("Enter breadth: ");
					   double breadth = Double.valueOf(in.nextLine());

					   rectangle obj2 = new rectangle(length,breadth);
					   System.out.println("Area of circle= "+obj2.getArea()+ "\nperimeter= "+ obj2.getPerimeter());
					   break;
				case 4:System.out.println("You have Exited");
					   break;
				default:System.out.println("Something went wrong");
			}
		}

	}
}

class shape{
	public double getArea(){
		return 0.0d;
	}
	public double getPerimeter(){
		return 0.0d;
	}
}

class circle extends shape{
	private double radius;
	circle(double radius){
		this.radius=radius;
	}

	public double getArea(){
		return Math.PI*Math.pow(radius,2);
	}

	public double getPerimeter(){
		return Math.PI * 2* radius;
	}
}
class square extends shape{
	private double side;

	square(double side){
		this.side=side;
	}
	public double getArea(){
		return side*side;
	}
	public double getPerimeter(){
		return 4*side;
	}
} 

class rectangle extends shape{
	private double length,breadth;

	rectangle(double length,double breadth){
		this.length=length;
		this.breadth=breadth;
	}
	public double getArea(){
		return length * breadth;
	}

	public double getPerimeter(){
		return 2*(length*breadth);
	}
}