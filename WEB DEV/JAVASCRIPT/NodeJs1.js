const fs = require("fs");
let text = fs.readFileSync("JAVASCRIPT/Node.txt", "utf-8");
text = text.replace("start","begin");

console.log("The content stored in the file is :: ");
console.log(text);

console.log("Creating a new file....")
fs.writeFileSync("JAVASCRIPT/NewFile.txt",text);