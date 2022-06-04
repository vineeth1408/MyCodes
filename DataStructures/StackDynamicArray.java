package DataStructures;

public class StackDynamicArray {
	private int []object;
	private int top;
	private int stacksize;
	StackDynamicArray()
	{
		stacksize=1;
		top=-1;
		object = new int[stacksize];
	}
	public int isEmpty()
	{
		if(top==-1) {
			System.out.println("STACK IS EMPTY");
		}
		return 0;
	}
	public int isFull()
	{
		if(top==stacksize-1)
		{
			System.out.println("STACK IS FULL");
		}
		return 0;
	}
	public int pop()
	{
		return object[top];
	}
	public void push(int data)
	{
		if(top>=stacksize-1)
			resize();
		object[++top]=data;
	}
	public void resize()
	{
		int []temp=object;
		stacksize=stacksize*2;
		object=new int[stacksize];
		for(int i=0;i<=top;i++)
		{
			object[i]=temp[i];
		}
	}

	public static void main(String[] args) {
		StackDynamicArray s = new StackDynamicArray();
		s.push(1);
		s.push(2);
		s.push(3);
//		s.push(4);
//		s.push(5);
		
		System.out.println(s.pop());
		System.out.println(s.stacksize);
}
}