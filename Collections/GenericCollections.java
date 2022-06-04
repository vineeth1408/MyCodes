package Collections;
import java.util.Collections;
import java.util.*;
public class GenericCollections {

	public static void main(String[] args) {
		Collection<Integer> val = new ArrayListExamples<Integer>();
		// only integers
		val.add(10);
		val.add(11);
		for(int i : val) //Integer or int same because of wrapper classes thats the awesomenese
		{
			System.out.println(i);
		}
	}

}
