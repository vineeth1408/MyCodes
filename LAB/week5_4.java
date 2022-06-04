package LAB;
import java.util.*;
public class week5_4{
	public static void main(String args[]) {
		System.out.println("Enter balance");
		Scanner in = new Scanner(System.in);
		account obj = new account(in.nextDouble());
		int choice=1;
		double value;
		int pre;
		System.out.println("Enter Name,Account Number,Address");
		 obj.account_name=in.nextLine();
		 obj.account_number=in.nextInt();
		 obj.account_address=in.nextLine(); 
		while(choice==1){
			System.out.println("\n");
			System.out.println("1-: CREDIT | 2-: DEBIT | 3-: GET_BALANCE | 4-: EXIT");
			pre = in.nextInt();
			switch(pre){
				case 1: System.out.println("ENTER AMOUNT TO CREDIT");
						value =in.nextDouble();
						obj.credit(value);
				break;
				case 2:	System.out.println("ENTER AMOUNT TO CREDIT");
						value= in.nextDouble();
						obj.Debit(value);
				break;
				case 3:obj.GetBalance();
				break;
				case 4: choice=2;
			}

		}
	}
}

class account{
	double balance;
	String account_name;
	int account_number;
	int account_balance;
	String account_address;
	account(double balance){
		if(balance>=0){
			this.balance=balance;	
		}
		else {
			System.out.println("AMOUNT GREATER THAN ZERO");
		}
	}
	void credit(double balance){
		if(balance < 0){
			System.out.println("ENTER VALID AMOUNT");	
		}
		else{
		this.balance += balance;
		System.out.println("AMOUNT ADDED= "+this.balance);
		}
	}
	void Debit(double balance){
		if(balance <= this.balance)
		this.balance -= balance;
		else{
			System.out.println("Debit amount exceeded account balance");
		}
	}
	void GetBalance(){
		System.out.println("AVAILABLE ="+this.balance);
	}	
}