// function hello(){
//     console.log("hello");
// }
// function mello(){
//     console.log("mello");
// }

// //callback function
// setTimeout(hello,2*1000);
// setTimeout(mello,1*1000);


// for (let i=1;i<= 10; i++){
//     setTimeout(function(){
//         console.log(i)
//     },i*1000);
// }


// for (let i=10;i>0; i--){
//     setTimeout(function(){
//         console.log(11-i)
//     },i*1000);
// }

// for(let i=1;i<= 10;i++){
//     setTimeout(function(){
//        console.log (Math.floor(Math.random()*10)); //0 to 9
//     },i*500);
// }

for(let i=1;i<= 10;i++){
    setTimeout(function(){
       console.log (Math.ceil(Math.random()*11)); //1 to 10
    },i*500);
}