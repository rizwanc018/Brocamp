var readlineSync = require('readline-sync')

class TwoDArray {
    constructor(rows, columns) {
        this.rows = rows;
        this.columns = columns;
        this.array = [];
    }

    getArray() {
        for (let i = 0; i < this.rows; i++) {
            this.array[i] = []
            for (let j = 0; j < this.columns; j++) {
                this.array[i][j] = readlineSync.question(`Enter the value for row ${i + 1} column ${j + 1} : `);
            }
        }
    }

    displayArray() {
        console.log(this.array);
    }
}

function main() {
    let r = readlineSync.question("Enter the number of rows:");
    let c = readlineSync.question("Enter the number of columns:");
    let a = new TwoDArray(r, c);
    a.getArray();
    a.displayArray();
}

main();
