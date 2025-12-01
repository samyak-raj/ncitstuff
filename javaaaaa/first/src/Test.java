//import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Student student = new Student();

//        Scanner input = new Scanner(System.in);
//        System.out.println("enter a name: ");
//        student.setName(input.nextLine());
//
//        System.out.println("enter a roll: ");
//        student.setRoll(input.nextInt());

        student.setName("Samyak");
        student.setRoll(67);
        System.out.println("The name is: " + student.getName());
        System.out.println("The roll number is: " + student.getRoll());
    }
}
