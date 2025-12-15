import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Example3 extends MouseAdapter implements MouseMotionListener{
    JFrame f;
    JTextField t1, t2;

    public Example3() {
        f = new JFrame();
        f.setSize(500, 600);
        t1 = new JTextField();
        t2 = new JTextField();
        t1.setColumns(10);
        t2.setColumns(10);
        f.add(t1);
        f.add(t2);
        f.setLayout(new FlowLayout());
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.addMouseListener(this);
        f.addMouseMotionListener(this);
    }
    public void mouseEntered(MouseEvent e) {
        t1.setText("in");
    }

    public void mouseExited(MouseEvent e) {
        t1.setText("out");
    }

    public void mouseMoved(MouseEvent e) {
        String location = "X= " + e.getX() + ", Y= " + e.getY();
        t2.setText(location);
    }
    public void mouseDragged(MouseEvent e) {}

    public static void main(String[] args) {
        new Example3();
    }
}
