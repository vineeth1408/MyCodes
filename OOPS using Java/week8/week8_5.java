/* Write a program for the following
a. Example to use interfaces in Packages. b. Example to create sub package in a
package.
*/
import animals_classification.herbivores.Lion;
import animals_classification.carnivores.Elephant;

class BabyElephant implements Elephant{
    public void display() {
        System.out.println("\nThis is Elephant's baby!");
    }
}

class BabyLion implements Lion {
    public void display() {
        System.out.println("\nThis is Lion's baby!");
    }
}

class week8_5 {
    public static void main(String[] args) {
        BabyElephant babyElephant = new BabyElephant();
        babyElephant.display();
        BabyLion babyLion = new BabyLion();
        babyLion.display();
    }
}