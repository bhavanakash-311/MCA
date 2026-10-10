// object is like map/dictionary where we have key-value pair

var details = ["bhavana",24,93.9,false];


//Object 

let obj = {
    name: "Bhavana",
    age: 23,
    percentage: 93.9,
    isMarried: false

};
// console.log(obj);
// console.log(obj.name,obj.age);
// console.log(obj["name"]);

// obj["name"] = "kartik";
// console.log(obj.name); 
// obj.age = 21;
// console.log(obj);

// let car ={
//     company: "honda",
//     mileage: 40
// }
// console.log(car);

for (const key in obj) {
        console.log(key, obj[key]);   
}