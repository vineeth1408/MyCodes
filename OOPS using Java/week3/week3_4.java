/*Write a java program : rolling a pair of dices 10 times [ each attempt should be delayed
by 10000 ms ] and count number Successful attempts. successful attempt : If the pair of
Dice results in same values.
 */
import java.util.*;
public class week3_4{
	public static void main(String args[]) throws Exception {
		 Random r = new Random();
		int d1,d2,c=0;
		for(int i=0;i<10;i++){
			System.out.println("ROLLING");
			
			 d1=r.nextInt(6)+1;
			 d2=r.nextInt(6)+1;
			 Thread.sleep(100);
			System.out.println(d1+" "+d2+" "+"ROLLING DONE");
			if(d1==d2){
				c++;
			}
			try {
			 	Thread.sleep(1000);
			 }
			 catch (InterruptedException e){
			 	System.out.println(e);
			 }
		}
		System.out.println("MATCHED RESULTS= "+c);

	}
}