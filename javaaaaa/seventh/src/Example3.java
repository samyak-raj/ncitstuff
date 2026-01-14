import java.sql.*;
import java.util.Scanner;

public class Example3 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        int count = 0;
        String choice = "y";
        String url = "jdbc:mysql://localhost:3306/samyakjava";
        String user = "root";
        String pass = "";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection cn = DriverManager.getConnection(url, user, pass);
        String sql = "INSERT INTO student1(id, name, marks) VALUES (?, ?, ?)";
        PreparedStatement ps = cn.prepareStatement(sql);

        while (choice.equals("y")) {
            System.out.println("Enter ID: ");
            int id = input.nextInt();
            input.nextLine();
            System.out.println("Enter Name: ");
            String name = input.nextLine();

            System.out.println("Enter Marks: ");
            int marks = input.nextInt();

            ps.setInt(1, id);
            ps.setString(2, name);
            ps.setInt(3, marks);

            int rows = ps.executeUpdate();
            if (rows > 0) {
                count++;
                System.out.println("Record inserted successfully.");
            }

            System.out.println("Do you want to continue? (y/n): ");
            choice = String.valueOf(input.next().charAt(0)).toLowerCase();
        }

        System.out.println("Total records inserted: " + count);
        cn.close();
    }
}
