package DSA540;
import java.util.*;
public class Parenthesis {
	public static void main(String[] args) {
		String s="{}())";
		if(balanced(s))
			System.out.println("Balanced");
		else {
			System.out.println("Not Balanced");
		}
	}
	public static boolean balanced(String s) {
		// Stack<Character> stack = new Stack<Character>();
		Deque <Character> stack = new ArrayDeque<Character>(); // arraydeque is faster compared to stack
		// O(n) time and space complexity
		for(int i=0;i<s.length();i++) 
		{
			if(s.charAt(i)=='[' || s.charAt(i)=='{' || s.charAt(i)=='(')
			{
				stack.push(s.charAt(i));
				continue;
			}
			if(stack.isEmpty())
				return false;
			char check;
			char x = s.charAt(i);
			switch(x) 
			{
				case ')':check = stack.pop();
						if(check=='{' || check=='[')
							return false;
				break;
				case ']':check = stack.pop();
						if(check=='(' || check=='{')
							return false;
				break;
				case '}':check = stack.pop();
						if(check=='[' || check =='(')
							return false;
				break;
			}
		}
			return (stack.isEmpty());
		}
}
