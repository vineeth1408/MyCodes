/* Create an Interface Vehicle with method getColor(),getNumber(), getConsumption()
calculate the fuel consumed, name and color for TwoWheeler and Four Wheeler By
implementing interface Vehicle. */
import java.util.*;

interface vehicle{
	String getColor();
	String getName();
	String getNumber();
	double getConsumption();
}

class TwoWheeler implements vehicle{
	String name,color,number;
	double fuelAmount,milesDriven;

	public String getName(){
		return name;
	}
	public String getColor(){
		return color;
	}
	public String getNumber(){
		return number;
	}
	public double getConsumption(){
		return milesDriven/fuelAmount;
	}

}
class FourWheeler implements vehicle{

	String name,color,number;
	double fuelAmount,milesDriven;

	public String getName(){
		return name;
	}
	public String getColor(){
		return color;
	}
	public String getNumber(){
		return number;
	}
	public double getConsumption(){
		return milesDriven/fuelAmount;
	}

}
class week7_4{
	public static void main(String apple[]){
		int menuChoice=1;
		boolean flag;
		Scanner in = new Scanner(System.in);
		Vector<TwoWheeler> TW = new Vector<TwoWheeler>();
		Vector<FourWheeler> FW = new Vector<FourWheeler>();
		String type,number;

		while (menuChoice != 3) {
			System.out.println("\nMENU\n1 - Add vehicle\t2 - Get vehicle details\t3 - Exit\n");
			menuChoice = Integer.parseInt(in.nextLine());
			switch (menuChoice) {
				case 1: System.out.print("Enter vehicle type: ");
						type=in.nextLine();
						if(type.equals("Two Wheeler")){
							TwoWheeler v = new TwoWheeler();
							System.out.print("Enter vehicle number: ");
                            v.number = in.nextLine();
                            System.out.print("Enter vehicle name: ");
                            v.name = in.nextLine();
                            System.out.print("Enter vehicle color: ");
                            v.color = in.nextLine();
                            System.out.print("Enter vehicle miles driven: ");
                            v.milesDriven = Double.valueOf(in.nextLine());
                            System.out.print("Enter fule consumed: ");
                            v.fuelAmount = Double.valueOf(in.nextLine());
                            TW.add(v);
						}
						else{
							FourWheeler v = new FourWheeler();
                            System.out.print("Enter vehicle number: ");
                            v.number = in.nextLine();
                            System.out.print("Enter vehicle name: ");
                            v.name = in.nextLine();
                            System.out.print("Enter vehicle color: ");
                            v.color = in.nextLine();
                            System.out.print("Enter vehicle miles driven: ");
                            v.milesDriven = Double.valueOf(in.nextLine());
                            System.out.print("Enter fule consumed: ");
                            v.fuelAmount = Double.valueOf(in.nextLine());
                            FW.add(v);
						}
					break;
					case 2:
						System.out.print("Enter vehicle number: ");
                        number = in.nextLine();
                        flag = false;

                        for (TwoWheeler twoWheeler : TW) { // datatype some varibale : collection name
                            if (twoWheeler.getNumber().equals(number)) {
                                flag = true;
                                System.out.println("Vehicle details: ");
                                System.out.println("Type: Two Wheeler");
                                System.out.println("Name: "+twoWheeler.getName());
                                System.out.println("Color: "+twoWheeler.getColor());
                                System.out.println("Number: "+twoWheeler.getNumber());
                                System.out.println("Consumption: "+twoWheeler.getConsumption());
                            }
                        }

                        for (FourWheeler fourWheeler : FW) {
                            if (fourWheeler.getNumber().equals(number)) {
                                flag = true;
                                System.out.println("Vehicle details: ");
                                System.out.println("Type: Four Wheeler");
                                System.out.println("Name: "+fourWheeler.getName());
                                System.out.println("Color: "+fourWheeler.getColor());
                                System.out.println("Number: "+fourWheeler.getNumber());
                                System.out.println("Consumption: "+fourWheeler.getConsumption());
                            }
                        }

                        if(!flag){

                        	 System.out.println("Vehicle not registered! Get registered now.");
                        	    }
						break;
				case 3: System.out.println("You've exit!");
						break;
				default: System.out.println("Something went wrong!");
                        
			}
		}
	}
}
