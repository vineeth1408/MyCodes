package DataStructures;
public class QueueImp {
	
	int front;
	int rear;
	int capacity=5;
	int []object;
	QueueImp()
	{
		front=-1;
		rear=-1;
		object = new int[capacity];
	}
	public boolean isEmpty()
	{
		return rear<=front;
	}
	public int enque(int data)
	{
		return object[++rear]=data;
	}
	public int deque()
	{
		if(isEmpty())
		{
			System.out.println("QUEUE IS EMPTY");
		}
		if(rear >=front)
		{
			return object[++front];
		}
		return 0;
	}
	int size()
	{
		return rear-front;
	}
	public static void main(String[] args) {
		QueueImp q = new QueueImp();
		System.out.println(q.isEmpty());
		q.enque(1);
		q.enque(2);
		q.enque(3);
		q.enque(4);
		System.out.println(q.isEmpty());
		q.deque();
		System.out.println(q.size());
	}
}
