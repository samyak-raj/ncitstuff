console.log("Type Conversion Examples:");

// 1. String to Number
let str = "123";
let num = Number(str);
console.log(`String to Number: "${str}" ->`, num); // Output: 123

// 2. Number to String
let number = 456;
let string = String(number);
console.log(`Number to String: ${number} ->`, `"${string}"`); // Output: "456"

// 3. Boolean to Number
let boolTrue = true;
let boolFalse = false;
console.log(`Boolean to Number: true ->`, Number(boolTrue)); // Output: 1
console.log(`Boolean to Number: false ->`, Number(boolFalse)); // Output: 0

// 4. Number to Boolean
let zero = 0;
let nonZero = 123;
console.log(`Number to Boolean: 0 ->`, Boolean(zero)); // Output: false
console.log(`Number to Boolean: 123 ->`, Boolean(nonZero)); // Output: true

// 5. String to Boolean
let emptyString = "";
let nonEmptyString = "Hello";
console.log(`String to Boolean: "" ->`, Boolean(emptyString)); // Output: false
console.log(`String to Boolean: "Hello" ->`, Boolean(nonEmptyString)); // Output: true

// 6. Boolean to String
let bool = true;
console.log(`Boolean to String: true ->`, String(bool)); // Output: "true"

// 7. Implicit Conversion (Type Coercion)
console.log(`Implicit Conversion: "5" + 2 ->`, "5" + 2); // Output: "52" (String concatenation)
console.log(`Implicit Conversion: "5" - 2 ->`, "5" - 2); // Output: 3 (String converted to Number)

// 8. Object to String
let obj = { key: "value" };
console.log(`Object to String: { key: "value" } ->`, String(obj)); // Output: "[object Object]"

// 9. Object to Number
console.log(`Object to Number: { key: "value" } ->`, Number(obj)); // Output: NaN

// 10. Date to String
let date = new Date();
console.log(`Date to String: new Date() ->`, String(date)); // Output: Date string

// 11. Date to Number
console.log(`Date to Number: new Date() ->`, Number(date)); // Output: Timestamp (milliseconds since 1970)

// 12. Array to String
let arr = [1, 2, 3];
console.log(`Array to String: [1, 2, 3] ->`, String(arr)); // Output: "1,2,3"

// 13. Array to Number
console.log(`Array to Number: [1, 2, 3] ->`, Number(arr)); // Output: NaN