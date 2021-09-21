/*Implement the following case study using OOP concepts in Java. E-Book stall :
Every book has Properties which includes : Book _Name, Book_Author, Book_Count ; 
OOPS using JAVA CSE-E3

Every Customer is having properties as : Customer_Id, Customer_Name,
Customer_Address and he can buy Books from E-Book stall. Write a Program which will
display the text book name and the remaining count of text books when a customer
buys a text book. */
import java.io.*;
import java.util.*;
public class week3_5{
	public static void main(String args[]) throws IOException{
	
		Scanner in = new Scanner(System.in);
				
				
				customer c[] = new customer[5];
				book_stall b[] = new book_stall[5];
				
				b[0] = new book_stall("java","J.Gosling",50);
				b[1] = new book_stall("c","Peter",100);
				b[2] = new book_stall("python","Shyam",50);
				b[3] = new book_stall("html","Thomson",20);
				b[4] = new book_stall("php","Narsimha",30);

				c[0] = new customer(1,"arun","basar");
				c[1] = new customer(2,"vinay","nizamabad");
				c[2] = new customer(3,"pradeep","karimnagar");
				c[3] = new customer(4,"vikram","warangal");
				c[4] = new customer(5,"aadhi","basar");
				System.out.println("\n");

				System.out.println("BOOK NAME | BOOK AUTHOR | BOOK COUNT");
				System.out.println("\n");
				for(int i=0;i<5;i++){
					System.out.println(b[i].book_name+"        "+b[i].book_author+"        "+b[i].book_count);
				}
				int count;
				String book_name1;
				int choice=1;
				while(choice==1){
				System.out.println("\n");
				System.out.println("WANT TO BUY A TEXT BOOK\nPRESS 1 TO BUY TEXTBOOK \t PRESS 2 TO EXIT");
				 choice = in.nextInt();
				switch(choice){
					case 1:System.out.println("ENTER BOOK NAME AND COUNT OF BOOKS TO BUY");
							book_name1 = in.next();
							count = in.nextInt();
							for(int i=0;i<5;i++){
								if(book_name1.compareTo(b[i].book_name)==0){
									b[i].sales(book_name1,count);
								}
							}
							
					break;
					case 2:
					break;
				}
			}
		// String s[]= new String[10];
		}
	}
class book_stall{
	String book_name;
	String book_author;
	int book_count;
	book_stall(String a,String b,int c){
		this.book_name=a;
		this.book_author=b;
		this.book_count=c;
	}
	void sales(String book_name,int book_count){
		if(this.book_count >= book_count){
			this.book_count-=book_count;
			System.out.println("BOOK NAME "+book_name+" REMAINING COUNT OF BOOKS "+this.book_count);
		}
		else
		{
			System.out.println("BOOKS NOT AVAILBALE");
		}
	}
}
class customer{
	int c_id;
	String c_name;
	String c_address;
	customer(int a,String b,String c){
		this.c_id=a;
		this.c_name=b;
		this.c_address=c;
	}

}
	