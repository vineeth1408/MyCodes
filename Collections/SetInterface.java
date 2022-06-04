package Collections;
import java.util.*;
import java.util.HashSet;
public class SetInterface {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Set<Integer> values = new HashSet<>();
		// Set do not contain duplicates
		values.add(1);
		values.add(10);
		values.add(14);
		System.out.println(values.add(10)); // doesn't support duplicate values
		for(int i:values) {
			System.out.println(i);
		}
	}

}
