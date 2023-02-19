var readlineSync = require('readline-sync')

let limit = readlineSync.question("Enter a limit ")
const a =[]
let odd = []
let sum

console.log("Enter numbers");
for(let i = 0; i < limit; i++) {
    a[i] = Number(readlineSync.question())
}

odd = a.filter(x => x%2 != 0)
sum = odd.reduce((total, num) => total + num)
console.log(sum);