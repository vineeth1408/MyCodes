/* Create an Interface StudentFee with method
getAmount(),getFirstName(),getLastName(), getAddress(), getContact(). Calculate the
amount paid by the Hostler and NonHostler student by implementing interface Student
Fee*/
import java.util.*;

interface StudentFee{
	double getAmount();
	String getFirstName();
	String getLastName();
	String getAddress();
	String getContact();
}
class Hostler{
	String id,FirstName,LastName,Address,Contact;
	double HostelFee,MessFee,SemFee;

	Hostler(String id,String firstname,String lastname,String address,String contact,double hostelfee,double messfee,double semfee){
		this.id=id;
		this.FirstName=firstname;
		this.LastName=lastname;
		this.Address=address;
		this.Contact=contact;
		this.HostelFee=hostelfee;
		this.MessFee=messfee;
		this.SemFee=semfee;
	}
	public String getFirstName(){
		return this.FirstName;
	}
	public String getLastName(){
		return this.LastName;
	}
	public String getAddress(){
		return this.Address;
	}
	public String getContact(){
		return this.Contact;
	}
	public double getAmount(){
		return this.HostelFee + this.MessFee + this.SemFee;
	}
}

class NonHostler{
	String id,FirstName,LastName,Address,Contact;
	double SemFee;

	NonHostler(String id,String firstname,String lastname,String address,String contact,double semfee){
		this.id=id;
		this.FirstName=firstname;
		this.LastName=lastname;
		this.Address=address;
		this.Contact=contact;
		this.SemFee=semfee;
	}
	public String getFirstName(){
		return this.FirstName;
	}
	public String getLastName(){
		return this.LastName;
	}
	public String getAddress(){
		return this.Address;
	}
	public String getContact(){
		return this.Contact;
	}
	public double getAmount(){
		return this.SemFee;
	}
}

class week7_6{
	public static void main(String apple[]){
		Scanner in =new Scanner(System.in);
		Vector<Hostler> hostlers = new Vector<>();
		hostlers.add(new Hostler("B161408","GOGU","VINEETH","WARANGAL","9999999999",1000,2000,500));
		hostlers.add(new Hostler("B161409","KOTA","SHYAM","NIZAMABAD","8888888888",1000,2000,500));
		hostlers.add(new Hostler("B161410","MADDELA","UDAY","KARMNAGAR","9999999999",1000,2000,500));
		hostlers.add(new Hostler("B161411","ALLE","PAVAN","HUDERABAD","7777777777",1000,2000,500));
		hostlers.add(new Hostler("B161412","MATHANGI","SRAVAN","WARANGAL","6666666666",1000,2000,500));

		Vector<NonHostler> nonhostlers = new Vector<>();
		nonhostlers.add(new NonHostler("B161000","GOGU","VINAY","BASAR","123456789",1100));
		nonhostlers.add(new NonHostler("B161001","GOGU","ROHITH","NIRMAL","123434349",2200));

		int menuChoice = 1;
        String id;
        boolean flag;

        while (menuChoice != 2) {
            System.out.println("\nMENU\n1 - Get fee details\n2 - Exit\n");
            menuChoice = Integer.parseInt(in.nextLine());

            switch (menuChoice) {
                case 1: System.out.print("Enter id: ");
                        id = in.nextLine();

                        flag = false;

                        for (Hostler hostler : hostlers) {
                            if (hostler.id.equals(id)) {
                                flag = true;
                                System.out.println("_____Details_____");
                                System.out.println("Name: "+hostler.getFirstName()+" "+hostler.getLastName());
                                System.out.println("Residence type: Hostler");
                                System.out.println("Address: "+hostler.getAddress());
                                System.out.println("Contact: "+hostler.getContact());
                                System.out.println("Fees: "+hostler.getAmount());
                            }
                        }

                        for (NonHostler nonHostler : nonhostlers) {
                            if (nonHostler.id.equals(id)) {
                                flag = true;
                                System.out.println("_____Details_____");
                                System.out.println("Name: "+nonHostler.getFirstName()+" "+nonHostler.getLastName());
                                System.out.println("Residence type: Non hostler");
                                System.out.println("Address: "+nonHostler.getAddress());
                                System.out.println("Contact: "+nonHostler.getContact());
                                System.out.println("Fees: "+nonHostler.getAmount());
                            }
                        }

                        if (!flag)
                            System.out.println("Student details not found!");
                        break;
                case 2: System.out.println("You've exit!");
                        break;
                default: System.out.println("Something went wrong!");
            }
        }
	}
}