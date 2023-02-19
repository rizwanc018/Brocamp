var readlineSync = require('readline-sync')

let limit = readlineSync.question("Enter the size of arrays ")
let a = []
let b = []
let tmp

console.log("Enter the values of Array 1");
for(let i = 0; i < limit; i++) {
    a[i] = Number(readlineSync.question())
}

console.log("Enter the values of Array 2");
for(let i = 0; i < limit; i++) {
    b[i] = Number(readlineSync.question())
}

tmp = a
a = b
b = tmp

console.log("Arrays after swapping: ");
console.log("Array1 " + a)
console.log("Array2 " + b)