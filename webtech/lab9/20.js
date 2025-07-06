let date = new Date();

// Using set methods to modify the date
date.setFullYear(2025); 
console.log("After setFullYear(2025):", date);

date.setMonth(0);  
console.log("After setMonth(11):", date);

date.setDate(25);  
console.log("After setDate(25):", date);

date.setHours(15);  
console.log("After setHours(15):", date);

date.setMinutes(30); 
console.log("After setMinutes(30):", date);

date.setSeconds(45); 
console.log("After setSeconds(45):", date);

date.setMilliseconds(500); 
console.log("After setMilliseconds(500):", date);

date.setTime(Date.now());  
console.log("After setTime(Date.now()):", date);