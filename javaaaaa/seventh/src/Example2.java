import java.sql.*;
import java.util.Scanner;

public class Example2 {
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost:3306/samyakjava";
        String user = "root";
        String pass = "";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection cn = DriverManager.getConnection(url, user, pass);
        Scanner input = new Scanner(System.in);
        System.out.print("Enter name: ");
        String name = input.nextLine();
        String query = "delete from student where name=?";

        PreparedStatement ps = cn.prepareStatement(query);
        ps.setString(1, name);
        int del = ps.executeUpdate();
        System.out.println("Total records deleted: " + del);
        cn.close();
    }
}
