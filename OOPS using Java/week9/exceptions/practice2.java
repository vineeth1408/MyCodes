	public class practice2{
		public static void main(String[] args) {
			try{
				int x=2/0;
			}
			catch(ArithmeticException e){
			 	System.out.println(e);
			 }		
			catch(Exception e){
				System.out.println(e);	
			}
			 
		}
	}