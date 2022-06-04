package LAB;
import java.util.*;
public class week3_2 {

	public static void main(String[] args) {
		products p[] = new products[5];
		Scanner sc = new Scanner(System.in);
		System.out.println("WELCOME");
		p[0]=new products(1,"APPLES",23.4,10.4);
		p[1]=new products(2,"MANGOES",21.4,9.4);
		
		
	}

}
class products{
	public int p_id;
	public String p_name;
	public double p_quantity;
	public double p_price;
	products(int p_id, String p_name, double p_qunatity,double p_price) {
		this.p_id=p_id;
		this.p_name=p_name;
		this.p_quantity=p_quantity;
		this.p_price=p_price;
	}
}
