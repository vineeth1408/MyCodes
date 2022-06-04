package LAB;
import java.util.*;
public class week3_4 {

	public static void main(String[] args) throws Exception{
		Random r = new Random();
		int c=0;
		for(int i=0;i<10;i++) {
		int n1 = r.nextInt(6)+1;
		int n2 = r.nextInt(6)+1;
		try {
			Thread.sleep(1000);
		}
		catch(InterruptedException e) {
			System.out.println(e);
		}
		if(n1==n2)
			c++;
		
		
		}
		System.out.println("MATCHED RESULTS :"+c);
	}

}
