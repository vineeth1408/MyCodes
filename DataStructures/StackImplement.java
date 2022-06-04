package DataStructures;

public class StackImplement {
	int top;
	int capacity;
	int []stack;
	StackImplement()
	{
		top=-1;
		capacity=5;
		stack = new int[capacity];
	}
	public boolean isEmpty()
	{
		return top==-1;
	}
	public boolean isFull()
	{
		return top==capacity-1;
	}
	public int push(int data)
	{
		if(isFull())
		{
			System.out.println("STACK IS FULL");
			return 0;
		}
		return stack[++top]=data;
	}
	public int pop()
	{	
		if(isEmpty()) {
			System.out.println("STACK IS UNDERFLOW");
			return 0;
		}
		return stack[top--];
	}
	public int peek()
	{
		return stack[top];
	}
	public void display()
	{
		for(int n:stack) {
			System.out.print(n+" ");
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		StackImplement s = new StackImplement();
		s.push(1);
		s.push(2);
		s.push(3);
		s.push(4);
		s.push(5);
		s.push(5);
		s.display();
		System.out.println(s.isEmpty());
		System.out.println(s.isFull());
		s.push(6);
		System.out.println("PEEK ELEMENT= "+s.peek());
		System.out.println("Pop ELEMENT= "+s.pop());
		System.out.println("Pop ELEMENT= "+s.pop());
	}

}
