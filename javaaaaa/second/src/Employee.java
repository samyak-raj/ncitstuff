class Employee {
    String id, name;
    long monthlySalary;

    public Employee(String id, String name, long monthlySalary) {
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

    public Teacher(String id, String name, long monthlySalary, int numberOfClasses) {
        super(id, name, monthlySalary);
        this.numberOfClasses = numberOfClasses;
    }

    @Override
    public long getYearlySalary() {
        return super.getYearlySalary() * 12 + numberOfClasses * 100;
    }

    @Override
    public String getDetails() {
        return super.getDetails() + " " + numberOfClasses;
    }
}

class TestEmployee {
    public static void main(String[] args) {
        Employee employee = new Employee("12","ram", 56000);
        System.out.println(employee.getDetails());

        Teacher teacher = new Teacher("67", "Sam", 67000, 3);
        System.out.println(teacher.getDetails());
    }
}





