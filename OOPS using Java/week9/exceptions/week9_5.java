/*Exception Handling program for NumberFormatException--thrown if a program is
attempting to convert a string to a numerical datatype, and the string contains
inappropriate characters (i.e. 'z' or 'Q').  */
class week9_5 {
    public static void main(String[] args) {
    	try{
        	int num = Integer.parseInt("100AND200");
        }
        catch(NumberFormatException e){
        	System.out.println(e);
        }
    }
}