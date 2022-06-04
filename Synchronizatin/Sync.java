package Synchronizatin;

class counter{
	int count;
	public void inc()
	{
		count++;
	}
}
public class Sync {

	public static void main(String[] args) {
		counter c= new counter();
//		c.inc();
//		c.inc();
		System.out.println(c.count);
	}

}
