package interface_Implements;

import Interfaces.*;

class Demo1 implements Interface1  {
		public void display() { // implementing the abstract method
			System.out.println("abstract implemented method\n");
		}
		// main method
		public static void main(String[] args) {
			Demo1 obj = new Demo1();
			obj.display();
			System.out.println("final value in interface "+a);
		}
	}
