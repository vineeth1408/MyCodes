/* Create a class Account with an instance variable balance (double). It should contain a
constructor that initializes the balance, ensure that the initial balance is greater than 0.0.
Acct details: Acct_Name, Acct_acctno, Acct_Bal, Acct_Address.
Create two methods namely credit and debit, getBalance. The Credit adds the amount
(passed as parameter) to balance and does not return any data. Debit method withdraws
money from an Account. GetBalance displays the amount. Ensure that the debit amount
does not exceed the Account’s balance. In that case the balance should be left unchanged
and the method should print a message indicating “Debit amount exceeded account
balance”.
*/
import java.util.*;
public class week5_4{
	public static void main(String args[]) {
	
		account obj = new account(0);
		Scanner in = new Scanner(System.in);
		int choice=1;
		double value;
		int pre;
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