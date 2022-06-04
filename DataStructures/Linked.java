package DataStructures;
import java.util.*;
public class Linked {
	
	Node head;
	public static class Node{
		int data;
		Node next;
		Node(int d)
		{
			data=d;
			next=null;
		}
	}
	public static void print()
	{
		
		
	}
	public static void main(String[] args) {
		Linked sll = new Linked();
		sll.head= new Node(10);
		Node second = new Node(20);
		Node third = new Node(30);
		
		print();
	}
}

