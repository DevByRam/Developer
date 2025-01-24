// Synchronous or blocking
// -line by line execution

// Asynchronous or non-blocking
// -line by line execution not guarranteed
// -callbacks will fire

const fs = require("fs");
fs.readFile("JAVASCRIPT/Node.txt", "utf-8", (err, data) => {
  console.log(err, data);
});
// if file name is given wrong then this will show error that is 
// errno: -4058,
// code: 'ENOENT',
// syscall: 'open',
// path: 'C:\\Users\\DELL\\Dropbox\\CODING\\WE DEV\\JAVASCRIPT\\Node.txt'
console.log("This is a message");
// This is a message to neeche likha he to,ye pehle kyu aa rha he aur baad me data
// This is because of Asynchronous or non-blocking function.maan lo function (err,data) 10 saal leta he read krne me.jab readFile run hoga tab function(err,data) background me run hota rhega lekin ye aage to bdega na to time jyada lene ke wajas se console.log ke andar waala pehle output me aa jayega fir function waala.