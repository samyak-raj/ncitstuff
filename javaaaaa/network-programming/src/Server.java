import java.net.*;
import java.io.*;

public class Server {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(4000);
        System.out.println("Server is listening on port 4000");
        Socket s = ss.accept();
        System.out.println("Client connected");
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        int num = dis.readInt();
        String ans = (num % 2 == 0) ? "even" : "odd";
        dos.writeUTF(ans);
        dos.close();
        dis.close();
        s.close();
        ss.close();
    }
}
