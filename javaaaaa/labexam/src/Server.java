//tcp app client sends a string and server return number of character in the string
import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(5000);
        System.out.println("Server running on port 5000");
        Socket s = ss.accept();
        System.out.println("client connected");
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        String msg = dis.readUTF();
        int length = msg.length();
        dos.writeInt(length);
        dos.close();
        dis.close();
        s.close();
        ss.close();
    }
}
