var readlineSync = require('readline-sync')

let limit = readlineSync.question("Enter array limit ")
let arr = [];

console.log("Enter the numbers");
for (let i = 0; i < limit; i++) {
    arr[i] = readlineSync.questionInt()
}

function myFilter(myArray, callback) {
    let sum = 0;
    if (callback(myArray)) {
        for (let i = 0; i < myArray.length; i++) {
            sum += myArray[i];
        }
    }
    return sum;
}

function isSumEven(num) {
    let sum = num.reduce((a, b) => a + b, 0);
    return sum % 2 !== 0;
}

let filteredSum = myFilter(arr, isSumEven);

console.log(filteredSum); 