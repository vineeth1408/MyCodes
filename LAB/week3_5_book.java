package LAB;
import java.util.*;
public class week3_5_book {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Number of Books");
		int n = sc.nextInt();
		book b[] = new book[n];
		for(int i=0;i<n;i++) {
			System.out.println("Book name\tbook author\t count");
			b[i] = new book(sc.next(),sc.next(),sc.nextInt());
		}
		System.out.println("Number of Customers");
		int m = sc.nextInt();
		customer c[] = new customer[m];
		for(int i=0;i<m;i++) {
			System.out.println("id\tc_name\tc_address");
			c[i]= new customer(sc.nextInt(),sc.next(),sc.next());
			c[i].b_count=0;
		}
		System.out.println("AVAILABLE BOOKS");
		for(int i=0;i<n;i++) {
			System.out.println("BOOK NAME "+b[i].b_name+" COUNT ="+b[i].b_count);
		}
		int opt=1;
		
		while(opt!=2)
		{	
			
			System.out.println("enter name and quantity of the book to be purchased");
			String t_name = sc.next();
			int quantity = sc.nextInt();
		 for(int j=0;j<n;j++)
		 {
			 if(t_name.compareTo(b[j].b_name)==0)
			 	{
				 	if(quantity>b[j].b_count)
				 		System.out.println("cuurent Book is out of stock");
				 	else
				 	{
				 		b[j].b_count -= quantity;
				 		c[j].b_count += quantity;
				 	}
			 	}	 
		 }
		 System.out.println("press anything to start again or  2: exit");
		  opt=sc.nextInt();
		 
		}
		for(int i=0;i<m;i++) {
			System.out.println("customer name "+c[i].c_name+"books purchased "+c[i].b_count);
		}
	}
}
class book{
	String b_name,b_author;
	int b_count;
	book(String b_name,String b_author,int b_count){
		this.b_author=b_author;
		this.b_count=b_count;
		this.b_name=b_name;
	}
}
class customer{
	int c_id,b_count;
	String c_name;
	String c_address;
	customer(int c_id,String c_name,String c_address){
		this.c_address=c_address;
		this.c_id=c_id;
		this.c_name=c_name;
	}
}
