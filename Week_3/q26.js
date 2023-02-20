var readlineSync = require('readline-sync')

let my_string = readlineSync.question("Enter the string ")

try {
    console.log(`Reversed string is : ${my_string.split("").reverse().join("")}`);
} catch (error) {
    console.log(`Error : ${error.message}`);
} finally {
    console.log(`Type of my_string is : ${typeof my_string}`);
}