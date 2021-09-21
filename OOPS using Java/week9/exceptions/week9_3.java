/* Write a program to rethrow an exception – Define methods one() & two(). Method
two() should initially throw an exception. Method one() should call two(), catch the
exception and rethrow it Call one() from main() and catch the rethrown */
class week9_3 {

    static void two() throws Exception {
        throw new Exception("Exception thrown in function two()");
    }

    static void one() throws Exception {
        try {
            two();
        } catch (Exception e) {
            System.out.println("Caught: "+e.getMessage()+" In one() for first time."+" Rethrowing first time...");
            throw e;
        }
    }

    public static void main(String[] args) throws Exception{
        try {
            one();
        } catch (Exception e) {
            System.out.println("Caught: "+e.getMessage()+" In main() for second time."+" Rethrowing second time...");
            try {
                throw e;
            } catch (Exception ex) {
                System.out.println("caught: "+ex.getMessage()+" In main() for third time.");
            }
        }
    }
}