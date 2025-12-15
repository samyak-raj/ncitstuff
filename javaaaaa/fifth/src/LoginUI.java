import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class LoginUI extends WindowAdapter implements ActionListener {
    final String username = "ncit";
    final String password = "admin123";
    JTextField user;
    JPasswordField pass;
    JFrame f = new JFrame();
    JFrame d = new JFrame();

    public void login() {
        f.getContentPane().removeAll();
        f.setSize(500, 500);
        f.setLayout(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(10, 10, 10, 10);
        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        f.add(new JLabel("Username: "), gbc);
        gbc.gridx = 1;
        user = new JTextField(15);
        f.add(user, gbc);
        gbc.gridx = 0;
        gbc.gridy = 1;
        f.add(new JLabel("Password: "), gbc);
        gbc.gridx = 1;
        pass = new JPasswordField(15);
        f.add(pass, gbc);
        gbc.gridx = 0;
        gbc.gridy = 2;
        gbc.gridwidth = 2;
        gbc.gridheight = 2;
        JButton loginButton = new JButton("Login");
        f.add(loginButton, gbc);
        loginButton.addActionListener(this);
        user.addActionListener(this);
        pass.addActionListener(this);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public LoginUI() {
        d.addWindowListener(this);
    }

    public void dashboard() {
        d.getContentPane().removeAll();
        d.setSize(500, 500);
        d.setLayout(new FlowLayout());
        d.add(new JLabel("Dashboard"));
        d.setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        d.setVisible(true);
    }

    public void windowClosing(WindowEvent e) {
        int choice = JOptionPane.showConfirmDialog(d, "Do you want to exit?", "Confirm Exit",JOptionPane.YES_NO_OPTION);
        if (choice == JOptionPane.YES_OPTION){
            d.dispose();
            login();
        }
    }

    public void actionPerformed(ActionEvent e) {
        String enteredUsername = user.getText().trim();
        String enteredPassword = String.valueOf(pass.getPassword()).trim();

        if (enteredUsername.equals(username) && enteredPassword.equals(password)) {
            f.dispose();
            dashboard();
        } else {
            JOptionPane.showMessageDialog(f, "Invalid username or password!", "Login Failed", JOptionPane.ERROR_MESSAGE);
        }
    }


    public static void main(String[] args) {
        LoginUI obj = new LoginUI();
        obj.login();
    }

}
