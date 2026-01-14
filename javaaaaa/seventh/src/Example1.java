import java.sql.*;
import java.util.Scanner;

public class Example1 {
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost:3306/samyakjava";
        String user = "root";
        String pass = "";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection cn = DriverManager.getConnection(url, user, pass);
        Scanner input = new Scanner(System.in);
        System.out.print("Enter program: ");
        String prog = input.nextLine();
        String query = "select COUNT(id) from student where faculty=?";

        PreparedStatement ps = cn.prepareStatement(query);
        ps.setString(1, prog);
        ResultSet rs = ps.executeQuery();
        rs.next();
        System.out.println("Total: " + rs.getInt(1));
        cn.close();
    }
}
