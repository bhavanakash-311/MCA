let arr = [12,4,5,6,8,9,34,56];
console.log(arr);


//sum of all the elements of array
let x = arr.reduce(function(a,b){
    return a+b;
})

console.log(x);