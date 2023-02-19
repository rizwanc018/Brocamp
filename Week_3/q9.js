let p = ""
for(let i = 1; i <= 5; i++) {
    for(let j = 1; j <= i; j ++) {
        p += j
    }
    console.log(p)
    p = ""
}