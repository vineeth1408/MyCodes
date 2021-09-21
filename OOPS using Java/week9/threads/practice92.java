class Consumer extends Thread{
	public void run(){
	
		while (true) {
            try {
                if (practice92.item==false) {
                    System.out.println("Production status: in progress"); 
                } else {
                    System.out.println("Production status: produced");
                    practice92.item = false;
                }
                Thread.sleep(1000);
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }

	}
}
class Producer extends Thread{
	public void run(){
		while(true){
			try{
				Thread.sleep(1000);
				practice92.item=true;
			}catch (InterruptedException e){
				e.printStackTrace();
			}
		}

	}
}

public class practice92{
	public static boolean item = false;
	public static void main(String[] args){
		Producer obj = new Producer();
		obj.start();
		Consumer obj1 = new Consumer();
		
		obj1.start();
		
	}
}