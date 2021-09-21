/*Write a Program using Threads for the following case study: Movie Theatre To watch
a movie the following process is to be followed, at first get the ticket then show the
ticket. Assume that N persons are trying to enter the Theatre hall all at once, display
their seuence of entry into theater. Note: The person should enter only after getting a
ticket and showing it to the boy */
class TicketCounter extends Thread {
    public synchronized void issueTicket(String name) throws InterruptedException {
        System.out.println(name+"'s ticket generating...");
        Thread.sleep(10000);
        System.out.println(name+"'s ticket issued");
        notifyAll();
    }
}

class TicketBoy extends Thread {
    public synchronized void verifyTicket(String name) throws InterruptedException {
        System.out.println(name+"'s ticket verifying...");
        Thread.sleep(10000);
        System.out.println(name+"'s ticket verified");
        notifyAll();
    }
}

class Person extends Thread {
    String name;
    TicketCounter ticketCounter;
    TicketBoy ticketBoy;

    Person(String name, TicketCounter ticketCounter, TicketBoy ticketBoy) {
        this.name = name;
        this.ticketCounter = ticketCounter;
        this.ticketBoy = ticketBoy;
    }

    public void run() {
        synchronized (this) {
            try {
                getTicket();
                showTicket();
                enterHall();
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }
    }

    void getTicket() throws InterruptedException {
        ticketCounter.issueTicket(name);
    }

    void showTicket() throws InterruptedException {
        System.out.println(name+" shown ticket!");
        ticketBoy.verifyTicket(name);
    }

    void enterHall() {
        System.out.println(name+" entered hall!");
    }
}

class Week9_4 {
    public static void main(String[] args) throws InterruptedException {
        TicketCounter ticketCounter = new TicketCounter();
        TicketBoy ticketBoy = new TicketBoy();
        Person ramana = new Person("Ramana", ticketCounter, ticketBoy);
        Person venkat = new Person("Venkat", ticketCounter, ticketBoy);
        Person nikhil = new Person("Nikhil", ticketCounter, ticketBoy);
        Person vineeth = new Person("Vineeth", ticketCounter, ticketBoy);
        Person praveen = new Person("Praveen", ticketCounter, ticketBoy);
        ticketCounter.start();
        ticketBoy.start();
        ramana.start();
        venkat.start();
        nikhil.start();
        vineeth.start();
        praveen.start();
        ramana.join();
        venkat.join();
        nikhil.join();
        vineeth.join();
        praveen.join();
        ticketCounter.join();
        ticketBoy.join();
    }
}