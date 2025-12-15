import java.util.*;

public class Example1 {
    public static void main(String[] args) {
        try {
            Scanner input = new Scanner(System.in);
            System.out.println("Enter 1st number: ");
            int a = input.nextInt();

            System.out.println("Enter 2nd number: ");
            int b = input.nextInt();

            int ans = a/b;
            System.out.println("Answer: " + ans);
        } catch(ArithmeticException e){
            System.out.println(e.getMessage());
        } catch(InputMismatchException e){
            System.out.println("Enter only integers");
        } finally {
            System.out.println("End");
        }
    }
}
