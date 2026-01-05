import java.awt.*;
import javax.swing.*;

public class GridBagLayoutDemo {
    JFrame f;
    JButton btn1, btn2, btn3, btn4, btn5;

    public GridBagLayoutDemo() {
        f = new JFrame();
        f.setLayout(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        btn1 = new JButton("Btn1");
        btn2 = new JButton("Btn2");
        btn3 = new JButton("Btn3");
        btn4 = new JButton("Btn4");
        btn5 = new JButton("Btn5");
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        f.add(btn1, gbc);

        gbc.gridx = 1;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        f.add(btn2, gbc);

        gbc.gridx = 2;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        f.add(btn3, gbc);

        gbc.ipady = 40;
        gbc.gridwidth = 3;
        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        f.add(btn4, gbc);

        gbc.ipady = 0;
        gbc.gridx = 1;
        gbc.gridy = 2;
        gbc.gridwidth = 2;
        gbc.insets = new Insets(10,0,0,0);
        gbc.weighty = 1.0;
        gbc.anchor = GridBagConstraints.PAGE_END;
        f.add(btn5, gbc);

        f.pack();
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new GridBagLayoutDemo();
    }
}
