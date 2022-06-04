package Collections;
import java.util.*;
class container<T extends Number>
{
	T value;
	public void show() {
		System.out.println(value.getClass().getName());
	}
	// getter setter methods also same type of class
	public void demo(ArrayListExamples<Integer> obj)
	{
		
	}
}
public class Generic1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// java is a type safety language int value=5;
		// List<Integer> values = new ArrayList<Integer>();
		 // mentioning generic to specify which data do to added
		// 
		container<?> obj = new container<>();// raw type
		container<Integer> obj1 = new container<>(); // you are compulsory to work with classes 
		// not with wrapper classes 
		obj1.value=20;
		container<Student> obj2 = new container<>(); // student class not extending number false
		obj1.show();
		obj1.demo(new ArrayListExamples<Integer>());

	}

}
