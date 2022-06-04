package LAB;
import java.util.*;
public class week_5_WrapperClassesAndMethods {

	public static void main(String[] args) {
//		Scanner sc = new Scanner(System.in);
//		Boolean b = Boolean.valueOf(sc.next());
//		Byte by = Byte.valueOf(sc.next());
//		Character c = Character.valueOf(sc.next().charAt(0));
//		Integer i = Integer.valueOf(sc.next());
//		Float f = Float.valueOf(sc.next());
//		Double d = Double.valueOf(sc.next());
//		Long l = Long.valueOf(sc.next());
//		Short s = Short.valueOf(sc.next());
//		System.out.println(b+" "+by);
		
		byte bte=10; // primitive data types
		short shrt=20;
		int inte =30;
		long lon =40;
		float flt=50.0f;
		double dble =60.0D;
		char cr='a';
		boolean b2=true;
		//AUTOBOXING:- conversion primitives into objects
		Byte byteobj=bte;
		Short shortobj=shrt;
		Integer intobj = inte;
		Long longobj = lon;
		Double doubleobj = dble;
		Float floatobj = flt;
		Character charobj = cr;
		Boolean booleanobj = b2;
		// printing objects
		System.out.println("---Printing object values---");  
		System.out.println("Byte object: "+byteobj);  
		System.out.println("Short object: "+shortobj);  
		System.out.println("Integer object: "+intobj);  
		System.out.println("Long object: "+longobj);  
		System.out.println("Float object: "+floatobj);  
		System.out.println("Double object: "+doubleobj);  
		System.out.println("Character object: "+charobj);  
		System.out.println("Boolean object: "+booleanobj);  
		
		//Unboxing: Converting Objects to Primitives  
		byte bytevalue=byteobj;  
		short shortvalue=shortobj;  
		int intvalue=intobj;  
		long longvalue=longobj;  
		float floatvalue=floatobj;  
		double doublevalue=doubleobj;  
		char charvalue=charobj;  
		boolean boolvalue=booleanobj;  
		  
		//Printing primitives  
		System.out.println("---Printing primitive values---");  
		System.out.println("byte value: "+bytevalue);  
		System.out.println("short value: "+shortvalue);  
		System.out.println("int value: "+intvalue);  
		System.out.println("long value: "+longvalue);  
		System.out.println("float value: "+floatvalue);  
		System.out.println("double value: "+doublevalue);  
		System.out.println("char 	value: "+charvalue);  
		System.out.println("boolean value: "+boolvalue);  
		

	}

}
