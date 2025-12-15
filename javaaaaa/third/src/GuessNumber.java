import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class GuessNumber extends JFrame implements ActionListener{
    int target, attempts;
    JTextField t;
    JButton b;
    public GuessNumber(){
        setSize(300,150);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        target = (int) (Math.random()*10)+1;
        attempts = 0;

        t = new JTextField();
        t.setColumns(10);
        add(t);
        b = new JButton("Guess");
        add(b);
        b.addActionListener(this);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        int guess = Integer.parseInt(t.getText());
        attempts++;
        if(guess == target){
            JOptionPane.showMessageDialog(this, "Correct! Attempts: " + attempts);
            resetGame();

        } else {
            JOptionPane.showMessageDialog(this, "Wrong! Attempts: " + attempts);
        }
    }

    private void resetGame() {
        target = (int) (Math.random()*10)+1;
        attempts = 0;
        t.setText("");
    }
    public static void main(String[] args) {
        new GuessNumber();
    }
}
