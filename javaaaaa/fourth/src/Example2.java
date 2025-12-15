import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Example2 implements ActionListener{
    JFrame f;
    JButton red, blue, pink;
    public Example2(){
        f = new JFrame();
        f.setSize(500, 600);
        red = new JButton("Red");
        blue = new JButton("Blue");
        pink = new JButton("Pink");
        f.setLayout(new FlowLayout());
        f.setVisible(true);
        f.add(red);
        f.add(blue);
        f.add(pink);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        red.addActionListener(this);
        blue.addActionListener(this);
        pink.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e){
        if (e.getSource() == red) {
            f.getContentPane().setBackground(Color.RED);
        } else if (e.getSource() == blue) {
            f.getContentPane().setBackground(Color.BLUE);
        } else {
            f.getContentPane().setBackground(Color.PINK);
        }
    }
    public static void main(String[] args){
        new Example2();
    }
}
