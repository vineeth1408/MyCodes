package DataStructures;

class LLgeeksforgeeks{
	Node head;
	class Node
	{
		int data;
		Node next;
		
		Node(int data)
		{
			this.data=data;
			this.next=null;
		}
	}
	public void insert(int data)
	{
		Node new_node = new Node(data); // add front code
		new_node.next=head;
		head=new_node;
	}
	public void print()
	{
		Node temp=head;
		while(temp!=null)
		{
			System.out.println(temp.data+" ");
			temp=temp.next;
		}
	}

	public static void main(String[] args) 
	{
		LLgeeksforgeeks l = new LLgeeksforgeeks();
		l.insert(1);
		l.insert(2);
		l.insert(3);
		l.print();

	}
}

