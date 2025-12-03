const image = document.querySelector("#image");
const btn = document.querySelector("#btn");

btn.addEventListener("click",() => {
    if(image.style.display === "none"){
        image.style.display="block";
        btn.textContent="show";
    }
    else{
        image.style.display="none";
        btn.textContent="hide";
    }
});
