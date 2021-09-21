/* Create your own exception class using the extends keyword. Write a constructor for this
class that takes a String argument and stores it inside the object with a String reference.
Write a method that prints out the stored String. Create a try- catch clause to exercise your
new exception.*/
class NewException extends Exception{
	NewException(String str){
		super(str);
	}
}

class week9_6{
	public static void main(String args[]){
		try{
			throw new NewException("NewException is thrown");
		}
		catch(NewException de){
			System.out.println(de.getMessage());
		}
		

	}
}