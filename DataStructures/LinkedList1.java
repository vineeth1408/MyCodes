package DataStructures;

public class LinkedList1 {
	
	private ListNode head;
	private static class ListNode
	{
		private int data;
		private ListNode next;
		
		public ListNode(int data)
		{
			this.data = data;
			this.next=null;
		}
	}
	public void count()
	{	
		int count=0;
		ListNode current =head;
		while(current !=null)
		{
			count++;
			current = current.next;
		}
		System.out.println("Count of nodes= "+count);
	}
	public void display()
	{
		ListNode current = head;
		while(current != null)
		{
			System.out.print(current.data+" ");
			current = current.next;
		}
	}
	public static void main(String args[]) {
		LinkedList1 sll = new LinkedList1();
		sll.head = new ListNode(10);
		ListNode second = new ListNode(1);
		ListNode third = new ListNode(8);
		ListNode fourth  = new ListNode(11);
		// now will form the chain
		sll.head.next=second;
		second.next = third;
		third.next = fourth;
		ListNode current = sll.head;
		while(current != null)
		{
			System.out.print(current.data + " ->");
			current = current.next;
		}
		System.out.println("Null");
		sll.display();
		sll.count();
	}
}

