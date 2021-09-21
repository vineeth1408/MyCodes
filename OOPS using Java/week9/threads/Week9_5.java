/* Write a Program using Threads for the following case study: Train Reservation system
To reserve a berth the following process need to be followed, at first check the number of
available berths with the requested berths, if the number of requested berths are less than
or equal to availabe berths then allot berth and print ticket or else display no berths are
available. Assume that N persons are trying to reserve the berth, display their sequence of
reservation status along with the number of available berths. Note : The person can print
ticket only if berth is confirmed.*/
class ReservationCounter extends Thread {
    int availableBerths;

    ReservationCounter(int availableBerths) {
        this.availableBerths = availableBerths;
        System.out.println("Available berths: "+availableBerths);
    }

    public synchronized boolean issueTicket(String name, int requestedBerths) throws InterruptedException {
        if (requestedBerths <= availableBerths) {
            availableBerths -= requestedBerths;
            System.out.println(name+"'s ticket generating...");
            Thread.sleep(10000);
            System.out.println(name+"'s ticket issued");
            System.out.println("Available berths: "+availableBerths);
            notifyAll();
            return true;
        } else {
            System.out.println("Sorry "+name+". Berths not available");
            notifyAll();
            return false;
        }
    }
}

class PrintTicket extends Thread {
    public synchronized void printTicket(String name) throws InterruptedException {
        System.out.println(name+"'s ticket printing...");
        Thread.sleep(10000);
        System.out.println(name+"'s ticket printed");
        notifyAll();
    }
}

class Person extends Thread {
    String name;
    ReservationCounter reservationCounter;
    PrintTicket printTicket;
    int requiredBerths;

    Person(String name, int requiredBerths, ReservationCounter reservationCounter, PrintTicket printTicket) {
        this.name = name;
        this.requiredBerths = requiredBerths;
        this.reservationCounter = reservationCounter;
        this.printTicket = printTicket;
    }

    public void run() {
        synchronized (this) {
            try {
                if (reserveBerths())
                    printTickets();
            } catch (InterruptedException ie) {
                ie.printStackTrace();
            }
        }
    }

    boolean reserveBerths() throws InterruptedException {
        return reservationCounter.issueTicket(name, requiredBerths);
    }

    void printTickets() throws InterruptedException {
        printTicket.printTicket(name);
    }
}

class Week9_5 {
    public static void main(String[] args) throws InterruptedException {
        ReservationCounter reservationCounter = new ReservationCounter(50);
        PrintTicket printTicket = new PrintTicket();
        Person ramana = new Person("Ramana", 10, reservationCounter, printTicket);
        Person venkat = new Person("Venkat", 10, reservationCounter, printTicket);
        Person nikhil = new Person("Nikhil", 10, reservationCounter, printTicket);
        Person vineeth = new Person("Vineeth", 30, reservationCounter, printTicket);
        Person praveen = new Person("Praveen", 10, reservationCounter, printTicket);
        reservationCounter.start();
        printTicket.start();
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
        reservationCounter.join();
        printTicket.join();
    }
}