/*Write an application to create a super class Vehicle with information vehicle
number,insurance number,color and methods getConsumption() displayConsumption().
Derive the sub-classes TwoWheeler and FourWheeler with method maintenance() and
average() to print the maintenance And average of vehicle. */
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

	public void displayAverage() {
		 System.out.println("Two wheeler Average: "+average+"");
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
class week6_5 {
	public static void main(String[] args) {
		TwoWheeler honda = new TwoWheeler("TS15-1408", "1234-5678-1234", "Red", 27.9, 205390, 95);

		System.out.println("Two wheeler details: ");
		System.out.println("Vehicle number: "+honda.getVehicleNumber());
		System.out.println("Insurance number: "+honda.getInsuranceNumber());
		System.out.println("Color: "+honda.getColor());
		honda.displayConsumption();
		honda.displayMaintenance();
		honda.displayAverage();
		System.out.println("\n");

		FourWheeler car = new FourWheeler("TS15-1408", "1234-5678-1234", "Blue", 26.9, 205392, 96);
		System.out.println("Four wheeler details: ");
		System.out.println("Vehicle number: "+car.getVehicleNumber());
		System.out.println("Insurance number: "+car.getInsuranceNumber());
		System.out.println("Color: "+car.getColor());
		car.displayConsumption();
		car.displayMaintenance();
		car.displayAverage();
}
}