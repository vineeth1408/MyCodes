package NonAccessModifiers;

public class SynchronizeShort {

	public static void main(String[] args) { // static method without instantiation we can access using class name
		v obj = new v();
		t1 t=new t1();
		t2 tt = new t2();
		t.start();
		tt.start();
	}

}
class t1 extends Thread{
	public void run()
	{
		v.print(1);
	}
}
class t2 extends Thread
{
	public void run()
	{
		v.print(2);
	}
}
class v{
	
	synchronized static void print(int n)
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
// t1 and t2 are accessing one object-1
// t3 and t4 are accessing one object-2
// to interrupt the interferance of (t1 and t3) and (t2 and t4) -  use static keyword