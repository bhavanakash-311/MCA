//filter out evev elements
let arr = [1,4,5,7,13,45,90,12,11];
console.log(arr);

function fun(ele){
    if(ele%2!=0) return true;
    else return  false;
}

let brr = arr.filter(fun);
console.log(brr);

let arr2 = arr.filter(function(ele){
    if(ele%2 ==0) return true;
    else return false;
})
console.log(arr2);

let arr3 = arr.filter(ele => (ele<5))
console.log(arr3);