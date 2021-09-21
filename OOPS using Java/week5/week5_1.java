/* Write a Java Program to implement Wrapper classes and their methods*/
import java.util.*;
class week5_1 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Boolean bl = Boolean.valueOf(in.next());
		Byte b = Byte.valueOf(in.next());
		Character c = Character.valueOf(in.next().charAt(0));
		Integer i = Integer.valueOf(in.next());
		Float f = Float.valueOf(in.next());
		Double d = Double.valueOf(in.next());
		Long l = Long.valueOf(in.next());
		Short s = Short.valueOf(in.next());

		System.out.println(bl);
		System.out.println(b);
		System.out.println(c);
		System.out.println(i);
		System.out.println(f);
		System.out.println(d);
		System.out.println(l);
		System.out.println(s);
	}
}