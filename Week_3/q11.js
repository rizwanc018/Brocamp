var readlineSync = require('readline-sync')

let limit = readlineSync.question("Enter the size of arrays ")
let a = []

console.log("Enter the values of Array");
for(let i = 0; i < limit; i++) {
    a[i] = Number(readlineSync.question())
}

let even = a.filter(x => x%2 == 0)
console.log(`Number of even numbers in the given array is ${even.length}`);