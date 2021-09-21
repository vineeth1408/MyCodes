class TicketCounter extends Thread{
	public synchronized void IssueTicket(String name) throws InterruptedException{
		System.out.println(name+"'s ticket is Generating");
		Thread.sleep(1000);
		System.out.println(name+"'s ticket is ISSUED");
		notifyAll();

	}
}
class TicketBoy extends Thread{
	public synchronized void VerifyTicket(String name) throws InterruptedException{
		System.out.println(name+"'s ticket is verifying");
		Thread.sleep(1000);
		System.out.println(name+"'s ticket is verified");
		notifyAll();

	}
}
class Person extends Thread{
	String name;
	TicketCounter ticketcounter;
	TicketBoy ticketboy;
	Person(String name,TicketCounter ticketcounter,TicketBoy ticketboy){
		this.name = name;
		this.ticketcounter=ticketcounter;
		this.ticketboy = ticketboy;
	}
	public void run(){
		synchronized(this){
			try{
				getTicket();
				showTicket();
				enterHall();
			}
			catch (InterruptedException e){
				e.printStackTrace();
			}
		}
	}
	void getTicket() throws InterruptedException{
		ticketcounter.IssueTicket(name);
	}
	void showTicket() throws InterruptedException{
		 System.out.println(name+" shown ticket!");
		ticketboy.VerifyTicket(name);
	}
	void enterHall(){
		System.out.println(name+" Entered hall");
	}


}
public class practice94{
	public static void main(String[] args) throws InterruptedException {
		TicketCounter ticketcounter = new TicketCounter();
		TicketBoy ticketboy = new TicketBoy();
		Person vineeth = new Person("Vineeth",ticketcounter,ticketboy);
		ticketcounter.start();
		ticketboy.start();
		vineeth.start();


	}
}