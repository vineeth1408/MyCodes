package Collections;
import java.util.*;
public class ArrayListExamples {

	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<String>();
		list.add("Vineeth");
		list.add("1");
		list.add("1.2");
		Iterator it = list.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}
		
	}

}
