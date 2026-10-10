let arr = [1,9,2,7];
console.log(arr);

let arr2 = arr.sort();
console.log(arr2);

//custom sort
//in decreasing order
let arr3 = arr.sort(function(a,b){
    return b-a;
})

console.log(arr3);

let brr = [1,-2,-9,43,56]; //doesn't sort properly for the negative numbers
let brr2 = brr.sort();
console.log(brr2);  //[ -2, -9, 1, 43, 56 ]

//to do it correctly
let brr3 = brr.sort((a,b) => a-b);
console.log(brr3);

// a-b ascending order
// b-a descending order

//sorting based on absolute values

let brr4 = brr.sort((a,b) => Math.abs(a)- Math.abs(b));
console.log(brr4);