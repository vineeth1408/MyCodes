/*A mail-order house sells five products whose retail prices are as follows : Product 1 :
Rs. 99.90 , Product 2 : Rs. 20.20 , Product 3 : Rs. 6.87 , Product 4 : Rs. 45.50 and
Product 5 : Rs. 40.49 . Each product has Prdouct_Id, Product_Name,
Product_Quantity, Product_Price. Write an application that reads a series of pairs of
numbers as follows :
a) product Id
b) quantity sold your program use a switch statement to determine the retail price for
each product. it should calculate and display the total retail value of all products sold. */
import java.util.*;
import java.util.Scanner;
public class week3_2_1{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int p_id[]=new int[5];
		String p_name[] = new String[5];
		int p_quantity[] = new int[5];
		double p_price[]= new double[5];
		p_price[0]=99.90;
		p_price[1]=20.20;
		p_price[2]=6.87;
		p_price[3]=45.50;
		p_price[4]=40.49;
		for(int j=0;j<5;j++){
			System.out.println("P_ID | P_NAME | P_QUANTITY");
			p_id[j]=in.nextInt();
			p_name[j]=in.next();
			p_quantity[j]=in.nextInt();
		}
		int total_price=0;
		int p_ids,p_quan;
		int i;
		int k=1;
		while(k==1){
		System.out.println("MENU | 1 ORDER PRODUCT | 2 TOTAL VALUE");
		 k=in.nextInt();
		switch(k){
			case 1:System.out.println("ENTER PRODUCT ID");
					p_ids=in.nextInt();
					System.out.println("ENTER P_QUANTITY TO BUY");
					p_quan = in.nextInt();
					for(i=0;i<5;i++){
						if(p_ids==p_id[i]){
							if(p_quan > p_quantity[i]){
								System.out.println("LIMIT EXCEEDED");
							}
							else{
								total_price+= p_price[i] * p_quan;
								p_quantity[i]= p_quantity[i] - p_quan;
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