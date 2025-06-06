// Rounding a number
let num = 4.6;
let rounded = Math.round(num);
console.log(rounded); // Output: 5
document.writeln("Rounded value: " + rounded + "<br>");

// Getting the floor value of a number
let floored = Math.floor(num);
console.log(floored); // Output: 4
document.writeln("Floor value: " + floored + "<br>");

// Getting the ceiling value of a number
let ceiled = Math.ceil(num);
console.log(ceiled); // Output: 5
document.writeln("Ceiling value: " + ceiled + "<br>");

// Generating a random number between 0 and 1
let randomNumber = Math.random();
console.log(randomNumber); // Output: Random number between 0 and 1
document.writeln("Random number: " + randomNumber + "<br>");

// Finding the maximum number in an array
let numbers = [1, 5, 10, 20];
let maxNumber = Math.max(...numbers);
console.log(maxNumber); // Output: 20
document.writeln("Maximum number: " + maxNumber + "<br>");

// Finding the minimum number in an array
let minNumber = Math.min(...numbers);
console.log(minNumber); // Output: 1
document.writeln("Minimum number: " + minNumber + "<br>");