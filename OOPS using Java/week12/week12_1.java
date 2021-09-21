/*Write a program to insert data into Student Table */
import java.sql.*;

class Week12_1 {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.jdbc.Driver");
			System.out.println("Driver loaded");
			String cs = "jdbc:mysql://localhost:3306";
			Connection con = DriverManager.getConnection(cs, "root", "rgukt321");
			System.out.println("Connected!");
			Statement statement = con.createStatement();
			statement.execute("DROP DATABASE IF EXISTS college");
            statement.execute("CREATE DATABASE college");
            statement.execute("USE college");
            statement.execute("CREATE TABLE student (id INTEGER, name VARCHAR(10), year INTEGER, semester INTEGER, PRIMARY KEY (id) )");
            System.out.println("Table created!");
            statement.executeUpdate("INSERT INTO student VALUES (1, 'ram', 2020, 1)");
            statement.executeUpdate("INSERT INTO student VALUES (2, 'raj', 2018, 1)");
            System.out.println("Values inserted!");
			con.close();
			System.out.println("Connection closed!");
		} catch (Exception e) {
			System.out.println("Error!");
			e.printStackTrace();
		}
	}
}