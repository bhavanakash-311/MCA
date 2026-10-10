//falsy value -> false condition, false, 0, null, NaN, undefined
//truthy value -> everything except falsy values

if(3){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if(false){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if(0){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if(null){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if("null"){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if(NaN){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy

if(undefined){
    console.log("hello"); //truthy
}else console.log("mello");  //falsy