console.log("Using 'for' loop:");
for (let i = 1; i <= 5; i++) {
    console.log(`Iteration ${i}`);
}

console.log("\nUsing 'while' loop:");
let j = 1;
while (j <= 5) {
    console.log(`Iteration ${j}`);
    j++;
}

console.log("\nUsing 'do...while' loop:");
let k = 1;
do {
    console.log(`Iteration ${k}`);
    k++;
} while (k <= 5);

console.log("\nUsing 'for...of' loop:");
const array = ['a', 'b', 'c', 'd', 'e'];
for (const element of array) {
    console.log(`Element: ${element}`);
}

