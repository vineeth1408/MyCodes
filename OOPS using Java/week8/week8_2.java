/*  Create a package named org.shapes. Create some classes in the package representing
some common geometric shapes like Square, Triangle, Circle and so on. write a Program
that uses the classes from the package*/
import org.shapes.Square;
import org.shapes.Circle;
import org.shapes.Triangle;
import org.shapes.Rectangle;

class week8_2{
	public static void main(String args[]){
		Square square = new Square(10);
		System.out.println("Square perimeter: "+square.getPerimeter());
        System.out.println("Square area: "+square.getArea());

        Circle circle = new Circle(10);
        System.out.println("Circle perimeter: "+circle.getPerimeter());
        System.out.println("Circle area: "+circle.getArea());

        Triangle triangle = new Triangle(10,20);
		System.out.println("Triangle area: "+triangle.getArea()); 
		
		Rectangle rectangle = new Rectangle(10,20);
		System.out.println("Rectangle area: "+rectangle.getArea());        


	}
}
