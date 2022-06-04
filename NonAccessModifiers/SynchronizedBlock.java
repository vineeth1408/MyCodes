package NonAccessModifiers;

public class SynchronizedBlock {

	public static void main(String[] args) {
		val obj = new val();
		Thread t1 = new Thread()
				{						// Anonymous inner classes
					public void run() 
					{
						obj.print(5);
					}
				};
		Thread t2= new Thread() 
		{
			public void run()
			{
				obj.print(100);
			}
		};
		t1.start();
		t2.start();
	}
}
class val
{
	void print(int n)
	{
		synchronized(this) {
		for(int i=0;i<5;i++)
		{
			System.out.print(n*i+" ");
			try {
				Thread.sleep(1000);
			}
			catch (Exception e)
			{
				System.out.println(e);
			}
		}
	}
	}
}