class Student {
    String name, roll;

    public Student(String name, String roll) {
        this.name = name;
        this.roll = roll;
    }

    public String toString(){
        return "Name: " + this.name + ", Roll: " + this.roll;
    }

    public static void main(String[] args) {
        Student obj = new Student("SRS", "19");
        System.out.println(obj.toString());
    }
}
