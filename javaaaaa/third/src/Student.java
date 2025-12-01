class InvalidSemException extends Exception {
    public InvalidSemException(String msg) {
        super(msg);
    }
}

public class Student {
    String name;
    int sem;
    Student(String name, int sem) throws InvalidSemException {
        if (sem > 8 || sem < 1) {
            throw new InvalidSemException("Invalid semester");
        } else {
            this.name = name;
            this.sem = sem;
        }
    }
}

class Test {
    public static void main(String[] args) {
        try {
            Student s = new Student("SRS", 9);
        } catch(InvalidSemException e){
            System.out.println(e.getMessage());
        }
    }
}
