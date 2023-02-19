var readlineSync = require('readline-sync')

class Operations {
    addition(a, b) {
        console.log("Result is: " + (a + b) + "\n");
    }
    subtraction(a, b) {
        console.log("Result is: " + (a - b) + "\n");
    }
    multiplication(a, b) {
        console.log("Result is: " + (a * b) + "\n");
    }
    division(a, b) {
        console.log("Result is: " + (a / b) + "\n");
    }
}

const op = new Operations();
let num = readlineSync.question("Enter \n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n")
let a = readlineSync.question("Enter first number ")
let b = readlineSync.question("Enter second number ")


if (num == 1) {
    op.addition(a, b);
} else if (num == 2) {
    op.subtraction(a, b);
} else if (num == 3) {
    op.multiplication(a, b);
} else if (num == 4) {
    op.division(a, b);
}