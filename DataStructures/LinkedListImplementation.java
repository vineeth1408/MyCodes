package DataStructures;

class Node{
	int data;
	Node next;
}
class singleLinkedList{

	private Node getnewnode(int data)
	{
		Node obj = new Node();
		obj.data=data;
		obj.next=null;
		return obj;
	}
	
	public Node insert(int data, Node node)
	{
		if(node==null) {
			return getnewnode(data);
		}
		else
		{
			node.next=insert(data,node.next);
		}
//			Node temp=node;
//			while(temp.next!=null)
//			{
//				temp=temp.next;
//			}
//			temp.next=getnewnode(data);
//		}
		return node;
	}
	public void display(Node node)
	{
		if(node==null)
			return;
		System.out.print(node.data+" ");
		display(node.next);
		//Node temp=node;
//		while(temp!=null)
//		{
//			System.out.println(temp.data);
//			temp=temp.next;
//		}
	}
	public Node delete(int data,Node head)
	{
		Node prev=head;
		Node temp=head;
		while(temp.data!=data)
		{
			temp=temp.next;
		}
		while(prev.next!=temp)
		{
			prev= prev.next;
		}
		prev.next=temp.next;
		return head;
	}
	public void nthnode(Node head)
	{
		
	}
}
public class LinkedListImplementation {
	public static void main(String[] args) {
		Node root=null;
		singleLinkedList a = new singleLinkedList();
	
		root= a.insert(1, root);
		root= a.insert(2, root);
		root= a.insert(3, root);
		root= a.insert(4, root);
		root= a.insert(5, root);
		
		a.display(root);
		System.out.println("Delete node");
		root=a.delete(3,root);
		a.display(root);
	}
}
