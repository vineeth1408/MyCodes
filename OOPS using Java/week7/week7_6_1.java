/*Create an Interface StudentFee with method
getAmount(),getFirstName(),getLastName(), getAddress(), getContact(). Calculate the
amount paid by the Hostler and NonHostler student by implementing interface Student
Fee */
import java.util.*;

interface StudentFee{
	double getAmount();
	String getFirstName();
	String getLastName();
	String getAddress();
	String getContact();
}
class Hostler implements StudentFee{
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

class NonHostler implements StudentFee{
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

class week7_6_1{
	public static void main(String apple[]){
		Hostler Hs=new Hostler("B171818","Avinash","Goud","Kamareddy","9666714500",1000,2000,500);
		System.out.println("Hostler Details:");
		System.out.println("FirstName: "+Hs.getFirstName()+"\nLastName:"+Hs.getLastName()+"\nAddress: "+Hs.getAddress()+"\nCntact: "+Hs.getContact()+"\nFee:"+Hs.getAmount());
		
		NonHostler Nhs=new NonHostler("B161408","Kranthi","Kumar","Ramareddy","9654723400",1000);
		System.out.println("\n\nNon-Hostler Details:");
		System.out.println("FirstName: "+Nhs.getFirstName()+"\nLastName:"+Nhs.getLastName()+"\nAddress: "+Nhs.getAddress()+"\nCntact: "+Nhs.getContact()+"\nFee:"+Nhs.getAmount());
            }
        }
