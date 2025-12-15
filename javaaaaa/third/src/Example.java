import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

class Example implements ActionListener {
    JFrame f;
    JTextField t1, t2, t3;
    JButton plus, minus;

    public Example() {
        f = new JFrame("Example");
        f.setSize(400, 500);
        t1 = new JTextField();
        t2 = new JTextField();
        t3 = new JTextField();
        t3.setEditable(false);
        plus = new JButton("+");
        minus = new JButton("-");
        f.add(t1);
        f.add(t2);
        f.add(t3);
        f.add(plus);
        f.add(minus);
        f.setVisible(true);
        f.setLayout(new FlowLayout( ));
        plus.addActionListener(this);
        minus.addActionListener(this);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        int a =  Integer.parseInt(t1.getText());
        int b =  Integer.parseInt(t2.getText());
        int result;
        if (e.getSource() == plus) {
            result = a + b;
            t3.setText(String.valueOf(result));
        } else {
            result = a - b;
            t3.setText(String.valueOf(result));
        }
    }
    public static void main(String[] args) {
        new Example();
    }
}
