import java.io.*;
import java.net.*;
import java.util.Scanner;

public class Client {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a word");
        String msg = scan.nextLine();
        Socket s = new Socket("localhost", 5000);
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        dos.writeUTF(msg);
        int length = dis.readInt();
        System.out.println("Length of " + msg + " is: " + length);
        dos.close();
        dis.close();
        s.close();
        scan.close();
    }
}
