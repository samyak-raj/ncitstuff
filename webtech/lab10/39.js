class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;

        this.greet = function () {
            return `Hello, my name is ${this.name} and I am ${this.age} years old.`;
        };
    }
}

const person1 = new Person("Alice", 25);
const person2 = new Person("Bob", 30);

console.log(person1.greet());
console.log(person2.greet()); 