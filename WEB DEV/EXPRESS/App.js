/*
const express = require("express");
const path = require("path");
const app = express();
const port = 80;

// For serving static files
app.use("/static", express.static("static"));

// Set the template engine as pug
app.set("view engine", "pug");

// Set the views directory
app.set("views", path.join(__dirname, "views"));

// our pug demo endpoint
app.get("/demo", (req, res) => {
  res
    .status(200)
    .render("demo", {
      title: "Hey Ram",
      message: "Hello there and thanks for telling me how to use pug",
    });
});

app.get("/", (req, res) => {
  res.status(200).send("This is homepage of my first express app with Harry");
});

app.get("/about", (req, res) => {
  res.send("This is about of my first express app with Harry");
});

app.post("/about", (req, res) => {
  res.send("This is a post request about of my first express app with Harry");
});

app.post("/this", (req, res) => {
  res
    .status(404)
    .send("This is a post request for this of my first express app with Harry");
});

app.listen(port, () => {
  console.log(`The application started successfully on port ${port}`);
});
*/



const express = require("express");
const path = require("path");
const app = express();
const port = 80; // Changed to a non-privileged port

// EXPRESS SPECIFIC STUFF
app.use("/static", express.static("static")); // For serving static files

// PUG SPECIFIC STUFF
app.set("view engine", "pug"); // Set the template engine as pug
app.set("views", path.join(__dirname, "views")); // Set the views directory

// ENDPOINTS
app.get("/", (req, res) => {
  const con = "This is the best content on the internet so far so use it wisely.";
  const params = {
    title: "Welcome to the Royal Gym",
    content: con,
  };
  res.status(200).render("index.pug", params);
});

// START THE SERVER
app.listen(port, () => {
  console.log(`The application started successfully on port ${port}`);
});
