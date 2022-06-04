package Collections;

public class StackImplementation {

	public static void main(String[] args) {
		Stack s = new Stack();
		s.push(10);
		s.push(11);
		s.push(12);
		s.push(13);
		s.push(14);
	
		System.out.println("Peek value= "+s.peek());
		System.out.println("Pop value= "+s.pop());
		System.out.println("After show method");
		s.show();	

	}

}
