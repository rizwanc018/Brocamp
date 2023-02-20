var readlineSync = require('readline-sync')

let userHeight = readlineSync.question("Enter your height ")

try {
    if (userHeight.trim() == "") throw "empty";
    if (isNaN(userHeight)) throw "notANumberError";
    userHeight = Number(userHeight);
    if (userHeight < 200) throw "HugeHeightError";
    if (userHeight > 40) throw "TinyHeightError";
}
catch (error) {
    console.log(error);
}