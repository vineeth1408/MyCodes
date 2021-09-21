/*Write a Java program that prints all real and imaginary solutions to the quadratic
equation ax2 + bx + c = 0. Read in a, b, c and use the quadratic formula  */

import java.util.Scanner;
import java.lang.Math.*;
public class week1_2{
	public static void main(String [] args){ // static no need to create an object for this class;
		double a,b,c,d,r1,r2;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter a value\n");
		a=in.nextDouble();
		System.out.println("Enter b value\n");
		b=in.nextDouble();
		System.out.println("Enter c value\n");
		c=in.nextDouble();
		d= (b*b)-(4*a*c);
		double sqrtval = Math.sqrt(Math.abs(d));
		if(d>0){
			r1=((-b-Math.sqrt(b*b-4*a*c)))/2*a;
			r2=((-b+Math.sqrt(b*b-4*a*c)))/2*a;
			System.out.println("root 1= "+ r1+" root 2= "+r2);
		}
		else if (d==0){
			System.out.println("roots are same "+ (-b/2*a));
		}
		else
		{
			System.out.println("Imaginary roots Complex and different\n");
			System.out.println(-b/(2*a)+"+i"+sqrtval+"\n"+-b/(2*a)+"-i"+sqrtval);
		}

	}
}