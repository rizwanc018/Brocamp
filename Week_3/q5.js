var readlineSync = require('readline-sync');

let mark = readlineSync.question("Enter your mark : ")
let grade = ""

if (mark >= 90) {
    grade = "A"
} else if (mark >= 80 && mark < 90) {
    grade = "B"
} else if (mark >= 70 && mark < 80) {
    grade = "C"
} else if (mark >= 60 && mark < 70) {
    grade = "D"
} else if (mark >= 50 && mark < 60) {
    grade = "E"
} else if (mark < 50) {
    console.log("Your are failed")
}

console.log("Your grade is : " +  grade);