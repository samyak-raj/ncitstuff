// Using 'typeof' operator
let num = 42;
let str = "Hello, World!";
let bool = true;
let obj = { key: "value" };
let arr = [1, 2, 3];
let func = function() { return "I am a function"; };
let undef;
let nul = null;

console.log("Using 'typeof' operator:");
console.log("Type of num:", typeof num); // "number"
console.log("Type of str:", typeof str); // "string"
console.log("Type of bool:", typeof bool); // "boolean"
console.log("Type of obj:", typeof obj); // "object"
console.log("Type of arr:", typeof arr); // "object"
console.log("Type of func:", typeof func); // "function"
console.log("Type of undef:", typeof undef); // "undefined"
console.log("Type of nul:", typeof nul); // "object" (special case for null)
