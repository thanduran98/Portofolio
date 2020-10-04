function responsiveChar() {
  var x = document.getElementById("character");
  if (x.className === "dropdown") {
      x.className += " responsive";
  } else {
      x.className = "dropdown";
  }
}
