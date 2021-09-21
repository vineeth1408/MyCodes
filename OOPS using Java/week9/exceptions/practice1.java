class abc extends Exception{
	abc(String str){
		super(str);
		
	}
}

public class practice1{
	public static void main(String[] args) throws abc{
		try{
			throw new abc("Exception throwing");
		}
		catch(abc e){
			System.out.println(e.getMessage());
		}
		finally{
			System.out.println("FINALLY EXECUTED");
		}

		}	
}