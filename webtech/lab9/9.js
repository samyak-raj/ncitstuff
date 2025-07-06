// Arithmetic Operators
let a = 10, b = 5;
console.log("Arithmetic Operators:");
console.log("Addition:", a + b); // 15
console.log("Subtraction:", a - b); // 5
console.log("Multiplication:", a * b); // 50
console.log("Division:", a / b); // 2
console.log("Modulus:", a % b); // 0
console.log("Exponentiation:", a ** b); // 100000

// Assignment Operators
console.log("\nAssignment Operators:");
let x = 10;
x += 5; // x = x + 5
console.log("x after +=:", x); // 15
x -= 3; // x = x - 3
console.log("x after -=:", x); // 12
x *= 2; // x = x * 2
console.log("x after *=:", x); // 24
x /= 4; // x = x / 4
console.log("x after /=:", x); // 6
x %= 5; // x = x % 5
console.log("x after %=:", x); // 1

// Comparison Operators
console.log("\nComparison Operators:");
console.log("Equal:", a == b); // false
console.log("Strict Equal:", a === b); // false
console.log("Not Equal:", a != b); // true
console.log("Strict Not Equal:", a !== b); // true
console.log("Greater Than:", a > b); // true
console.log("Less Than:", a < b); // false
console.log("Greater Than or Equal:", a >= b); // true
console.log("Less Than or Equal:", a <= b); // false

// Logical Operators
console.log("\nLogical Operators:");
console.log("AND:", a > 5 && b < 10); // true
console.log("OR:", a > 15 || b < 10); // true
console.log("NOT:", !(a > 5)); // false

// Bitwise Operators
console.log("\nBitwise Operators:");
console.log("AND:", a & b); // 0
console.log("OR:", a | b); // 15
console.log("XOR:", a ^ b); // 15
console.log("Left Shift:", a << 1); // 20
console.log("Right Shift:", a >> 1); // 5

// Ternary Operator
console.log("\nTernary Operator:");
let result = a > b ? "a is greater" : "b is greater";
console.log("Result:", result); // "a is greater"

// Type Operators
console.log("\nType Operators:");
console.log("Type of a:", typeof a); // "number"

// String Operators
console.log("\nString Operators:");
let str1 = "Hello", str2 = "World";
console.log("Concatenation:", str1 + " " + str2); // "Hello World"

// Unary Operators
console.log("\nUnary Operators:");
let c = 5;
console.log("Unary Plus:", +c); // 5
console.log("Unary Minus:", -c); // -5
console.log("Increment:", ++c); // 6
console.log("Decrement:", --c); // 5
