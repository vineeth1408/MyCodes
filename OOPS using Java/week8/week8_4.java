/*Write a Calculator program : Include all calculator operations in as classes in a Package
“Calculator” and import in to main class. */
import calculator.Add;
import calculator.Subtract;
import calculator.Multiply;
import calculator.Divide;
import java.util.Scanner;

class week8_4 {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
		Add add = new Add();
        Subtract subtract = new Subtract();
        Multiply multiply = new Multiply();
        Divide divide = new Divide();
        double num1, num2;

        int menuChoice = 1;

        while (menuChoice != 5) {
            System.out.print("\nMENU\n1 - Add\t2 - Subtract\t3 - Multiply\t4 - Divide\t5 - Exit\n");
            menuChoice = Integer.parseInt(in.nextLine());

            switch (menuChoice) {
                case 1: System.out.print("Enter num1: ");
                        num1 = Double.valueOf(in.nextLine()); 
                        System.out.print("Enter num2: ");
                        num2 = Double.valueOf(in.nextLine());
                        System.out.println("Addition is: "+add.add(num1, num2));
                        break;
                case 2: System.out.print("Enter num1: ");
                        num1 = Double.valueOf(in.nextLine()); 
                        System.out.print("Enter num2: ");
                        num2 = Double.valueOf(in.nextLine()); 
                        System.out.println("Subtraction is: "+subtract.subtract(num1, num2));
                        break;
                case 3: System.out.print("Enter num1: ");
                        num1 = Double.valueOf(in.nextLine());
                        System.out.print("Enter num2: ");
                        num2 = Double.valueOf(in.nextLine());
                        System.out.println("Multiplication is: "+multiply.multiply(num1, num2));
                        break;
                case 4: System.out.print("Enter num1: ");
                        num1 = Double.valueOf(in.nextLine());
                        System.out.print("Enter num2: ");
                        num2 = Double.valueOf(in.nextLine());
                        if (num2 == 0)
                            System.out.println("Denominator can't be zero.");
                        else
                            System.out.println("Division is: "+divide.divide(num1, num2));
                        break;
                case 5: System.out.println("You've exti!");
                        break;
                default: System.out.println("Something went wrong!");
            }
        }
	}
}