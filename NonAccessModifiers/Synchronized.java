package NonAccessModifiers;

public class Synchronized {

	public static void main(String[] args) {
		values obj = new values();
		MyThread11 t1 = new MyThread11(obj);
		MyThread22 t2 = new MyThread22(obj);	
		t1.start();
		t2.start();
	}
}
class MyThread11 extends Thread
{
	values obj;
	MyThread11(values obj)
	{
		this.obj=obj;
	}
	public void run()
	{
		obj.print(5);
	}
}
class MyThread22 extends Thread
{
	values obj;
	MyThread22(values obj)
	{
		this.obj=obj;
	}
	public void run()
	{
		obj.print(100);
	}
}
class values
{
	synchronized void print(int n)
	{
		for(int i=0;i<5;i++)
		{
			System.out.print(n*i+" ");
			try {
				Thread.sleep(1000);
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
		}
		System.out.println("After first set of values");
	}
}