/* Create an Interface Fare with method getAmount() to get the amount paid for fare of
travelling. Calculate the fare paid by bus and train implementing interface Fare.  */
import java.util.*;
interface Fare{
	public double getAmount();
}
class Bus implements Fare{
	double distance;
	double fareperKm;

	Bus(double distance,double fareperKm){
		this.distance=distance;
		this.fareperKm=fareperKm;
	}
	public double getAmount(){
		return this.distance*this.fareperKm;
	}
}
class Train implements Fare{
	double distance;
	double fareperKm;
	Train(double distance,double fareperKm){
		this.distance=distance;
		this.fareperKm=fareperKm;
	}
	public double getAmount(){
		return this.distance*this.fareperKm;
	}
}

class week7_5_1{
	public static void main(String args[]){
		Bus b = new Bus(120,2.5);
		System.out.println("Bus Details\n"+"Distance travelled in KM's "+b.distance+" Fare per KM= "+b.fareperKm+" Total Fare= "+b.getAmount());
		System.out.println("\n");
		Train t = new Train(300,2);
		System.out.println("Train Details\n"+"Distance travelled in KM's "+t.distance+" Fare per KM= "+t.fareperKm+" Total Fare= "+t.getAmount());		
	}
}