import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Example4 extends JFrame implements ActionListener{
    JMenuBar mb;
    JMenu menu;
    JMenuItem one, two;
    JLabel l;

    public Example4(){
        setSize(400, 500);
        mb = new JMenuBar();
        setJMenuBar(mb);
        menu = new JMenu("Menu");
        mb.add(menu);
        one = new JMenuItem("One");
        two = new JMenuItem("Two");
        menu.add(one);
        menu.add(two);
        l = new JLabel();
        add(l);
        setLayout(new FlowLayout());
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        one.addActionListener(this);
        two.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e) {
        String v = e.getActionCommand();
        l.setText(v + " is selected");
    }
    public static void main(String[] args) {
        new Example4();
    }
}
