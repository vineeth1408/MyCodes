package NonAccessModifiers;

public class AnonymousSynchornization {

	public static void main(String[] args) {
		value obj = new value();
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
class value
{
	synchronized void print(int n)
	{
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