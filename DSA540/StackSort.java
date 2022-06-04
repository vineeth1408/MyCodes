package DSA540;
import java.util.*;
// Given a stack the task is to sort it such that the top of the stack has the greatest element
public class StackSort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stack<Integer> input = new Stack<Integer>();
		input.add(34);
		input.add(3);
		input.add(31);
		input.add(98);
		input.add(23);
		Stack<Integer> tempstack = sortstack(input);
		while(!tempstack.isEmpty()) {
			System.out.println(tempstack.pop()+" ");
		}
	}
	public static Stack<Integer> sortstack(Stack<Integer> input){
		Stack<Integer> tempstack = new Stack<Integer>();
		while(!input.isEmpty()) {
			int temp = input.pop();
			
			while(!tempstack.isEmpty() && tempstack.peek() > temp) {
				input.push(tempstack.pop());
			}
			tempstack.push(temp);
		}
		return tempstack;
	}
}
