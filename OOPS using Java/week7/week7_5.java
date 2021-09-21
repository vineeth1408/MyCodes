/* Create an Interface Fare with method getAmount() to get the amount paid for fare of
travelling. Calculate the fare paid by bus and train implementing interface Fare.  */
import java.util.*;

class Distance {
    public String fromPlace, toPlace, modeOfTransport;
    public double distance;

    Distance(String fromPlace, String toPlace, String modeOfTransport, double distance) {
        this.fromPlace = fromPlace;
        this.toPlace = toPlace;
        this.modeOfTransport = modeOfTransport;
        this.distance = distance;
    }
}

class DistanceStore {
    Vector<Distance> distances = new Vector<>();

    DistanceStore() {
        distances.add(new Distance("Bhainsa", "Nizamabad", "Bus", 49));
        distances.add(new Distance("Bhainsa", "Nizamabad", "Train", 32));
        distances.add(new Distance("Nizamabad", "Karimnagar", "Bus", 152.8));
        distances.add(new Distance("Nizamabad", "Karimnagar", "Train", 98.3));
    }
}

interface Fare {
    double getAmount();
}

class Bus implements Fare {
    String fromPlace, toPlace;
    double farePerKiloMetre;
    DistanceStore distanceStore = new DistanceStore();

    Bus(String type) {
        if (type.equals("Express")) {
            farePerKiloMetre = 2.25;
        }

        if (type.equals("Ordinary")) {
            farePerKiloMetre = 1.15;
        }
    }

    public double getAmount() {
        for (Distance distance : distanceStore.distances) {
            if (distance.fromPlace.equals(fromPlace) && distance.toPlace.equals(toPlace) && distance.modeOfTransport.equals("Bus")) {
                return farePerKiloMetre * distance.distance;
            }
        }

        return -1;
    }
}

class Train implements Fare {
    String fromPlace, toPlace;
    double farePerKiloMetre;
    DistanceStore distanceStore = new DistanceStore();

    Train(String type) {
        if (type.equals("AC Coach")) {
            farePerKiloMetre = 1.22;
        }

        if (type.equals("Economy Coach")) {
            farePerKiloMetre = 1.03;
        }

        if (type.equals("General Coach")) {
            farePerKiloMetre = 0.98;
        }
    }

    public double getAmount() {
        for (Distance distance : distanceStore.distances) {
            if (distance.fromPlace.equals(fromPlace) && distance.toPlace.equals(toPlace) && distance.modeOfTransport.equals("Train")) {
                return farePerKiloMetre * distance.distance;
            }
        }

        return -1;
    }
}

class week7_5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int menuChoice = 1;

        while(menuChoice != 3) {
            System.out.println("\nMENU\n1 - Find bus fare\n2 - Find train fare\n3 - Exit\n");
            menuChoice = Integer.parseInt(in.nextLine());

            switch (menuChoice) {
                case 1: System.out.print("Type: ");
                        Bus bus = new Bus(in.nextLine());
                        System.out.print("From: ");
                        bus.fromPlace = in.nextLine();
                        System.out.print("To: ");
                        bus.toPlace = in.nextLine();
                        if (bus.getAmount() == -1)
                            System.out.print("Route not found");
                        else
                            System.out.println("\nFare from "+bus.fromPlace+" to "+bus.toPlace+" is "+bus.getAmount());
                        break;
                case 2: System.out.print("Type: ");
                        Train train = new Train(in.nextLine());
                        System.out.print("From: ");
                        train.fromPlace = in.nextLine();
                        System.out.print("To: ");
                        train.toPlace = in.nextLine();
                        if (train.getAmount() == -1)
                            System.out.print("Route not found");
                        else
                            System.out.println("\nFare from "+train.fromPlace+" to "+train.toPlace+" is "+train.getAmount());
                        break;
                case 3: System.out.println("Thanks for using our service. Visit again.");
                        break;
                default: System.out.println("Something went wrong!");
            }
        }
    }
}