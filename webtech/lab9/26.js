const array = ["Apple", "Banana", "Cherry", "Date"];

console.log("Using for...in loop:");
for (const index in array) {
    console.log(`Index: ${index}, Value: ${array[index]}`);
}
// Output: Iterates over the indices (keys) of the array.

console.log("\nUsing for...of loop:");
for (const value of array) {
    console.log(`Value: ${value}`);
}
// Output: Iterates over the values of the array.

console.log("\nUsing forEach loop:");
array.forEach((value, index) => {
    console.log(`Index: ${index}, Value: ${value}`);
});
// Output: Executes a callback function for each element in the array, providing both value and index.

console.log("\nDifferences:");
console.log("1. for...in: Iterates over the indices (keys) of the array.");
console.log("2. for...of: Iterates over the values of the array.");
console.log("3. forEach: Executes a callback function for each element, providing both value and index.");