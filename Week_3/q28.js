function Car(name, mileage, max_speed) {
    this.name = name;
    this.mileage = mileage;
    this.max_speed = max_speed;
}

let myCar = new Car("Toyota", 50000, 120);
console.log(myCar.name);