const people = [
    { name: "Alice", age: 25, profession: "Engineer" },
    { name: "Bob", age: 30, profession: "Designer" },
    { name: "Charlie", age: 35, profession: "Teacher" }
];

console.log("Array of objects:");
people.forEach(person => {
    console.log(`Name: ${person.name}, Age: ${person.age}, Profession: ${person.profession}`);
});