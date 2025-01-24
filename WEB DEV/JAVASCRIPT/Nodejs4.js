const http = require("http");
const fs = require("fs");

const hostname = "127.0.0.1";
const port = 3000;
const Home = fs.readFileSync('JAVASCRIPT/Index.html');
const About = fs.readFileSync('JAVASCRIPT/About.html');
const Services = fs.readFileSync('JAVASCRIPT/Services.html');
const Contact = fs.readFileSync('JAVASCRIPT/Contact.html');

const server = http.createServer((req, res) => {
  console.log(req.url);
  const url = req.url;

  res.setHeader("Content-Type", "text/html");
  if (url === '/' || url === '/home') { // Handle root URL
    res.statusCode = 200;
    res.end(Home);
  } else if (url === '/about') {
    res.statusCode = 200;
    res.end(About);
  } else if (url === '/services') {
    res.statusCode = 200;
    res.end(Services);
  } else if (url === '/contact') {
    res.statusCode = 200;
    res.end(Contact);
  } else {
    res.statusCode = 404;
    res.end("<h1>404 not found</h1>");
  }
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});
