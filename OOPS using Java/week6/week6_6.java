/* Extend the above TwoWheeler class with methods getType() and getName() which
gives the information about the type and the name of the company.Create sub-classes
Geared and NonGeared with method average() to print the average of a geared and nongeared two wheeler.*/
import java.util.*;

class Vehicle {
	private String vehicleNumber, insuranceNumber, color;
	private double consumption;

	Vehicle(String vehicleNumber, String insuranceNumber, String color, double consumption) {
		this.vehicleNumber = vehicleNumber;
		this.insuranceNumber = insuranceNumber;
		this.color = color;
		this.consumption = consumption;
	}

	public double getConsumption() {
		return consumption;
	}

	public String displayConsumption() {
		return "Consumption: "+getConsumption()+"";
	}

	public String getVehicleNumber() {
		return this.vehicleNumber;
	}

	public String getInsuranceNumber() {
		return this.insuranceNumber;
	}

	public String getColor() {
		return this.color;
	}
}

class TwoWheeler extends Vehicle {
	private double maintenance, average;

	TwoWheeler(String vehicleNumber, String insuranceNumber, String color, double consumption, double maintenance, double average) {
		super(vehicleNumber, insuranceNumber, color, consumption);
		this.maintenance = maintenance;
		this.average = average;
	}

	public void displayMaintenance() {
		System.out.println("Two wheeler Maintenance: "+maintenance+"");
	}

	public double getAverage() {
		return this.average;
	}


	public void displayAverage() {
		 System.out.println("Two wheeler Average: "+average+"");
	}
}
class ExtendedTwoWheeler extends TwoWheeler{
	private String type, name;

	ExtendedTwoWheeler(String vehicleNumber, String insuranceNumber, String color, double consumption, double maintenance, double average, String type, String name) {
		super(vehicleNumber, insuranceNumber, color, consumption, maintenance, average);
		this.type = type;
		this.name = name;
	}

	public String getType() {
		return type;
	}

	public String getName() {
		return name;
	}

}

class Geared extends ExtendedTwoWheeler {
	Geared(String vehicleNumber, String insuranceNumber, String color, double consumption, double maintenance, double average, String type, String name) {
		super(vehicleNumber, insuranceNumber, color, consumption, maintenance, average, type, name);
	}

	public double getAverage() {
		return super.getAverage();
	}
}

class NonGeared extends ExtendedTwoWheeler {
	NonGeared(String vehicleNumber, String insuranceNumber, String color, double consumption, double maintenance, double average, String type, String name) {
		super(vehicleNumber, insuranceNumber, color, consumption, maintenance, average, type, name);
	}

	public double getAverage() {
		return super.getAverage();
	}
}

class FourWheeler extends Vehicle{
	private double maintenance, average;
	FourWheeler(String vehicleNumber, String insuranceNumber, String color, double consumption, double maintenance, double average) {
		super(vehicleNumber, insuranceNumber, color, consumption);
		this.maintenance = maintenance;
		this.average = average;	
	}

	public void displayMaintenance() {
		System.out.println("Four wheler Maintenance: "+maintenance+"");
	}

	public void displayAverage() {
		 System.out.println("Four wheeler Average: "+average+"");
	}

}
class week6_6 {
	public static void main(String[] args) {
		
		Geared honda = new Geared("TS15-1408", "1234-5678-1234", "Red", 27.9, 205390, 95, "Honda", "Activa");

		System.out.println("Geared Two wheeler details: ");
		System.out.println("Vehicle number: "+honda.getVehicleNumber());
		System.out.println("Insurance number: "+honda.getInsuranceNumber());
		System.out.println("Color: "+honda.getColor());
		System.out.println("Type: "+honda.getType());
		System.out.println("Name: "+honda.getName());
		honda.displayConsumption();
		honda.displayMaintenance();
		honda.displayAverage();
		System.out.println("\n");

		NonGeared maruti = new NonGeared("TS15-1228", "6256-7639-2826", "Gray", 29.2, 204380, 83, "Maruti", "Suzuki");
		
		System.out.println("\nNon Geared Two wheeler details: ");
		System.out.println("Vehicle number: "+maruti.getVehicleNumber());
		System.out.println("Insurance number: "+maruti.getInsuranceNumber());
		System.out.println("Color: "+maruti.getColor());
		System.out.println("Type: "+maruti.getType());
		System.out.println("Name: "+maruti.getName());
		maruti.displayConsumption();
		maruti.displayMaintenance();
		maruti.displayAverage();
}
}