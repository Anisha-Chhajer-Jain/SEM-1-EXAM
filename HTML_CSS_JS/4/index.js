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
const imag = image.value;
console.log(imag);
const btnn = btn.value;
console.log(btnn);
sessionStorage.setItem("image",imag);
sessionStorage.setItem("btn",btnn);

console.log("Send to session storage",{
  imag: sessionStorage.getItem("image"),
  btnn: sessionStorage.getItem("btn")
});
