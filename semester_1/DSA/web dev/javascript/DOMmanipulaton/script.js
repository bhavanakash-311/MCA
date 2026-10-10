// let x = document.querySelector("h2");

// //Manipulating css through javascript
// x.style.color = "red";
// x.style.fontFamily = "Arial";

// let y = document.querySelector("h1");
// y.style.backgroundColor = "lightblue";

// //manipulating the html through javascript

// setTimeout(function(){
//     y.innerHTML = "Changed";
// },2*1000);


let x = document.getElementById("ele1");

x.addEventListener("click",function(){
    x.style.backgroundColor = "yellow";
    x.style.color = "red";
})