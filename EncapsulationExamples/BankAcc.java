package EncapsulationExamples;

class BankAcc {
	private long acc_no;
	private String name;
	
	public void setAcc(long acc_no)
	{
		this.acc_no=acc_no;
	}
	public long GetAccountNum()
	{
		return acc_no;
	}
	public void SetName(String s)
	{
		this.name=s;
	}
	public String GetName()
	{
		return this.name;
	}
}

