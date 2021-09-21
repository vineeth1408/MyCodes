/*Write a Java program to create package called dept. Create four classes as CSE, ECE,
ME and CE add methods in each class which can display subject names of your respect
year. access this package classes from main class
 */
import dept.CSE;
import dept.ECE;
import dept.ME;
import dept.CE;

class week8_3 {
	public static void main(String[] args) {
		CSE cse = new CSE();
        cse.displaySubjects();
        ECE ece = new ECE();
        ece.displaySubjects();
        ME me = new ME();
        me.displaySubjects();
        CE ce = new CE();
        ce.displaySubjects();
	}
}