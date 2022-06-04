package LAB;
import java.util.*;
public class week3_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Vector <Integer> v = new Vector<>();
		for (int i=0;i<5;i++) {
			int n = sc.nextInt();
			if(n>=10 && n<=100) {
				if(v.contains(n)) {
					i--;
					System.out.println("Duplicate");
				}
				else
					v.add(n);
			}
			else {
				i--;
			}
		}

	}

}
