let p = ""
let cnt = 0
for (let i = 1; i < 5; i++) {
    for (let j = 1; j <= i; j++) {
        cnt++
        p = p + " " + cnt
    }
    console.log(p)
    p = ""
}