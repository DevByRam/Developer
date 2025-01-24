// console.log("Hello world");
const { createServer } = require('node:http');

const hostname = '127.0.0.1';
const port = 3000;

const server = createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Box Model</title>
      <style>
          *{
              box-sizing: border-box;
              margin :0;
              padding: 0;
          }
          body{
              background-color: #472dd6;
          }
          .container{
              font-size: 25px;
              font-style: italic;
              background-color: rgb(120, 43, 197);
              border: 3px solid rgb(34, 218, 187);
              /* padding-top: 60px;
              padding-bottom: 60px;
              padding-left: 18px;
              padding-right: 50px; */
              /* we can set margin/padding for top,bottom,left and right like this.*/
              margin-top: 3px;
              margin-bottom: 5px;
              margin-left: 34px;
              margin-right: 5px;
  
              /* margin/padding:23px 56px 6px 78px; */
              /* margin/padding: top right bottom left; */
              /* margin/padding:y(top/bottom) x(left/right); */
              padding : 34px 19px;
              margin: 30px 35px;
              border-radius: 20px;
              width: 500px;
          }
      </style>
  </head>
  <body>
      <div class="container">
          <h3>This is my heading</h3>
          <p id="first">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quas ex at minima. Et delectus provident dolor, corporis dicta expedita magnam.</p>
      </div>
  
      <div class="container">
          <h3>This is my heading</h3>
          <p id="second">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quas ex at minima. Et delectus provident dolor, corporis dicta expedita magnam.</p>
      </div>
  
      <div class="container">
          <h3>This is my heading</h3>
          <p id="third">Lorem ipsum dolor sit amet consectetur adipisicing elit. Quas ex at minima. Et delectus provident dolor, corporis dicta expedita magnam.</p>
      </div>
  </body>
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
