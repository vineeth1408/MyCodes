/*Exception Handling program for ClassNotFoundException--thrown if a program can not
find a class it depends at runtime (i.e., the class's ".class" file cannot be found or was
removed from the CLASSPATH).  */
class week9_4 {
    public static void main(String[] args) {
        try {
            Class.forName("week9_4");
        } catch (ClassNotFoundException cfe) {
            cfe.printStackTrace();
        }
    }
}	