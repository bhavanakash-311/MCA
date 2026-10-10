// console.log(Math.abs(-2.5)); //absolute value\
// console.log(Math.PI);

// console.log(Math.max(9,3.8));
// console.log(Math.min(32.4,67));
// console.log(Math.max(9,3,5,6,7,8,90));

// console.log(Math.pow(2.8,7));
// console.log(Math.sqrt(7.732937));
// console.log(Math.cbrt(512));

// console.log(Math.ceil(8.9));
// console.log(Math.floor(8.9)); //greatest integer number
// console.log(Math.floor(-3.7));

//math.random() generate a random real number between 0 and 1 (excluded)
// console.log(Math.random());


//write a code to generate the random number between 0 and 9


// for(let i = 0;i<10;i++){
//     let number = Math.floor(Math.random()*11);
//     console.log(number);
// }


//range -10 to 10
for(let i = 0;i<10;i++){
    let number = Math.floor((Math.random()*21)-10);
    console.log(number);
}
if(Math.random()<0.5){
    console.log("hello");
}else console.log("bye");