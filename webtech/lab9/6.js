// Primitive example
let primitiveValue = 42; // Primitive type (number)
let anotherPrimitiveValue = primitiveValue; // Copy the value
console.log("Primitive before change:", primitiveValue, anotherPrimitiveValue);

anotherPrimitiveValue = 100; // Modify the copied value
console.log("Primitive after change:", primitiveValue, anotherPrimitiveValue);
// Output: The original value remains unchanged because primitives are immutable and passed by value.

// Object example
let objectValue = { key: "value" }; // Object type
let anotherObjectValue = objectValue; // Copy the reference
console.log("Object before change:", objectValue, anotherObjectValue);

anotherObjectValue.key = "newValue"; // Modify the object through the reference
console.log("Object after change:", objectValue, anotherObjectValue);
// Output: The original object is modified because objects are mutable and passed by reference.