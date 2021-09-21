/*Write a program to Store and retrieve file content from the Data base.
 */
import java.sql.*;
import java.io.*;

class Week12_5 {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			System.out.println("Driver loaded");
			String cs = "jdbc:mysql://localhost:3308";
			Connection con = DriverManager.getConnection(cs, "root", "");
			System.out.println("Connected!");
			Statement statement = con.createStatement();
			statement.execute("DROP DATABASE IF EXISTS FileDB");
	    statement.execute("CREATE DATABASE FileDB");
	    statement.execute("USE FileDB");
	    statement.execute("CREATE TABLE files (id INTEGER, file LONGTEXT, PRIMARY KEY (id) )");
	    System.out.println("Table created!");
			FileReader reader = new FileReader("C:/Users/Ramanakishore/Desktop/B161480/OOPS LAB/Week12/HelloWorld.txt");
			PreparedStatement stmt = con.prepareStatement("INSERT INTO files VALUES (?, ?)");
			stmt.setInt(1, 1);
			stmt.setClob(2, reader);
			stmt.executeUpdate();
			System.out.println("File stored!");
			ResultSet result = statement.executeQuery("SELECT * FROM files");
	    while (result.next()) {
	    		int id = result.getInt("id");
	    		FileWriter writer = new FileWriter("C:/Users/Ramanakishore/Desktop/B161480/OOPS LAB/Week12/retrievedFile.txt");
					Clob clob = result.getClob("file");
					Reader r = clob.getCharacterStream();
					int i;  
					while((i=r.read())!=-1) {
						writer.write((char)i);
					} 
					writer.close();
	    }
	    System.out.println("File retrieved!");
			con.close();
			System.out.println("Connection closed!");
		} catch (Exception e) {
			System.out.println("Error!");
			e.printStackTrace();
		}
	}
}