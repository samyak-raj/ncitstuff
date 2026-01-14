import java.sql.*;
import java.util.Scanner;

public class Menu {
    Connection cn;
    PreparedStatement ps;
    ResultSet rs;
    static Scanner scan = new Scanner(System.in);

    public Menu() throws Exception {
        Class.forName("com.mysql.cj.jdbc.Driver");
        cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/samyakjava", "root", "");
        if (cn == null) {
            throw new SQLException("unable to get connection");
        }
        System.out.println("Connected to database...");
    }

    private void searchByName() throws SQLException {
        System.out.println("Enter name to search: ");
        String name = scan.next();
        ps = cn.prepareStatement("SELECT * FROM student WHERE name = ?");
        ps.setString(1, name);
        rs = ps.executeQuery();
        while(rs.next()) {
            System.out.println("Id: " + rs.getInt("id") + ", Name: " + rs.getString("name") + ", Faculty: " + rs.getString("faculty") + ", grade: " + rs.getFloat("grade"));
        }
    }

    private void insertRow() throws SQLException {
        System.out.println("Enter ID: ");
        int id = scan.nextInt();
        System.out.println("Enter name to add: ");
        String name = scan.next();
        System.out.println("Enter faculty: ");
        String faculty = scan.next();
        System.out.println("Enter grade: ");
        float grade = scan.nextFloat();
        ps = cn.prepareStatement("INSERT INTO student VALUES (?, ?, ?, ?)");
        ps.setInt(1, id);
        ps.setString(2, name);
        ps.setString(3, faculty);
        ps.setFloat(4, grade);
        ps.executeUpdate();
    }
    private void showAll() throws SQLException {
        ps = cn.prepareStatement("SELECT * FROM student");
        rs = ps.executeQuery();
        while(rs.next()) {
            System.out.println("Id: " + rs.getInt("id") + ", Name: " + rs.getString("name") + ", Faculty: " + rs.getString("faculty") + ", grade: " + rs.getFloat("grade"));
        }
    }

    private void deleteById() throws SQLException {
        System.out.println("Enter student ID to delete: ");
        int id = scan.nextInt();
        ps = cn.prepareStatement("DELETE FROM student WHERE id = ?");
        ps.setInt(1, id);
        int count = ps.executeUpdate();
        System.out.println("Rows deleted:  " + count);
    }

    private void exit() throws SQLException {
        cn.close();
        System.out.println("Connection closed");
        System.exit(0);
    }

    private void showMenu() {
        System.out.println("----Menu----");
        System.out.println("1. Search student");
        System.out.println("2. Insert student");
        System.out.println("3. Delete student by id");
        System.out.println("4. Show all students");
        System.out.println("5. Exit");
        System.out.println("------------");
    }

    public static void main(String[] args) throws Exception {
        Menu obj = new Menu();
        obj.showMenu();
        while(true) {
            System.out.print("Enter choice: ");
            int choice = scan.nextInt();
            switch (choice) {
                case 1:
                    obj.searchByName();
                    break;
                case 2:
                    obj.insertRow();
                    break;
                case 3:
                    obj.deleteById();
                    break;
                case 4:
                    obj.showAll();
                    break;
                case 5:
                    obj.exit();
                default:
                    System.out.println("Invalid choice");
                    obj.showMenu();
            }
        }
    }
}
