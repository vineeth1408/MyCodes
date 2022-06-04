package LAB;
import java.util.*;
public class week7_2 {

	public static void main(String[] args) {
		WeeklyEmployeed obj = new WeeklyEmployeed();
		Scanner sc = new Scanner(System.in);
		System.out.println("NO.OF WEEKS PRICE PER WEEK");
		obj.noofweeks=sc.nextInt();
		obj.priceperweek=sc.nextDouble();
		System.out.println("paid to weekly employee= "+obj.getAmount());
		System.out.println("NO.OF HOURS PRICE PER HOUR");
		HourlyEmployee obj1  = new HourlyEmployee();
		obj1.noofhours=sc.nextInt();
		obj1.priceperhour=sc.nextDouble();
		System.out.println("paid to hourly employee= "+obj1.getAmount());
	}

}
abstract class employ{
	
	protected double getAmount() {
		return 0.0d;
	}
}
class WeeklyEmployeed extends employ{
	double priceperweek;
	int noofweeks;
	public double getAmount() {
		return priceperweek*noofweeks;
	}
}
class HourlyEmployee extends employ{
	double priceperhour;
	int noofhours;
	public double getAmount() {
		return priceperhour*noofhours;
	}
}
