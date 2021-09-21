/*Write a program to store an Image and retrieve an image from Database
 */
import java.sql.*;
import java.io.*;

class Week12_4 {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			System.out.println("Driver loaded");
			String cs = "jdbc:mysql://localhost:3308";
			Connection con = DriverManager.getConnection(cs, "root", "");
			System.out.println("Connected!");
			Statement statement = con.createStatement();
			statement.execute("DROP DATABASE IF EXISTS ImageDB");
            statement.execute("CREATE DATABASE ImageDB");
            statement.execute("USE ImageDB");
            statement.execute("CREATE TABLE images (id INTEGER, picture BLOB, PRIMARY KEY (id) )");
            System.out.println("Table created!");
			File file = new File("C:/Users/vineeethgvk/Desktop/E3-S1/JAVA/Week12/example1.png");
			FileInputStream inStream = new FileInputStream(file);
			PreparedStatement stmt = con.prepareStatement("INSERT INTO images VALUES (?, ?)");
			stmt.setInt(1, 1);
			stmt.setBinaryStream(2, inStream, (int)file.length());
			stmt.executeUpdate();
			System.out.println("Image stored!");
			ResultSet result = statement.executeQuery("SELECT * FROM images");
            while (result.next()) {
                    int id = result.getInt("id");
                File img = new File("C:/Users/Ramanakishore/Desktop/B161480/OOPS LAB/Week12/retrievedImage.jpg");
                    FileOutputStream outStream = new FileOutputStream(img);
                        Blob blob = result.getBlob("picture");
                        byte[] b = blob.getBytes(1, (int)blob.length());
                        outStream.write(b);
            }
            System.out.println("Image retrieved!");
                con.close();
                System.out.println("Connection closed!");
		} catch (Exception e) {
			System.out.println("Error!");
			e.printStackTrace();
		}
	}
}