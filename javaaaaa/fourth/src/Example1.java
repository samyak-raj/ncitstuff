import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Example1 implements  ActionListener {
    JFrame f;
    JTextField t;
    JButton b;
    public Example1(){
        f = new JFrame("Example 1");
        f.setSize(400,400);
        t = new JTextField();
        t.setColumns(10);
        f.add(t);
        b = new JButton("Click");
        f.add(b);
        f.setVisible(true);
        f.setLayout(new FlowLayout());
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        b.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Font font = new Font("Arial", Font.BOLD, 20);
        t.setFont(font);

//        f.setBackground(Color.RED);
        f.getContentPane().setBackground(Color.RED);
        t.setBackground(Color.GREEN);
        t.setForeground(Color.BLUE);
    }
    public static void main(String[] args) {
        new Example1();
    }

}
