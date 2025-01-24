console.log("This is tutorial of javascript from code with harry");

function greet(Name, greetText)
{
    let Name1 = "Dherya";//This is a local variable only have scope in function
    console.log(greetText + " " + Name);
    console.log(Name + " is a good boy");
}

function sum(a,b,c)
{
    let d = a +b+c;
    return d;
}

let Name = "Ram";
let Name1 = "Aman";
let Name2 = "Deepak";
let Name3 = "Harry";
//Above all are global variables

let greetText = "Good Morning";

greet(Name,greetText);
greet(Name1,greetText);
greet(Name2,greetText);
greet(Name3,greetText);
// console.log(Name + " is a good boy");
// console.log(Name1 + " is a good boy");
// console.log(Name2 + " is a good boy");
// console.log(Name3 + " is a good boy");

// let returnval = greet(Name3);
// console.log(returnval);

let returnval = sum(8,6,4);
console.log(returnval);