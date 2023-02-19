var readlineSync = require('readline-sync')

console.log("Enter marks scored by student\n");
let w = readlineSync.question("Written test = ");
let l = readlineSync.question("Lab exams = ");
let a = readlineSync.question("Assignments = ");
let result = (w * 70) / 100 + ((l * 20) / 100) + (a * 10) / 100;
console.log("Grade of student is " + result);
