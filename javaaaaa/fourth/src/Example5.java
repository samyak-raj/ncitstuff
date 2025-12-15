import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Example5 implements ActionListener {
    JFrame f;
    JMenuBar mb;
    JMenu file;
    JMenuItem sa, cut, cp, p, exit;
    JTextArea ta;

    public Example5() {
        f = new JFrame();
        f.setSize(500, 600);
        mb = new JMenuBar();
        f.setJMenuBar(mb);
        file = new JMenu("File");
        mb.add(file);
        sa = new JMenuItem("Select All");
        cut = new JMenuItem("Cut");
        cp = new JMenuItem("Copy");
        p = new JMenuItem("Paste");
        exit = new JMenuItem("Exit");
        file.add(sa);
        file.add(cut);
        file.add(cp);
        file.add(p);
        file.addSeparator();
        file.add(exit);
        ta = new JTextArea();
        f.add(ta);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setLayout(new FlowLayout());
        sa.addActionListener(this);
        cut.addActionListener(this);
        p.addActionListener(this);
        exit.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e) {
        String choice = e.getActionCommand();
        switch (choice) {
            case "Select All":
                ta.selectAll();
                break;

            case "Cut":
                ta.cut();
                break;

            case "Copy":
                ta.copy();
                break;

            case "Paste":
                ta.paste();
                break;

            case "Exit":
                System.exit(0);
                break;
        }
    }
    public static void main(String[] args) {
        new Example5();
    }
}
