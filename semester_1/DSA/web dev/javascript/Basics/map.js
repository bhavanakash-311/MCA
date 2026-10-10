//map

let arr = [12,-45,6,7,-67];
console.log(arr);
// let arr2 = [];
// for(let ele of arr){
//     arr2.push(Math.abs(ele));
// }


function twice(ele){
    return ele*2;
}

//callback function
let arr2 = arr.map(twice);
let arr3 = arr.map(function(ele){
    return ele*ele;
})

let arr4 = arr.map(ele => ele+10);
arr = arr.map(ele=> Math.abs(ele));
console.log(arr2);
console.log(arr3);
console.log(arr4);
console.log(arr)

