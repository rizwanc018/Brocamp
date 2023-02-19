var readlineSync = require('readline-sync')

let limit = readlineSync.question("Enter the size of arrays ")
let a = []

console.log("Enter the values of Array");
for(let i = 0; i < limit; i++) {
    a[i] = Number(readlineSync.question())
}

a.sort((a,b) => b - a)
console.log(`sorted array is \n ${a}`);