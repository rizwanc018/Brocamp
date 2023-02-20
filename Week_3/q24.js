var readlineSync = require('readline-sync')


class Area {
  circle(radius) {
    return Math.PI * Math.pow(radius, 2)
  }

  square(side) {
    return Math.pow(side, 2)
  }

  rectangle(length, width) {
    return length * width
  }

  triangle(base, height) {
    return 0.5 * base * height
  }
}

class MyClass extends Area {
  main() {
    console.log("Choose a shape to calculate its area:")
    console.log("1. Circle")
    console.log("2. Square")
    console.log("3. Rectangle")
    console.log("4. Triangle")

    const shape = readlineSync.question("Enter your choice (1-4):")

    switch (Number(shape)) {
      case 1:
        const radius = readlineSync.question("Enter the radius of the circle:")
        console.log(`The area of the circle is ${circle(radius)}`)
        break

      case 2:
        const side = readlineSync.question("Enter the length of the square's side:")
        console.log(`The area of the square is ${square(side)}`)
        break

      case 3:
        const length = readlineSync.question("Enter the length of the rectangle:")
        const width = readlineSync.question("Enter the width of the rectangle:")
        console.log(`The area of the rectangle is ${rectangle(length, width)}`)
        break

      case 4:
        const base = readlineSync.question("Enter the base of the triangle:")
        const height = readlineSync.question("Enter the height of the triangle:")
        console.log(`The area of the triangle is ${triangle(base, height)}`)
        break

      default:
        console.log("Invalid choice")
    }
  }
}

const myClass = new MyClass()
myClass.main()