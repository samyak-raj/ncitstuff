// Using 'var'
function varExample() {
    var x = 10; // Declared with 'var'
    if (true) {
        var x = 20; // 'var' is function-scoped, so this overwrites the outer x
        console.log("Inside if block (var):", x); // Output: 20
    }
    console.log("Outside if block (var):", x); // Output: 20
}

// Using 'let'
function letExample() {
    let y = 10; // Declared with 'let'
    if (true) {
        let y = 20; // 'let' is block-scoped, so this creates a new variable inside the block
        console.log("Inside if block (let):", y); // Output: 20
    }
    console.log("Outside if block (let):", y); // Output: 10
}

// Using 'const'
function constExample() {
    const z = 10; // Declared with 'const'
    console.log("Initial value (const):", z); // Output: 10
    // z = 20; // Error: Assignment to constant variable
}

// Without declaration
function undeclaredExample() {
    undeclared = 10; // No declaration keyword
    console.log("Undeclared variable:", undeclared); // Output: 10
    if (true) {
        undeclared = 20; // Modifies the global variable
        console.log("Inside if block (undeclared):", undeclared); // Output: 20
    }
    console.log("Outside if block (undeclared):", undeclared); // Output: 20
}

// Call the functions
varExample();
letExample();
constExample();
undeclaredExample();

// Differences:
// 1. 'var' is function-scoped and can be re-declared within the same scope.
// 2. 'let' is block-scoped and cannot be re-declared within the same scope.
// 3. 'const' is block-scoped, cannot be re-declared, and must be initialized.
// 4. Undeclared variables are implicitly global and can lead to unexpected behavior.