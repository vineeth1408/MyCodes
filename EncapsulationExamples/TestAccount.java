package EncapsulationExamples;

public class TestAccount {
	public static void main(String[] args) {
		BankAcc obj = new BankAcc();
		obj.setAcc(123455);
		obj.SetName("Vineeth");
		System.out.println(obj.GetAccountNum());
		System.out.println(obj.GetName());
	}
}