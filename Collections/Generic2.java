package Collections;
// 1.0 no collections
// 1.2 collections introduced
// 1.5 generics introduced
import java.util.Collection;
import java.util.*;
public class Generic2 {

	public static void main(String[] args) {
//		int values[] = new int[6];
//		Object val[] = new Object[4];
// 		in object type we can have anything and they are fixed upto mentioned size
//		collections is a interface in java
		Collection val = new ArrayListExamples(); // collection of values
		val.add(3);
		val.add("Vineeth");
		val.add(5.7);
		
// 		fecthing can be done in two ways
//		1. enhanced for loop 2.Iterator

//		Iterator i = val.iterator();
//		Interface    and its method
		for(Object i : val) {
			System.out.println(i);
		}
//		while(i.hasNext()) {
//			System.out.println(i.next());
//		}
//		System.out.println(i.next());
//		System.out.println(i.next());
//		System.out.println(i.next());
		
	}

}
