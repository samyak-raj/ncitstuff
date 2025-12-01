public class Employee {
    String name, id;
    long monthlySalary;

    public Employee(String id,String name, long monthlySalary) {
        this.id = id;
        this.name = name;
        this.monthlySalary = monthlySalary;
    }

    public long getYearlySalary() {
        return monthlySalary * 12;
    }

    public String getDetails() {
        return name + " " + id + " " + monthlySalary + " " + getYearlySalary();
    }
}

class Teacher extends Employee {
    int numberOfClasses;

    public Teacher (String id, String name, long monthlySalary, int numberOfClasses) {
        super(id, name, monthlySalary);
        this.numberOfClasses = numberOfClasses;
    }

    @Override
    public long getYearlySalary() {
        return super.getYearlySalary() + numberOfClasses * 1000;
    }

    @Override
    public String getDetails() {
        return super.getDetails() + " " + numberOfClasses;
    }

}
class Test1 {
    public static void main(String[] args) {
        Teacher t = new Teacher("1", "srs", 67000, 6);
        System.out.println(t.getDetails());

        Employee e = new Employee("2", "abc", 25000);
        System.out.println(e.getDetails());
    }
}
