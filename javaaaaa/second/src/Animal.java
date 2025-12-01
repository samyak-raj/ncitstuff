interface Animal {
    void sound();
}

class Dog implements Animal {
    @Override
    public void sound() {
        System.out.println("Bark");
    }
}
class Cat implements Animal {
    @Override
    public void sound() {
        System.out.println("Meow");
    }
}

class TestAnimal {
    static public void main(String[] args) {
        Dog dog = new Dog();
        dog.sound();

        Cat cat = new Cat();
        cat.sound();
    }
}