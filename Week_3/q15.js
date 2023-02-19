var readlineSync = require('readline-sync')

const getArray = function (a) {
    let limit = readlineSync.question("Enter the size of arrays ")
    
    console.log("Enter the values of Array");
    for(let i = 0; i < limit; i++) {
        a[i] = Number(readlineSync.question())
    }
}

const displayArray = function (a) {
    console.log(a);
}

const main = function () {
    let a = []
    getArray(a)
    displayArray(a)
}

main()