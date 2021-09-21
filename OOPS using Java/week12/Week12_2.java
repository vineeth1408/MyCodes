/* Write a program to retrieve the data from the table Student.
*/
import java.sql.*;

class Week12_2 {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			System.out.println("Driver loaded");
			String cs = "jdbc:mysql://localhost:3308/college";
			Connection con = DriverManager.getConnection(cs, "root", "");
			System.out.println("Connected!");
			Statement statement = con.createStatement();
	    ResultSet result = statement.executeQuery("SELECT * FROM student");
	    System.out.println("student table\nID | NAME | YEAR | SEM");
	    while (result.next()) {
	        int studentId = result.getInt("id");
	        String studentName = result.getString("name");
	        int studentYear = result.getInt("year");
	        int studentSem = result.getInt("semester");
	        System.out.printf("%2d | %4s | %4d | %3d\n", studentId, studentName, studentYear, studentSem);
	    }
			con.close();
			System.out.println("Connection closed!");
		} catch (Exception e) {
			System.out.println("Error!");
			e.printStackTrace();
		}
	}
}