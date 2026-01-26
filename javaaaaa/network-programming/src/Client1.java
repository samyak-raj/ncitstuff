import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Client1 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        Socket s = new Socket("localhost", 4000);
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        while(true) {
            System.out.println("Enter a word: ");
            String word = scan.next();
            dos.writeUTF(word);
            String ans = dis.readUTF();
            System.out.println(ans);
            if (ans.equalsIgnoreCase("bye")) {
                break;
            }
        }
        dos.close();
        dis.close();
        s.close();
        scan.close();
    }
}
