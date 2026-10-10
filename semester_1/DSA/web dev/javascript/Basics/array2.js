// const arr = [12]
// arr[0] = "bhavana";  //you can modify the const array 
// console.log(arr);

// //but can't change reassign the const array
// arr = [4,"bhavana",7.9,true];
// console.log(arr);

// 2D array

// arr = [[1,2,3,4],[5,6,7,8]];
// console.log(arr);
// arr = [[1,2,3],[4,5,6,7]];  //no of columns for each row need not to be same
// console.log(arr);
// console.log(typeof(arr));

// arr = [4,"bhavana",7.9,true,[3,45,5,6]];
// //for loop
// for(let i = 0;i<arr.length;i++){
//     console.log(i,arr[i]);
// }

// //forOf loop

// arr = [2,4,5,67,7,0];

// for(let ele of arr){
//     ele *= 2;  //copying the arr into the variable ele; No changes in array
//     console.log(ele);
// }
// console.log(arr);


//for each loop

arr = [3,4,5,6,9,7];
arr.forEach((element,i,arr) => {
    console.log(element,i,arr);
    
});