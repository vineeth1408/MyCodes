package NonAccessModifiers;

public class WithOutSynchronizaation {

	public static void main(String[] args) {
		table obj = new table();
		MyThread1 t1 = new MyThread1(obj);
		MyThread2 t2 = new MyThread2(obj);
		t1.start();
		t2.start();;
	}

} // to overcome data consistency and thread interfaces we use synchronized keyword
class table{
	void print(int n)
	{
		for(int i=0;i<5;i++)
		{
			System.out.print(n*i+" ");
			try 
			{
				Thread.sleep(1000);
			}
			catch (Exception e)
			{
				System.out.println(e);//Thread exception if 
			}
		}
		System.out.println("\n");
	}
}
class MyThread1 extends Thread{
	table t;
	MyThread1(table t)
	{
		this.t=t;
	}
	public void run()
	{
		t.print(5);
	}
}
class MyThread2 extends Thread{
	table t;
	MyThread2(table t)
	{
		this.t=t;
	}
	public void run()
	{
		t.print(100);
	}
}
