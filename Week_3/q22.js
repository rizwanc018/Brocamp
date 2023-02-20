var readlineSync = require('readline-sync')


let a = []
let b = []
let sum = []
let limit

const main = () => {
    getArray()
    addArray()
    displayArray()
}


const getArray = () => {
    limit = readlineSync.question("Enter the limit : ");
    console.log("Enter numbers");
    for (let i = 0; i < limit; i++) {
        a[i] = []
        for (let j = 0; j < limit; j++) {
            a[i][j] = readlineSync.question()
        }
    }

    console.log("Enter numbers");
    for (let i = 0; i < limit; i++) {
        b[i] = []
        for (let j = 0; j < limit; j++) {
            b[i][j] = readlineSync.question()
        }
    }
}


const addArray = () => {
    for (let i = 0; i < limit; i++) {
        sum[i] = []
        for (let j = 0; j < limit; j++) {
            sum[i][j] = (Number(a[i][j]) + Number(b[i][j]))
        }
    }
}

const displayArray = () => {
    console.log(sum);
}

main()