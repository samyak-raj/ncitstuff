import java.sql.*;

public class Exam22 {
    public static void main(String[] args) throws Exception {
        String url = "jdbc:mysql://localhost:3306/samyakjava";
        String user = "root";
        String pass = "";
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection cn = DriverManager.getConnection(url, user, pass);
        Statement st = cn.createStatement();
        ResultSet rs1 = st.executeQuery("select AVG(grade) from student");
        rs1.next();
        System.out.println("Average grade: " + rs1.getFloat(1));
        ResultSet rs2 = st.executeQuery("select COUNT(grade) from student where faculty='BESE'");
        rs2.next();
        System.out.println("Count: " + rs2.getInt(1));
        cn.close();
    }

}
