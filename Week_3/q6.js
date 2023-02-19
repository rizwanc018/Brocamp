var readlineSync = require('readline-sync');

let num = readlineSync.question("Enter a number : ")
let day

switch (Number(num)) {
    case 0:
        day = "Sunday";
        break;
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
    default:
        day = "Invalid number";
}

console.log("Day is " + day);