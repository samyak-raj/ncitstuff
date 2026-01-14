import java.sql.*;

public class Select {
    public static void main(String[] args) {
        final String url = "jdbc:mysql://localhost:3306/samyakjava";
        final String user = "root";
        final String pwd = "";
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection cn = DriverManager.getConnection(url, user, pwd);
            Statement st = cn.createStatement();
            String query = "SELECT * FROM student";
            ResultSet rs = st.executeQuery(query);
            while (rs.next()) {
                System.out.println("id: " + rs.getInt("id") + ", name:  " + rs.getString("name") + ", faculty: " + rs.getString("faculty") + ", grade: "  + rs.getFloat("grade"));
            }
        } catch (ClassNotFoundException e) {
            System.out.println(e.getMessage());
        } catch (SQLException e) {
            System.out.println(e.getMessage());
        }
    }
}
