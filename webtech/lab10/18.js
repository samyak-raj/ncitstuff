const str = "  Hello, JavaScript!  ";

// String length
console.log(`Length: ${str.length}`);

// String slice()
console.log(`Slice: ${str.slice(2, 8)}`);

// String substring()
console.log(`Substring: ${str.substring(2, 8)}`);

// String substr()
console.log(`Substr: ${str.substr(2, 6)}`);

// String replace()
console.log(`Replace: ${str.replace("JavaScript", "World")}`);

// String replaceAll()
const strReplaceAll = "Hello, JavaScript! JavaScript is fun!";
console.log(`Replace All: ${strReplaceAll.replaceAll("JavaScript", "World")}`);

// String toUpperCase()
console.log(`Uppercase: ${str.toUpperCase()}`);

// String toLowerCase()
console.log(`Lowercase: ${str.toLowerCase()}`);

// String concat()
const str2 = "Let's learn!";
console.log(`Concat: ${str.concat(" ", str2)}`);

// String trim()
console.log(`Trim: ${str.trim()}`);

// String trimStart()
console.log(`Trim Start: ${str.trimStart()}`);

// String trimEnd()
console.log(`Trim End: ${str.trimEnd()}`);

// String padStart()
console.log(`Pad Start: ${str.trim().padStart(20, "*")}`);

// String padEnd()
console.log(`Pad End: ${str.trim().padEnd(20, "*")}`);

// String charAt()
console.log(`Char At: ${str.charAt(7)}`);

// String charCodeAt()
console.log(`Char Code At: ${str.charCodeAt(7)}`);

// String split()
console.log(`Split: ${str.split(",")}`);