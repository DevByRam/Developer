// script.js
const switchThemeButton = document.getElementById("switch");

switchThemeButton.addEventListener("click", () => {
  document.body.classList.toggle("white-theme");
  document.body.classList.toggle("black-theme");
});
