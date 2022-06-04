package Collections;

public class CovariantReturnTypes {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		B b = new B();
		b.show();
		
		Bb bb = new Bb();
		bb.show();
	}

}
class A{
	A show() {
		System.out.println("Parent return type");
		return this; // return type is class // this refers to the same current object that is A() 
	}
}
class B extends A{
	
	A show() {
		System.out.println("Child return type");
		return new B(); // return new A() [same]
	}
}

class Aa{
	Object show() {
		System.out.println("Parent return type using object");
		return new Object(); // return type is class // this refers to the same current object that is A() 
	}
}
//class Bb extends Aa{
//	
//	 String show() {
//		System.out.println("Child return type with vineeth ");
//		return new String("Vineeth");
//	}
//}
class Bb extends Aa{
	@Override // it is recognising as override 
	 Object show() {
		System.out.println("Child return type with vineeth ");
		return new Object();
	}
}


