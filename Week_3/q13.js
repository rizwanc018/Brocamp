var readlineSync = require('readline-sync')

const s = readlineSync.question("Enter the string \n")
s === s.split("").reverse().join("") ? console.log("Entered string is a palindrom") :
    console.log("Entered string is not a palindrom");