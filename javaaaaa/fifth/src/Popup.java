import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Popup extends MouseAdapter implements ActionListener{
    JFrame f;
    JPopupMenu pop;
    JMenuItem one, two;
    JLabel l;

    public Popup() {
        f = new JFrame("Popup");
        f.setSize(500, 500);
        l = new JLabel();
        f.add(l);
        pop = new JPopupMenu();
        f.add(pop);
        one = new JMenuItem("one");
        two = new JMenuItem("two");
        pop.add(one);
        pop.add(two);
        f.setVisible(true);
        f.setLayout(new FlowLayout());
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        one.addActionListener(this);
        two.addActionListener(this);
        f.addMouseListener(this);
    }
    public void actionPerformed(ActionEvent e) {
        String s = e.getActionCommand();
        l.setText(s + " is selected");
    }
    public void mouseClicked(MouseEvent e) {
        pop.show(f, e.getX(), e.getY());
    }

    public static void main(String[] args) {
        new Popup();
    }
}



