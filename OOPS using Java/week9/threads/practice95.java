class ReservationCounter extends Thread{
	int availableBerths;
	ReservationCounter(int availableBerths){
		this.availableBerths = availableBerths;
	}
	public synchronized boolean IssueTicket(String name,int requestedBerths) throws InterruptedException{
		if(requestedBerths <= availableBerths){
			availableBerths -=requestedBerths;
			System.out.println(name+"'s ticket generating");
			Thread.sleep(10000);
			System.out.println(name+"'s ticket Issued");
			System.out.println("Available Berths= "+availableBerths);
			notifyAll();
			return true;
		}
		else{
			System.out.println("Sorry "+name+"Berths are not available");
			notifyAll();
			return false;
		}
	}
}
class PrintTicket extends Thread{
	public synchronized void PrintTickets(String name, int allotedBirth) throws InterruptedException{
		System.out.println(name+"'s ticket printing..............");
        Thread.sleep(1000);
        System.out.println("name= "+name+" Alloted Births= "+allotedBirth);
        System.out.println();
        notifyAll();
	}
}
class person extends Thread{
	String name;
	int requestedBerth;
	ReservationCounter reservationcounter;
	PrintTicket printticket;
	person(String name,int requestedBerth, ReservationCounter reservationcounter, PrintTicket printticket){
		this.name = name;
		this.requestedBerth = requestedBerth;
		this.reservationcounter = reservationcounter;
		this.printticket = printticket;
	}
	public void run(){
		synchronized(this){
			try{
				if(reserveBerths())
					Ticket();
			}
			catch(InterruptedException e){
				e.printStackTrace();
			}
		}
	}
	boolean reserveBerths() throws InterruptedException{
		return reservationcounter.IssueTicket(name,requestedBerth);
	}
	void Ticket() throws InterruptedException{
		printticket.PrintTickets(name,requestedBerth);
	}

}
public class practice95{
	public static void main(String[] args) throws InterruptedException{
		ReservationCounter reservationcounter = new ReservationCounter(100);
		PrintTicket printticket = new PrintTicket();
		person vineeth = new person("vineeth",10,reservationcounter,printticket);
		person ramana = new person("ramana",20,reservationcounter,printticket);
		person nikhil = new person("nikhil",30,reservationcounter,printticket);
		person praveen = new person("praveen",50,reservationcounter,printticket);
		person venkat = new person("venkat",10,reservationcounter,printticket);

		reservationcounter.start();
		printticket.start();

		vineeth.start();
        ramana.start();
        venkat.start();
        nikhil.start();
        praveen.start();

        ramana.join();
        venkat.join();
        nikhil.join();
        vineeth.join();
        praveen.join();

        reservationcounter.join();
        printticket.join();
	}
}