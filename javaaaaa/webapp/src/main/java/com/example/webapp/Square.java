package com.example.webapp;
import jakarta.servlet.http.*;
import jakarta.servlet.*;
import jakarta.servlet.annotation.*;
import java.io.*;

@WebServlet("/square")
public class Square extends HttpServlet {
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        PrintWriter out = res.getWriter();
        res.setContentType("text/html");
        int num = Integer.parseInt(req.getParameter("num"));
        int sq = num * num;
        out.print("<h3>The square of " + num + " is " + sq + "</h3>");
    }
}
