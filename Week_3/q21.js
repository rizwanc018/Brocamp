var readlineSync = require('readline-sync')

let a = [], nA = []
let l = readlineSync.question("Enter array limit : ");

console.log("Enter the values of array ");
for (let i = 0; i < l; i++) {
    a[i] = readlineSync.question()
}

for (i = 0; i < l - 1; i++) {
    nA[i] = a[i] * a[i + 1];
}

console.log(nA);