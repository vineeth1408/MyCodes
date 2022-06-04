package Synchronizatin;

public class MethodLevelSynchronization {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		thread t1 = new thread();
		thread t2 = new thread();
		thread t3 = new thread();
		t1.start();
		t2.start();
		t3.start();
	}

}

class thread extends Thread{
	int count=10;
	public void run() // if we make this method synchronized then race condition is eliminated
	{
		System.out.println(count);
		count++;
	}
}