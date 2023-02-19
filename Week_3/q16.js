var readlineSync = require('readline-sync')

let num = readlineSync.question("Enter a number ")

const isPrime = (num) => {
    let l = Math.sqrt(num)
    for (let i = 2; i <= l; i++) {
        if(num % i == 0) {
            console.log("Entered number is not a Prime number")
            return
        }
    }

    if(num > 1) {
        console.log("Entered number is a Prime number")
    }
}

isPrime(num)