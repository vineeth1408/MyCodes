/*A mail-order house sells five products whose retail prices are as follows : Product 1 :
Rs. 99.90 , Product 2 : Rs. 20.20 , Product 3 : Rs. 6.87 , Product 4 : Rs. 45.50 and
Product 5 : Rs. 40.49 . Each product has Prdouct_Id, Product_Name,
Product_Quantity, Product_Price. Write an application that reads a series of pairs of
numbers as follows :
a) product Id
b) quantity sold your program use a switch statement to determine the retail price for
each product. it should calculate and display the total retail value of all products sold. */
import java.util.*;
import java.lang.*;
class products{
	public int p_id;
	public String product_name;
	public double p_quantity;
	public double p_price;
	products(int a,double d, String b,double c){
		this.p_id=a;
		this.product_name=b;
		this.p_quantity=c;
		this.p_price=d;
	}

}

public class week3_2{
	public static void main(String args[]){
		products p[]= new products[5];
		Scanner in = new Scanner(System.in);
		System.out.println("WELOCOME");
		p[0]=new products(1,99.90,"PEN",50);
		p[1]=new products(2,20.20,"PENICL",30);
		p[2]=new products(3,6.87,"BOOK",20);
		p[3]=new products(4,45.50,"MARKERS",30);
		p[4]=new products(5,40.49,"BOTTLES",40);
		
		System.out.println("\n");
		System.out.println("P_ID | P_NAME | P_QUANTITY");
		for(int i=0;i<5;i++){
			System.out.println(p[i].p_id+"        "+p[i].product_name+"        "+p[i].p_quantity);
		}

		int total_price=0;
		int p_ids,p_quan;
		int i;
		int k=1;
		while(k==1){
		System.out.println("\n");
		System.out.println("MENU | 1 ORDER PRODUCT | 2 TOTAL PRICE");
		 k=in.nextInt();
		 System.out.println("\n");
		switch(k){
			case 1:System.out.println("ENTER PRODUCT ID");
					p_ids=in.nextInt();
					System.out.println("ENTER P_QUANTITY TO BUY");
					p_quan = in.nextInt();
					for(i=0;i<5;i++){
						if(p_ids==p[i].p_id){
							if(p_quan > p[i].p_quantity){
								System.out.println("LIMIT EXCEEDED");
							}
							else{
								total_price+= p[i].p_price * p_quan;
								p[i].p_quantity= p[i].p_quantity - p_quan;
							}
							break;
						}
					}
					if(i==5){
						System.out.println("PRODUCT ID NOT FOUND");
					}

			break;
			case 2:System.out.println("TOTAL_PRICE= "+total_price);
			break;
			default: System.out.println("Something went wrong");
		}
		}
	
}
}

