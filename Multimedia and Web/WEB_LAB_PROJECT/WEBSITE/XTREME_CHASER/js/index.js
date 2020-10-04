var slideIndex = 1;
showSlides(slideIndex,1);

function currentSlide(n) {
  showSlides(slideIndex = n, 0);
}

function showSlides(n, x = 1) { 
    var slides = $(".mySlides");
    var dots = $(".dot");

    for (i = 0; i < slides.length; i++){
      slides[i].style.display = "none";  
    } 

    for (i = 0; i < dots.length; i++){
        dots[i].className = dots[i].className.replace(" active", "");
    }

    if (slideIndex > slides.length){
            slideIndex = 1;
    }

    slides[slideIndex-1].style.display = "block";
    dots[slideIndex-1].className += " active";
    slideIndex++;
    if(x==1) setTimeout(showSlides, 2000);
} 