/* Create an Interface Vehicle with method getColor(),getNumber(), getConsumption()
calculate the fuel consumed, name and color for TwoWheeler and Four Wheeler By
implementing interface Vehicle. */
import java.util.*;
interface Vehicle{
		public String getColor();
		public String getName();
		public double getConsumption() ;
	}
class TwoWheeler implements Vehicle{
	String vehicleNumber,color;
	double consumption;
	TwoWheeler(String vehicleNumber,String color,double consumption){
			this.vehicleNumber=vehicleNumber;
			this.color=color;
			this.consumption=consumption;
	}

	public String getName(){
		return vehicleNumber;
	}
	public String getColor(){
		return color;
	}
	public double getConsumption(){
		return consumption;
	}
}

class FourWheeler implements Vehicle{
	String vehicleNumber,color;
	double consumption;
	FourWheeler(String vehicleNumber,String color,double consumption){
			this.vehicleNumber=vehicleNumber;
			this.color=color;
			this.consumption=consumption;
	}

	public String getName(){
		return vehicleNumber;
	}
	public String getColor(){
		return color;
	}
	public double getConsumption(){
		return consumption;
	}
}

class week7_4_1{
	public static void main(String args[]){
		TwoWheeler obj = new TwoWheeler("TS26-1674","BLUE",10);
		System.out.println("Two wheeler details: ");
		System.out.println("Vehicle number: "+obj.getName());
		System.out.println("Color: "+obj.getColor());
		System.out.println("Fuel consumed(in Litres): "+obj.getConsumption());
		
		
		FourWheeler obj1 = new FourWheeler("TS26-1624","ORANGE",20);
		System.out.println("\n");
		System.out.println("Four wheeler details: ");
		System.out.println("Vehicle number: "+obj1.getName());
		System.out.println("Color: "+obj1.getColor());
		System.out.println("Fuel consumed(in Litres): "+obj1.getConsumption());		
	}
}