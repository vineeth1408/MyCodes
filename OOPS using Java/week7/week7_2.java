/*Create an abstract class Employee with methods getAmount() which displays the
amount paid to employee. Reuse this class to calculate the amount to be paid to
WeeklyEmployeed and HourlyEmployee according to no. of hours and total hours for
HourlyEmployee and no. of weeks and total weeks for WeeklyEmployee.  */

import java.util.*;

abstract class Employee{
	private double getAmount(){
		return 0.0d;
	}
}

class WeeklyEmployee extends Employee{
	public double priceperweek,numberofweeks;
	public double getAmount(){
		return priceperweek*numberofweeks;
	}

}

class HourlyEmployee extends Employee{
	public double priceperhour,numberofhours;
	public double getAmount(){
		return priceperhour * numberofhours;
	}
}

class week7_2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		int menuChoice = 1;

		while (menuChoice != 3) {
			System.out.println("\nMENU\n1 - Weekly employee\t2 - Hourly employee\t3 - Exit\n");
			menuChoice = Integer.parseInt(in.next());

			switch (menuChoice) {
				case 1: WeeklyEmployee weeklyEmployee = new WeeklyEmployee();
                        System.out.print("Enter pay per week: ");
						weeklyEmployee.priceperweek = Double.valueOf(in.next());
                        System.out.print("Enter number of weeks: ");
						weeklyEmployee.numberofweeks = Double.valueOf(in.next());
						System.out.println("Total pay = "+weeklyEmployee.getAmount());
						break;
				case 2: HourlyEmployee hourlyEmployee = new HourlyEmployee();
                        System.out.print("Enter pay per hour: ");
						hourlyEmployee.priceperhour = Double.valueOf(in.next());
                        System.out.print("Enter number of hours: ");
						hourlyEmployee.numberofhours = Double.valueOf(in.next());
						System.out.println("TotaL pay = "+hourlyEmployee.getAmount());
						break;
				case 3: System.out.println("You've exit!");
						break;
				default: System.out.println("Something went wrong!");
			}
		}
    }
}