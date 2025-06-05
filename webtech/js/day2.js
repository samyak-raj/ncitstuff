//Data types
//number
let a = 10;
let b = 12.3;
console.log(typeof(a))
console.log(typeof(b))
//string
let c = 'A';
console.log(typeof(c))
//boolean
let d = true;
let e = false;
console.log(typeof(d))
console.log(typeof(e))
//null
let f = null;
console.log(f);
//undefined
let g = undefined;
console.log(g);
//Array => object
let h = [1, 2, "SRS", 23.3, true]
console.log(typeof(h));
//Object
const i = {
    "Name": "SRS",
    "Age": 18,
    "Gender": "Male"
}
console.log(typeof(i))
console.log(i)

//operators
//Arithmetic ( +, -, *, /, %)
let x = 20, y = 10;
document.writeln("Sum= ", x + y, "<br>");
document.writeln("Difference= ", x - y, "<br>");
document.writeln("Multiply= ", x * y, "<br>");
document.writeln("Division= ", x / y, "<br>");
document.writeln("Modulo= ", x % y, "<br>");
document.writeln("Exponent= ", x ** y, "<br>");
