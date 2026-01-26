import java.net.*;
import java.io.*;

public class Server1 {
    public static void main(String[] args) throws Exception {
        ServerSocket ss = new ServerSocket(4000);
        System.out.println("Server running on port 4000.");
        Socket s = ss.accept();
        System.out.println("Client accepted");
        DataInputStream dis = new DataInputStream(s.getInputStream());
        DataOutputStream dos = new DataOutputStream(s.getOutputStream());
        while(true){
            String word = dis.readUTF();
            if (word.equalsIgnoreCase("bye")) {
                dos.writeUTF("Bye");
                break;
            }
            String ans = isPalindrome(word) ? "Palindrome" : "Not palindrome";
            dos.writeUTF(ans);
        }

        dis.close();
        dos.close();
        s.close();
        ss.close();
    }
    private static boolean isPalindrome(String word) {
        String rev = "";
        for (int i = word.length() - 1; i>=0; i--) {
            rev += word.charAt(i);
        }
        if(rev.equalsIgnoreCase(word)) {
            return true;
        }
        return false;
    }
}
