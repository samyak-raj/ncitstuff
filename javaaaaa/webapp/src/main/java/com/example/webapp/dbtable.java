package com.example.webapp;
import jakarta.servlet.http.*;
import jakarta.servlet.*;
import jakarta.servlet.annotation.*;
import java.io.*;
import java.sql.*;
@WebServlet("/dbtable")
public class dbtable extends HttpServlet {
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{
        PrintWriter out = res.getWriter();
        res.setContentType("text/html");
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/lab6", "root", "rootpass");
            Statement s = cn.createStatement();
            ResultSet rs = s.executeQuery("Select * from department");
            out.print("<table>");
            out.print("<tr><th>did</th><th>dname</th><th>location</th></tr>");
            while(rs.next()) {
                out.print("<tr>");
                out.print("<td>" + rs.getInt(1) + "</td>");
                out.print("<td>" + rs.getString(2) + "</td>");
                out.print("<td>" + rs.getString(3) + "</td>");
                out.print("</tr>");
            }
            out.print("</table>");
            cn.close();
        } catch(Exception e) {
            out.print("<p>Unable to connect to db</p>");
        }

    }
}
