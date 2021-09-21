/* Program for demonstrating the use of throw, throws & finally - Create a class with a
main( ) that throws an object of class Exception inside a try block. Give the constructor
for Exception a String argument. Catch the exception inside a catch clause and print the
String argument. Add a finally clause and print a message to prove you were there. */
class DemoException extends Exception{
	DemoException(String str){
		super(str);
	}
}

class week9_1{
	public static void main(String args[]) throws DemoException{
		try{
			throw new DemoException("DemoException is thrown");
		}
		catch(DemoException de){
			System.out.println(de.getMessage());
		}
		finally{
			System.out.println("HEY! You were in finally block now");
		}

	}
}