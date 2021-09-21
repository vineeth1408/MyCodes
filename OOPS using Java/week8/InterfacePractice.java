import Interface.dog;
import Interface.cat;

class babydog implements dog{
	public void dogshow(){
		System.out.println("BABY DOG implements DOG");
	}
}
class babycat implements cat{
	public void catshow(){
		System.out.println("CAT BABY implements CAT");
	}
}

public class InterfacePractice{
	public static void main(String[] args) {
		babydog obj = new babydog();
		obj.dogshow();
		babycat obj1 = new babycat();
		obj1.catshow();
	}
}