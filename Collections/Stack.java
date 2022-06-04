package Collections;

public class Stack {
	int stack[] = new int[5];
	int top=-1;
	public void push(int data)
	{	
		top++;
		stack[top]=data;
		
	}
	public int pop()
	{
		int data;
		data=stack[top];
		stack[top]=0;
		top--;
		return data;
	}
	public void show()
	{
//		for(int i=0;i<=top;i++) {
//			System.out.println(stack[i])
//		}
		for( int n:stack) {
			System.out.print(n+" ");
		}
	}
	public int peek()
	{
		return stack[top];
	}
}
