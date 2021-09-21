/*Create an abstract class Shape which calculate the area and volume of 2-d and 3-d
shapes with methods getArea() and getVolume(). Reuse this class to calculate the area
and volume of square ,circle ,cube and sphere.  */
import java.util.*;

public class week7_1{
	public static void main(String apple[]){
		Scanner in = new Scanner(System.in);
		int choice=1;
		while(choice!=5){
			System.out.println("\nMENU\n1 - Square\t2 - Circle\t3 - Cube\t4 - Sphere\t5 - Exit\n");
			choice = in.nextInt();
			switch(choice){
				
				case 1:System.out.println("Enter side: ");
					   square obj=new square();
					   obj.side=in.nextDouble();
					   System.out.println("Area of square "+obj.getArea());
				break;
				case 2:System.out.println("Enter radius: ");
					   circle obj1=new circle();
					   obj1.radius=in.nextDouble();// Double.valueOf(in.nextLine());
   					   System.out.println("Area of circle "+obj1.getArea()); 
   				break;
   				case 3:System.out.println("Enter radius: ");
   					   cube obj2 = new cube();
   					   obj2.radius = Double.valueOf(in.next());
   					   System.out.println("Area of cube "+obj2.getArea()); 
   					   System.out.println("Volume of cube "+obj2.getVolume()); 
   				break;
   				case 4:System.out.println("Enter radius: ");
   					   sphere obj3 = new sphere();
   					   obj3.radius = Double.valueOf(in.next());
   					   System.out.println("Area of sphere "+obj3.getArea()); 
   					   System.out.println("Volume of sphere "+obj3.getVolume()); 
   				break;
   				case 5:System.out.println("Exited");
   				break;
   				default:System.out.println("Something went wrong");
			}
		}
	}
}

abstract class shape{
	public double getArea();
	public double getVolume();
}

class square extends shape{
	double side;
	public double getArea(){
		return Math.pow(this.side,2);
	}
}
class circle extends shape{
	double radius;
	public double getArea(){
		return Math.PI * Math.pow(this.radius,2);
	}
}
class cube extends shape{
	double radius;

	public double getArea(){
		return 6*Math.pow(this.radius,2);
	}
	public double getVolume(){
		return Math.pow(this.radius,3);
	}
}

class sphere extends shape{
	double radius;
	public double getArea(){
		return 4*Math.PI*Math.pow(this.radius,2);
	}
	public double getVolume(){
		return (4/3)*Math.PI*Math.pow(this.radius,3);
	}
}
